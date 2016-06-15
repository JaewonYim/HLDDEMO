/******************************************************************************
******************************************************************************/
#include	<stdio.h>
#include	<time.h>
#if defined(WIN32)
#include	<windows.h>
#include	<winbase.h>
#include	<string.h>
#include	<conio.h>
#else
#endif

//HLD Application
#include    "qtHLD_api.h"
#include "qtHLD_api_extern.h"
#include	"../include/common_def.h"
#include	"../include/hld_const.h"

extern int AdjustBankOffset(int banknum, int bankoffset, int playrate);
extern int CheckPllLock(int nBoardID);//TVB590S, TVB593

//
//	Demonstrate to play one MPEG stream file
//
#define MAX_BOARD_NUM 24

int	dvbt_main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    int		Modulator_Type = 0;//DVB_T
	long    Playrate;
    int     Board_Idx=-1;
	int     Repeat;
	int		Bandwidth;
	int		Guard_Interval;
	int		Tx_Mode;
	int		Coding_Rate;
	int		Constellation;
	long	RF_Freq, IF_Freq;
	int		nSpectrum_Inversion = 0;

	long	Max_Playrate;
	double	dwBandwidth, dwCoderate, dwConstellation, dwGuardInterval;

	int		dwBufferSize;
	char	line[512];
	char	fileName[512];
	float	Atten = 0.;
	int 	nPRBS_mode = 0;
	float 	nNoise_power = 0;
	int 	nPort = -1;//-1 : Play, 0 : Capture from 310M, 1 : Capture from ASI

	int		nBoardTypeID;
	int 	nOptionalOutputAmp;
    long		nBypassAmp=0;//TVB595V1, 0 : Use AMP., 1 : Bypass AMP.

	int		nBankOffset;
	int		Restamping;//PCR, DTS/PTS
	int		ContinuityCounter;
	int		DateTimeOffset;//TDT/TOT
	//2012/4/18
	int DetectedBoardCnt;
	
	//2015/10/1
	char	PN_from_device[MAX_BOARD_NUM][64];
    char    PN_from_user[64];
    char	LN_from_user[64];
    int		idx_ch = 0;

    int nBoardRev;
	int i = 0;
	int cnt = 14;
	cnt += 3;
	cnt += 3;
	//2012/4/18
    DetectedBoardCnt = fpTSPH_CONF_TVB_SYSTEM();
	for(i = 0; i < DetectedBoardCnt; i++)
	{
        fpTSPH_INIT_ONE_REAL_BD(i);
		Sleep(10);
        fpTSPH_ACTIVATE_ONE_BD(i, Modulator_Type, 36000000);
		Sleep(10);
        fpTSPL_GET_ENCRYPTED_SN(i, 0, PN_from_device[i]);
	}
////////////////////////////////////////////////////////////////////////////////

	if ( argc > 1 ) 
	{
		if ( argc < cnt )
		{
		#ifdef WIN32
			printf("Usage:hld_mod_dvb_t.exe");
		#else
			printf("Usage:mod_dvb_t");
		#endif
		
            printf("\nBoardIdx(0 ~ 23)");
            printf("\ninput_source(File: 0, 310M: 1, ASI: 2)");
			printf("\nfile_name");
			printf("\nrepeat_mode");
            printf("\nplayrate");
            printf("\nbandwidth(6MHz: 0, 7MHz: 1, 8MHz: 2)");
            printf("\nconstellation(QPSK: 0, 16QAM: 1, 64QAM: 2)");
            printf("\ntx_mode(2K: 0, 8K: 1)");
            printf("\nguard_interval(1/4: 0, 1/8: 1, 1/16: 2, 1/32: 3)");
            printf("\ncode_rate(1/2: 0, 2/3: 1, 3/4: 2, 5/6: 3, 7/8: 4)");
			printf("\nRF(Hz)");
            //printf("\nIF(36000000 or 44000000 Hz)");
            printf("\nattenuation(0~60, +/-0.1 dB, default: 26dB)");
            printf("\nnoise_mode(none: 0, 2^7-1: 1, 2^10-1: 2, 2^15-1: 3, 2^23-1: 4)");
			//printf("\nnoise_power(-70.0 ~ 20.0, +/-0.1 dB)");
			printf("\nC/N(0.0 ~ 50.0, +/-0.1 dB), noise_mode must be 1~4");
            //printf("\nuse AMP. only for TVB595, TVB590V9.2 or higher(yes : 0, no : 1)");
            printf("\nLoop adaptation[PCR/PTS/DTS](No: 0, Yes: 1)");
            printf("\nLoop adaptation[continuity counter](No: 0, Yes: 1)");
            printf("\nLoop adaptation[TDT/TOT](No: 0, Yes: 1, Use current time: 2)");
			return 0;
		}

		i = 1;
        Board_Idx = atoi(argv[i]);
		nPort = atoi(argv[++i]);
		nPort -= 1;
		sprintf(fileName, "%s", argv[++i]);
		Repeat = atoi(argv[++i]);
		Playrate = atol(argv[++i]);
		Bandwidth = atoi(argv[++i]);
		Constellation = atoi(argv[++i]);
		Tx_Mode = atoi(argv[++i]);
		Guard_Interval = atoi(argv[++i]);
		Coding_Rate = atoi(argv[++i]);
		RF_Freq = atol(argv[++i]);
        //IF_Freq = atol(argv[++i]);
		Atten = (float)atof(argv[++i]);
		nPRBS_mode = atoi(argv[++i]);
		nNoise_power = (float)atof(argv[++i]);
        //nBypassAmp = atoi(argv[++i]);
		Restamping = atoi(argv[++i]);;
		ContinuityCounter = atoi(argv[++i]);
		DateTimeOffset = atoi(argv[++i]);
	}
	else
	{

		printf("---------------------------------------------------\n");
		
#if 1
		for(i = 0; i < DetectedBoardCnt; i++)
		{
            printf("%d: P/N: %s, Location: %s\n",i, PN_from_device[i],  fpTSPH_GET_BD_NAME_N(i));
		}
		printf("Select board (0 ~ %d) : ", (DetectedBoardCnt - 1));
		
		fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &Board_Idx);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
            Board_Idx = 0;
		}
        if ( Board_Idx < 0 || Board_Idx >= DetectedBoardCnt)
		{
            if(DetectedBoardCnt == 1)
                Board_Idx = 0;
            else
            {
                printf("Invalid board index. Try again\n");
                return 0;
            }
		}
#endif
//////////////////////////////////////////////////////////////////////////////////////		
		printf("Input source(File : 0, 310M : 1, ASI : 2) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &nPort);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			nPort = 0;
		}
		if ( nPort < 0 || nPort > 2 )
		{
            printf("Invalid input source. Try again.\n");
			return 0;
		}
		nPort -= 1;

		if ( nPort < 0 )
			printf("File name to play : ");
		else
			printf("File name to record : ");
		fgets(fileName, sizeof(fileName), stdin);
		/* Removing the '\n' character from the end */
		dwBufferSize = strlen(fileName)-1;
		fileName[dwBufferSize] = '\0';
		if ( strlen(fileName) == 0 )
		{
            printf("Invalid file name. Try again.\n");
			return 0;
		}

		/* Play Mode Paramters */
		if ( nPort < 0 )
		{
			printf("Repeat mode(Once:0, Loop:1) : ");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%d", &Repeat);
			dwBufferSize = strlen(line)-1;
			line[dwBufferSize] = '\0';
			if ( strlen(line) == 0 )
			{
				Repeat = 1;
			}
			if ( Repeat < 0 )
			{
				printf("Invalid repeat mode.\n");
                printf("Set default value 1(Loop).\n");
                Repeat = 1;

			}
			
			printf("Play rate(bps) : ");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%ld", &Playrate);
			dwBufferSize = strlen(line)-1;
			line[dwBufferSize] = '\0';
			if ( strlen(line) == 0 )
			{
                printf("Invalid play rate. Try again\n");
                return 0;
			}
            if( Playrate < 0)
            {
                printf("Invalid play rate. Try again\n");
                Playrate = 0;
                return 0;
            }
		}	
		/* Record Mode Paramters */
		else
		{
		}

		/* Modulator Paramters */
		printf("Bandwidth(6MHz : 0, 7MHz : 1, 8MHz : 2) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &Bandwidth);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
            Bandwidth = 2;
		}
		if ( Bandwidth < 0 || Bandwidth > 2 )
		{
			printf("Invalid bandwidth.\n");
            printf("Set default value 2(8MHz).\n");
            return 2;
		}

		printf("Constellation(QPSK : 0, 16QAM : 1, 64QAM : 2) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &Constellation);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
            Constellation = 2;
		}
		if ( Constellation < 0 || Constellation > 2 )
		{
			printf("Invalid constellation.\n");
            printf("Set default value 2(64QAM).\n");
            Constellation = 2;
		}

		printf("Tx mode(2K : 0, 8K : 1) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &Tx_Mode);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			Tx_Mode = 0;
		}
		if ( Tx_Mode < 0 || Tx_Mode > 1 )
		{
			printf("Invalid tx mode.\n");
            printf("Set default value 0(2K).\n");
            Tx_Mode = 0;
		}

		printf("Guard interval(1/4 : 0, 1/8 : 1, 1/16 : 2, 1/32 : 3) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &Guard_Interval);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
            Guard_Interval = 3;
		}
		if ( Guard_Interval < 0 || Guard_Interval > 3 )
		{
			printf("Invalid guard interval.\n");
            printf("Set default value 3(1/32).\n");
            Guard_Interval = 3;
		}

		printf("Code rate(1/2 : 0, 2/3 : 1, 3/4 : 2, 5/6 : 3, 7/8 : 4) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &Coding_Rate);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
            Coding_Rate = 4;
		}
		if ( Coding_Rate < 0 || Coding_Rate  > 4 )
		{
			printf("Invalid code rate.\n");
            printf("Set default value 4(7/8).\n");
            Coding_Rate = 4;
		}

		printf("RF freq.(Hz) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%ld", &RF_Freq);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			RF_Freq = 473000000;
		}
		if ( RF_Freq < 0 )
		{
			printf("Invalid RF frequency.\n");
            printf("Set default value 473000000.\n");
            RF_Freq = 473000000;
		}
        printf("Attenuation(dB)(0.0~60.0, +/-0.1) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &Atten);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
            Atten = 26.0;
		}
        if ( Atten < 0 || Atten > 60.0)
		{
			printf("Invalid attenuation value.\n");
            printf("Set default value 26.0.\n");
            Atten = 26.0;
		}

		printf("Noise mode(none : 0, 2^7-1 : 1, 2^10-1 : 2, 2^15-1 : 3, 2^23-1 : 4) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &nPRBS_mode);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			nPRBS_mode = 0;
		}
		if ( nPRBS_mode < 0 || nPRBS_mode > 4 )
		{
			printf("Invalid noise mode.\n");
            printf("Set default value 0.\n");
            nPRBS_mode = 0;
		}

		//printf("Noise power(dB)(-70.0 ~ 20.0, +/-0.1) : ");
		printf("C/N(dB)(0.0 ~ 50.0, +/-0.1, Noise mode must be 1~4) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &nNoise_power);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			//nNoise_power = -70.0;
			nNoise_power = 50.0;
		}
		//if ( nNoise_power < -70.0 || nNoise_power > 20.0 )
		if ( nNoise_power < 0.0 || nNoise_power > 50.0 )
		{
			printf("Invalid C/N.\n");
            printf("Set default value 50.0.\n");
            nNoise_power = 50.0;
		}
        printf("Loop adaptation[PCR/PTS/DTS](No: 0, Yes: 1): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &Restamping);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			Restamping = 0;
		}
		if ( Restamping < 0 || Restamping > 1 )
		{
            printf("Invalid Loop adaptation[PCR/PTS/DTS].\n");
            printf("Set default value 0(No).\n");
            Restamping = 0;
		}

        printf("Loop adaptation[Continuity Counter](No: 0, Yes: 1): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &ContinuityCounter);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			ContinuityCounter = 0;
		}
		if ( ContinuityCounter < 0 || ContinuityCounter > 1 )
		{
            printf("Invalid Loop adaptation[Continuity Counter].\n");
            printf("Set default value 0(No).\n");
            ContinuityCounter = 0;
		}

        printf("Loop adaptation[TDT/TOT](No: 0, Yes: 1, Use current time: 2) : ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &DateTimeOffset);
		dwBufferSize = strlen(line)-1;
		line[dwBufferSize] = '\0';
		if ( strlen(line) == 0 )
		{
			DateTimeOffset = 0;
		}
		if ( DateTimeOffset < 0 || DateTimeOffset > 2 )
		{
            printf("Invalid Loop adaptation[TDT/TOT].\n");
            printf("Set default value 0(No).\n");
            DateTimeOffset = 0;
		}

		printf("---------------------------------------------------\n");
	}

	for(i = 0; i < DetectedBoardCnt; i++)
	{
        if(i != Board_Idx)
		{
            fpTSPH_CLOSE_ONE_REAL_BD(i);
		}
	}

    /* check the modulator permission */
    if ( fpTVB380_IS_ENABLED_TYPE(Board_Idx, Modulator_Type) == 0 )
    {
        printf("!!!! Modulator is not enabled. Input License number.\n");
        printf("P/N[%s] Input License Number:", PN_from_device[Board_Idx]);
        fgets(LN_from_user, sizeof(LN_from_user), stdin);
        dwBufferSize = strlen(LN_from_user)-1;
        LN_from_user[dwBufferSize] = '\0';

        if(strlen(LN_from_user) != 32)
        {
            printf("Invalid license number. Try again.\n");
            return 0;
        }
        i = 0;
        while(1)
        {
            if(LN_from_user[i] == '\0')
                break;
            LN_from_user[i] = toupper(LN_from_user[i]);
            i++;
        }
        if(fpTSPL_CHECK_LN(Board_Idx, LN_from_user) > 0)
        {
            if(fpTVB380_IS_ENABLED_TYPE(Board_Idx, Modulator_Type) == 0)
            {
                printf("Permission denied. Check L/N. Try again.\n");
            }
        }
        else
        {
            printf("Invalid license number. Try again.\n");
            return 0;
        }

    }

    /* check play rate is valid */
	dwBandwidth = (Bandwidth + 6.) * 1000000;
                     
	if ( Coding_Rate == 0 )			dwCoderate = 1 / 2.;
	else if ( Coding_Rate == 1 )	dwCoderate = 2 / 3.;
	else if ( Coding_Rate == 2 )	dwCoderate = 3 / 4.;
	else if ( Coding_Rate == 3 )	dwCoderate = 5 / 6.;
	else							dwCoderate = 7 / 8.;
                                    
	if ( Constellation == 0 )      		dwConstellation = 2.;
	if ( Constellation == 1 )      		dwConstellation = 4.;
	else			        			dwConstellation = 6.;
                
   if ( Guard_Interval == 0 )		dwGuardInterval = 4 / 5.;
   if ( Guard_Interval == 1 )		dwGuardInterval = 8 / 9.;
   if ( Guard_Interval == 2 )		dwGuardInterval = 16 / 17.;
   else							dwGuardInterval = 32 / 33.;

   Max_Playrate = (long)(423 / 544. * dwBandwidth * dwCoderate * dwConstellation * dwGuardInterval);

   printf("!!!!Maximum Play Rate(bps) is [%ld]\n", Max_Playrate);
   if (Playrate > Max_Playrate)
   {
       return 0;
   }

	/* read the board ID */
    nBoardTypeID = fpTSPL_GET_BOARD_ID(Board_Idx);

    //read the board revision
    nBoardRev = fpTSPL_GET_BOARD_REV(Board_Idx);

    fpTSPL_RESET_SDCON(Board_Idx);
	Sleep(100);

	/* set modulator parameters */
    fpTVB380_SET_MODULATOR_FREQ(Board_Idx, Modulator_Type, RF_Freq, Bandwidth);
    fpTVB380_SET_MODULATOR_BANDWIDTH(Board_Idx, Modulator_Type, Bandwidth, RF_Freq);
    fpTVB380_SET_MODULATOR_TXMODE(Board_Idx, Modulator_Type, Tx_Mode);
    fpTVB380_SET_MODULATOR_CODERATE(Board_Idx, Modulator_Type, Coding_Rate);
    fpTVB380_SET_MODULATOR_GUARDINTERVAL(Board_Idx, Modulator_Type, Guard_Interval);
    fpTVB380_SET_MODULATOR_CONSTELLATION(Board_Idx, Modulator_Type, Constellation);

    //TVB390V7, V8 or higher
    if ( nBoardTypeID >= 0x2C
        || nBoardTypeID == 0x0A
        || nBoardTypeID == 0x14
        || nBoardTypeID == 0x0F
        || nBoardTypeID == 0x10
        || nBoardTypeID == 0x0B
        || nBoardTypeID == 0x0C
        || nBoardTypeID == 0x15	  //TVB591
        || nBoardTypeID == 0x16 ) //TVB591S
    {
        //2015/12/14
        if(nBoardTypeID >= 0x2C || nBoardTypeID == 0x0A || (nBoardTypeID == 0x14 && nBoardRev < 0x3))
        {
            if(Atten > 31.5)
            {
                Atten = Atten - 31.5;
                nBypassAmp = 1;
            }
            else
            {
                nBypassAmp = 0;
            }
            fpTVB380_SET_MODULATOR_ATTEN_VALUE(Board_Idx, Modulator_Type, Atten, 0);
            fpTVB380_SET_BOARD_CONFIG_STATUS(Board_Idx, Modulator_Type, nBypassAmp);
        }
        else
        {
            double rf_level_min, rf_level_max;
            fpTVB59X_GET_MODULATOR_RF_LEVEL_RANGE(Board_Idx, Modulator_Type, &rf_level_min, &rf_level_max, 0);
            Atten = 0 - Atten;
            if(rf_level_min > Atten || rf_level_max < Atten)
            {
                printf("Valid RF level range: %0.1f ~ %0.1f\n", (rf_level_min * -1), (rf_level_max * -1));
                printf("Set default value 26.0.\n");
                Atten = 26.0;
            }
            fpTVB59X_SET_MODULATOR_RF_LEVEL_VALUE(Board_Idx, Modulator_Type, Atten, &nBypassAmp, 0);
            printf("Amplifier %s\n", ((nBypassAmp == 0) ? "off" : "on"));

        }
        fpTVB380_SET_MODULATOR_PRBS_INFO(Board_Idx, Modulator_Type, nPRBS_mode, nNoise_power);
    }

	/* TVB590V10, TVB595V3, TVB595V4, TVB597A, TVB590S, TVB593 */
	/* Set SDRAM clock mode, 0=USE SYSTEM CLOCK, 1=USE SYMBOL CLOCK */
	if ( nBoardTypeID == 0x30 
		|| nBoardTypeID == 0x3C
		|| nBoardTypeID == 0x3D
		|| nBoardTypeID == 0x0A
		|| nBoardTypeID == 0x14 
		|| nBoardTypeID == 0x0F
		|| nBoardTypeID == 0x10
		|| nBoardTypeID == 0x0B
		|| nBoardTypeID == 0x0C
		|| nBoardTypeID == 0x15	  //TVB591	
		|| nBoardTypeID == 0x16 ) //TVB591S 
	{
        fpTVB380_SET_MODULATOR_SDRAM_CLOCK(Board_Idx, Modulator_Type, 0);
	}

	/* set board configuration for playing */
	nBankOffset = AdjustBankOffset(HW_BANK_NUMBER, SUB_BANK_OFFSET_SIZE, Playrate);
	/* record */
	if ( nPort == 0 || nPort == 1 )
	{
		nBankOffset = SUB_BANK_OFFSET_SIZE;
	}

	printf("Adjusted bank offset=%d\n", nBankOffset);
    //if ( TSPH_SET_SDRAM_BANK_INFO(Board_Idx, HW_BANK_NUMBER, SUB_BANK_OFFSET_SIZE) == -1 )
    if ( fpTSPH_SET_SDRAM_BANK_INFO(Board_Idx, HW_BANK_NUMBER, nBankOffset) == -1 )
		printf("FAIL: can not set SDRAM BANK info, unstable board status\n");

    if (fpTSPL_RESET_SDCON(Board_Idx) == -1)
		printf("FAIL: fail to reset SDCON, REBOOT the system\n");

    if (fpTSPL_SET_SDCON_MODE(Board_Idx, TSPL_SDCON_LOOP_THRU_MODE) == -1)
		printf("FAIL: can not set SDCON mode, unstable board status\n");	

    if (fpTSPL_SET_TSIO_DIRECTION(Board_Idx, TSIO_PLAY_WITH_ASIINPUT) == -1)
		printf("FAIL: can not set TSIO direction, unstable board status\n");	

	/* TVB595V2, TVB595V3, TVB595V4, TVB597A */
	if ( nBoardTypeID == 0x3B
		|| nBoardTypeID == 0x3C	
		|| nBoardTypeID == 0x3D
		|| nBoardTypeID == 0x0A
		|| nBoardTypeID == 0x0B
		|| nBoardTypeID == 0x0C)	//2011/6/21 TVB597A V2
	{
        fpTSPL_SET_FIFO_CONTROL(Board_Idx,
			(nPort == 0 || nPort == 1) ? 1/* RECORD */ : 0 /* PLAY */,
			nBankOffset<<10/* DMA BLOCK SIZE*/);
	}

	/* TVB590S, TVB593 */
	/* Check PLL lock status */
	if ( nBoardTypeID == 0x14 
		|| nBoardTypeID == 0x0F
		|| nBoardTypeID == 0x10
		|| nBoardTypeID == 0x0B
		|| nBoardTypeID == 0x0C
		|| nBoardTypeID == 0x16 ) //TVB591S 
	{
        if ( !CheckPllLock(Board_Idx) )
		{
			printf("ERROR: Invalid PLL lock status.\n");
			return 0;
		}
	}
	do 
	{
        fpTSPH_START_MONITOR(Board_Idx, 0);
		Sleep(500);
		//Record
		if ( nPort == 0 || nPort == 1 )
		{
            fpTSPH_START_RECORD(Board_Idx, fileName, nPort+1);
		}
		//Play
		else
		{
            fpTSPH_SET_LOOP_ADAPTATION(Board_Idx, Restamping, ContinuityCounter, DateTimeOffset, "", "");

            fpTSPH_START_PLAY(Board_Idx, fileName, Playrate, 0, 0, Repeat);
			if ( Repeat < 1 )
			{
				printf("PRESS another key to end\n");
				while(!_kbhit())
				{
                    if ( fpTSPH_GET_CURRENT_THREAD_STATE(Board_Idx) == 8/*TH_END_PLAY*/ )
						break;
					Sleep(10);
				}
				break;
			}
		}

		printf("PRESS another key to end\n");
		i = _getch();	// wait to finish job

	} while ((i == 'c') || (i == 'C'));

    fpTSPH_START_MONITOR(Board_Idx, 0);
	Sleep(1000);
    return 0;
 }
//------------- ends here -------------------
