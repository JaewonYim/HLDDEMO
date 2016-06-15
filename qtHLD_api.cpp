#include "../include/base_def.h"
#include "../include/type_def.h"
#include "../include/err_def.h"
#include "../include/log_def.h"
#include "qtHLD_api.h"
#include <QDebug>
#include <QProcess>

TSPH_SET_C2MI_PARAMS_T                       fpTSPH_SET_C2MI_PARAMS;
TSPL_SET_AD9775_T                            fpTSPL_SET_AD9775;
TSPL_GET_AD9787_T                            fpTSPL_GET_AD9787;
TSPL_GET_AD9775_T                            fpTSPL_GET_AD9775;
TSPL_SET_AD9787_T                            fpTSPL_SET_AD9787;
TSPH_TRY_ALLOC_IQ_MEMORY_T                   fpTSPH_TRY_ALLOC_IQ_MEMORY;
TSPH_SET_IQ_MODE_T                           fpTSPH_SET_IQ_MODE;
TSPH_SET_COMBINER_INFO_T                     fpTSPH_SET_COMBINER_INFO;
TSPH_CAL_PLAY_RATE_T                         fpTSPH_CAL_PLAY_RATE;
TSPH_IS_COMBINED_TS_T                        fpTSPH_IS_COMBINED_TS;
TSPH_GET_TS_ID_T                             fpTSPH_GET_TS_ID;
TSPL_READ_CONTROL_REG_T                      fpTSPL_READ_CONTROL_REG;
TSPL_WRITE_CONTROL_REG_T                     fpTSPL_WRITE_CONTROL_REG;
TSPH_SET_LOOP_ADAPTATION_T                   fpTSPH_SET_LOOP_ADAPTATION;
TSPH_SET_T2MI_PARAMS_T                       fpTSPH_SET_T2MI_PARAMS;
TSPH_SET_T2MI_PARAMS_GENERAL_T               fpTSPH_SET_T2MI_PARAMS_GENERAL;
TSPH_SET_T2MI_PARAMS_PLPS_T                  fpTSPH_SET_T2MI_PARAMS_PLPS;
TSPH_SET_T2MI_INTERVAL_PLAY_PLP_T            fpTSPH_SET_T2MI_INTERVAL_PLAY_PLP;
TSPH_SET_T2MI_PARAMS_EXTENSION_T             fpTSPH_SET_T2MI_PARAMS_EXTENSION;
TVB380_SET_MODULATOR_BANDWIDTH_T             fpTVB380_SET_MODULATOR_BANDWIDTH;
TSPH_GET_T2MI_PARAMS_T                       fpTSPH_GET_T2MI_PARAMS;
TSPH_RUN_T2MI_PARSER_T                       fpTSPH_RUN_T2MI_PARSER;
TSPH_ISDBS_CALC_COMBINED_TS_BITRATE_T        fpTSPH_ISDBS_CALC_COMBINED_TS_BITRATE;
TSPL_RESET_SDCON_T                           fpTSPL_RESET_SDCON;
TSPH_GET_MHE_PACKET_INFO_T                   fpTSPH_GET_MHE_PACKET_INFO;
TSPH_GET_LOOP_COUNT_T                        fpTSPH_GET_LOOP_COUNT;
TSPL_SET_AD9852_MAX_CLOCK_T                  fpTSPL_SET_AD9852_MAX_CLOCK;
TVB380_SET_BOARD_CONFIG_STATUS_T             fpTVB380_SET_BOARD_CONFIG_STATUS;
TSPH_RUN_ATSC_MH_PARSER_T                    fpTSPH_RUN_ATSC_MH_PARSER;
TSPH_GET_BOARD_LOCATION_T                    fpTSPH_GET_BOARD_LOCATION;
TSPL_GET_BOARD_ID_T                          fpTSPL_GET_BOARD_ID;
TVB380_SET_MODULATOR_AGC_T                   fpTVB380_SET_MODULATOR_AGC;
TVB380_SET_MODULATOR_ATTEN_VALUE_T           fpTVB380_SET_MODULATOR_ATTEN_VALUE;
TVB380_GET_MODULATOR_RF_POWER_LEVEL_T        fpTVB380_GET_MODULATOR_RF_POWER_LEVEL;
TSPH_RUN_MFS_PARSER_T                        fpTSPH_RUN_MFS_PARSER;
TVB380_SET_MODULATOR_SPECTRUM_INVERSION_T    fpTVB380_SET_MODULATOR_SPECTRUM_INVERSION;
TSPH_SET_CURRENT_OFFSET_T                    fpTSPH_SET_CURRENT_OFFSET;
TSPL_SET_BOARD_LED_STATUS_T                  fpTSPL_SET_BOARD_LED_STATUS;
TSPL_GET_BOARD_REV_T                         fpTSPL_GET_BOARD_REV;
TSPL_GET_BOARD_CONFIG_STATUS_T               fpTSPL_GET_BOARD_CONFIG_STATUS;
TSPL_GET_AUTHORIZATION_T                     fpTSPL_GET_AUTHORIZATION;
TSPL_GET_FPGA_INFO_T                         fpTSPL_GET_FPGA_INFO;
TVB380_SET_STOP_MODE_T                       fpTVB380_SET_STOP_MODE;
TSPH_SET_SDRAM_BANK_INFO_T                   fpTSPH_SET_SDRAM_BANK_INFO;
TSPH_START_MONITOR_T                         fpTSPH_START_MONITOR;
TSPL_SET_TSIO_DIRECTION_T                    fpTSPL_SET_TSIO_DIRECTION;
TSPH_SET_MODULATOR_TYPE_T                    fpTSPH_SET_MODULATOR_TYPE;
TSPH_SET_ERROR_INJECTION_T                   fpTSPH_SET_ERROR_INJECTION;
TVB380_SET_CONFIG_T                          fpTVB380_SET_CONFIG;
TVB380_SET_MODULATOR_IF_FREQ_T               fpTVB380_SET_MODULATOR_IF_FREQ;
TVB380_SET_MODULATOR_FREQ_T                  fpTVB380_SET_MODULATOR_FREQ;
TVB380_SET_MODULATOR_DVBH_T                  fpTVB380_SET_MODULATOR_DVBH;
TVB380_SET_MODULATOR_TXMODE_T                fpTVB380_SET_MODULATOR_TXMODE;
TVB380_SET_MODULATOR_CODERATE_T              fpTVB380_SET_MODULATOR_CODERATE;
TVB380_SET_MODULATOR_GUARDINTERVAL_T         fpTVB380_SET_MODULATOR_GUARDINTERVAL;
TVB380_SET_MODULATOR_CONSTELLATION_T         fpTVB380_SET_MODULATOR_CONSTELLATION;
TVB380_SET_MODULATOR_SYMRATE_T               fpTVB380_SET_MODULATOR_SYMRATE;
TVB380_SET_MODULATOR_INTERLEAVE_T            fpTVB380_SET_MODULATOR_INTERLEAVE;
TVB380_SET_MODULATOR_PRBS_MODE_T             fpTVB380_SET_MODULATOR_PRBS_MODE;
TVB380_SET_MODULATOR_PRBS_SCALE_T            fpTVB380_SET_MODULATOR_PRBS_SCALE;
TVB380_SET_MODULATOR_PRBS_INFO_T             fpTVB380_SET_MODULATOR_PRBS_INFO;
TSPH_SET_TMCC_REMUXER_T                      fpTSPH_SET_TMCC_REMUXER;
TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_T       fpTVB380_SET_MODULATOR_ROLL_OFF_FACTOR;
TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK_T  fpTVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK;
TVB380_SET_MODULATOR_PILOT_T                 fpTVB380_SET_MODULATOR_PILOT;
TSPL_SET_MAX_PLAYRATE_T                      fpTSPL_SET_MAX_PLAYRATE;
TVB380_SET_MODULATOR_BERT_MEASURE_T          fpTVB380_SET_MODULATOR_BERT_MEASURE;
TVB380_SET_MODULATOR_SDRAM_CLOCK_T           fpTVB380_SET_MODULATOR_SDRAM_CLOCK;
TSPL_GET_ENCRYPTED_SN_T                      fpTSPL_GET_ENCRYPTED_SN;
TSPL_GET_SN_T                                fpTSPL_GET_SN;
TVB380_IS_ENABLED_TYPE_T                     fpTVB380_IS_ENABLED_TYPE;
TSPL_GET_LAST_ERROR_T                        fpTSPL_GET_LAST_ERROR;
TSPL_SET_PLAY_RATE_T                         fpTSPL_SET_PLAY_RATE;
TVB380_SET_MODULATOR_DTMB_T                  fpTVB380_SET_MODULATOR_DTMB;
TSPH_SET_FILENAME_NEXT_PLAY_T                fpTSPH_SET_FILENAME_NEXT_PLAY;
TSPH_SET_ISDBS_BASE_TS_T                     fpTSPH_SET_ISDBS_BASE_TS;
TSPH_SET_RX_IP_STREAMING_INFO_T              fpTSPH_SET_RX_IP_STREAMING_INFO;
TSPH_START_IP_STREAMING_T                    fpTSPH_START_IP_STREAMING;
TSPH_START_PLAY_T                            fpTSPH_START_PLAY;
TSPH_START_RECORD_T                          fpTSPH_START_RECORD;
TSPH_SET_REPEAT_PLAY_MODE_T                  fpTSPH_SET_REPEAT_PLAY_MODE;
TSPH_GET_REMUX_INFO_T                        fpTSPH_GET_REMUX_INFO;
TSPL_CHECK_LN_T                              fpTSPL_CHECK_LN;
TSPH_GET_CURRENT_RECORD_POINT_T              fpTSPH_GET_CURRENT_RECORD_POINT;
TSPH_GET_CURRENT_THREAD_STATE_T              fpTSPH_GET_CURRENT_THREAD_STATE;
TVB380_GET_MODULATOR_BERT_RESULT_T           fpTVB380_GET_MODULATOR_BERT_RESULT;
TSPH_GET_PLAY_BUFFER_STATUS_T                fpTSPH_GET_PLAY_BUFFER_STATUS;
TSPH_GET_PROGRAM_T                           fpTSPH_GET_PROGRAM;
TSPH_GET_REMUX_DATARATE_T                    fpTSPH_GET_REMUX_DATARATE;
TSPH_IS_VIDEO_WINDOW_VISIBLE_T               fpTSPH_IS_VIDEO_WINDOW_VISIBLE;
TSPH_MOVE_VIDEO_WINDOW_T                     fpTSPH_MOVE_VIDEO_WINDOW;
TSPL_READ_INPUT_STATUS_T                     fpTSPL_READ_INPUT_STATUS;
TSPL_READ_INPUT_TSCOUNT_T                    fpTSPL_READ_INPUT_TSCOUNT;
TSPH_READ_IP_STREAMING_INPUT_STATUS_T        fpTSPH_READ_IP_STREAMING_INPUT_STATUS;
TSPH_SET_LAYER_INFO_T                        fpTSPH_SET_LAYER_INFO;
TSPH_SET_PROGRAM_T                           fpTSPH_SET_PROGRAM;
TSPH_SET_REMUX_INFO_T                        fpTSPH_SET_REMUX_INFO;
TSPH_SHOW_VIDEO_WINDOW_T                     fpTSPH_SHOW_VIDEO_WINDOW;
TSPH_EXIT_PROCESS_T                          fpTSPH_EXIT_PROCESS;
TSPH_CLEAR_REMUX_INFO_T                      fpTSPH_CLEAR_REMUX_INFO;
TSPH_RUN_C2MI_PARSER_T                       fpTSPH_RUN_C2MI_PARSER;
TSPH_IP_RECV_STATUS_T                        fpTSPH_IP_RECV_STATUS;
TSPH_START_DELAY_T                           fpTSPH_START_DELAY;
TSPH_IS_LOOPTHRU_ISDBT13_188_T               fpTSPH_IS_LOOPTHRU_ISDBT13_188;
TSPH_PAUSE_LOOPTHRU_ISDBT13_PARSER_T         fpTSPH_PAUSE_LOOPTHRU_ISDBT13_PARSER;
TSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188_T        fpTSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188;
TSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188_T    fpTSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188;
TSPH__STREAM_NUMBER_T                        fpTSPH__STREAM_NUMBER;
TSPH__SEL_TS_OF_ASI310OUT_T                  fpTSPH__SEL_TS_OF_ASI310OUT;
TSPH_GET_NIT_SATELLITE_INFO_T                fpTSPH_GET_NIT_SATELLITE_INFO;
TSPH_GET_NIT_CABLE_INFO_T                    fpTSPH_GET_NIT_CABLE_INFO;
TSPH_GET_NIT_TERRESTRIAL_INFO_T              fpTSPH_GET_NIT_TERRESTRIAL_INFO;
TVB380_SET_MODULATOR_SINGLE_TONE_T           fpTVB380_SET_MODULATOR_SINGLE_TONE;
TVB380_SET_MTS_STREAM_ID_T                   fpTVB380_SET_MTS_STREAM_ID;
TVB380_SET_DVBS2_INPUT_STREAM_MODE_T         fpTVB380_SET_DVBS2_INPUT_STREAM_MODE;
TSPH_GET_REAL_BD_CNT_N_T                     fpTSPH_GET_REAL_BD_CNT_N;
TSPH_GET_REAL_AND_VIR_BD_MAP_T               fpTSPH_GET_REAL_AND_VIR_BD_MAP;
TSPH_GET_BD_ID_N_T                           fpTSPH_GET_BD_ID_N;
TSPH_GET_BD_NAME_N_T                         fpTSPH_GET_BD_NAME_N;
TSPH_CONF_TVB_SYSTEM_T                       fpTSPH_CONF_TVB_SYSTEM;
TSPH_INIT_ALL_REAL_BD_T                      fpTSPH_INIT_ALL_REAL_BD;
TSPH_INIT_VIR_BD_T                           fpTSPH_INIT_VIR_BD;
TSPH_ACTIVATE_ONE_BD_T                       fpTSPH_ACTIVATE_ONE_BD;
TSPL_CNT_MULTI_VSB_RFOUT_T                   fpTSPL_CNT_MULTI_VSB_RFOUT;
TSPL_CNT_MULTI_QAM_RFOUT_T                   fpTSPL_CNT_MULTI_QAM_RFOUT;
TSPL_CNT_MULTI_DVBT_RFOUT_T                  fpTSPL_CNT_MULTI_DVBT_RFOUT;
TSPL_CNT_MULTI_DVBS2_RFOUT_T                 fpTSPL_CNT_MULTI_DVBS2_RFOUT;
TSPH_RUN_TS_PARSER2_T                        fpTSPH_RUN_TS_PARSER2;
TVB59X_SET_MODULATOR_RF_LEVEL_VALUE_T        fpTVB59X_SET_MODULATOR_RF_LEVEL_VALUE;
TVB59X_GET_MODULATOR_RF_LEVEL_RANGE_T        fpTVB59X_GET_MODULATOR_RF_LEVEL_RANGE;
TVB59X_SET_PCR_STAMP_CNTL_T                  fpTVB59X_SET_PCR_STAMP_CNTL;

TSPH_SET_T2MI_STREAM_GENERATION_T            fpTSPH_SET_T2MI_STREAM_GENERATION;
TVB59X_SET_OUTPUT_TS_TYPE_T                  fpTVB59X_SET_OUTPUT_TS_TYPE;
TVB59X_SET_RESET_CONTROL_REG_T               fpTVB59X_SET_RESET_CONTROL_REG;
TSPL_SET_SDCON_MODE_T                        fpTSPL_SET_SDCON_MODE;
CALL_TVB59X_SET_TSPACKET_CNT_MODE_T          fpCALL_TVB59X_SET_TSPACKET_CNT_MODE;
CALL_TVB59X_GET_ASI_INPUT_RATE_T             fpCALL_TVB59X_GET_ASI_INPUT_RATE;
CALL_TVB59X_MODULATOR_STATUS_CONTROL_T       fpCALL_TVB59X_MODULATOR_STATUS_CONTROL;
CALL_TVB59X_GET_MODULATOR_STATUS_T           fpCALL_TVB59X_GET_MODULATOR_STATUS;
CALL_TSPL_GET_TSIO_STATUS_T                  fpCALL_TSPL_GET_TSIO_STATUS;

CALL_TSPH_SET_IP_ENABLE_NULL_PACKET_T        fpCALL_TSPH_SET_IP_ENABLE_NULL_PACKET;
CALL_TVB59X_SET_T2MI_CONTROL_T               fpCALL_TVB59X_SET_T2MI_CONTROL;
CALL_TSPH_SET_ISDBTMM_PARAMETERS_T           fpCALL_TSPH_SET_ISDBTMM_PARAMETERS;
TVB59X_SET_DVB_S2X_MODCOD_T                  fpTVB59X_SET_DVB_S2X_MODCOD;
TSPH_INIT_ONE_REAL_BD_T                      fpTSPH_INIT_ONE_REAL_BD;
TSPH_CLOSE_ONE_REAL_BD_T                     fpTSPH_CLOSE_ONE_REAL_BD;
TSPL_SET_FIFO_CONTROL_T                      fpTSPL_SET_FIFO_CONTROL;
#ifndef WIN32
DLLMAIN_T                                    fpDLLMain;
#endif //WIN32

QLibrary libHld_;

EN_OS_TYPE detect_os_()
{
    QString str = QSysInfo::kernelType();

    if(-1 != str.indexOf("winnt", 0, Qt::CaseInsensitive))
        return EN_OS_WIN;
    if(-1 != str.indexOf("darwin", 0, Qt::CaseInsensitive))
        return EN_OS_MAC;
    if(-1 != str.indexOf("linux", 0, Qt::CaseInsensitive)) {
        str = QSysInfo::productType();
        if(-1 != str.indexOf("android", 0, Qt::CaseInsensitive))
            return EN_OS_ANDROID;
        return EN_OS_LINUX;
    }
    return EN_OS_UNKNOWN;

}


int hldLibrary_Load()
{
    static EN_OS_TYPE enOS;
    QString strLib;
    enOS = detect_os_();
    switch(enOS)
    {
    case EN_OS_WIN:
        strLib = "hld";
        break;
    case EN_OS_LINUX:
        QProcess::execute(QString("sudo ./l 590")); // for pci board
        strLib = "lib/libhld.so";
        break;
    case EN_OS_MAC:
        strLib = "lib/libhld";
        break;
    case EN_OS_ANDROID:
        strLib = "lib/hld.so";
        break;
    default:
        return ERR_DETECT_OS;
    }


    libHld_.setFileName(strLib);
    if(false == libHld_.load()) {
        // err log.
        QString err = libHld_.errorString();
        return ERR_HLD_LOAD;
    }

//    if(NULL == (fpTSPH_GET_HLD=(TSPH_GET_HLD_T)libHld_.resolve("TSPH_GET_HLD"))) {
//        qDebug("hld function resulve error. [TSPH_GET_HLD]");
//        return ERR_HLD_FUNCTION_RESOLVE;
//    }
    if(NULL == (fpTSPH_CONF_TVB_SYSTEM=(TSPH_CONF_TVB_SYSTEM_T)libHld_.resolve( "TSPH_ConfTvbSytem"))) {
        qDebug("hld function resulve error. [TSPH_ConfTvbSytem]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_INIT_ALL_REAL_BD=(TSPH_INIT_ALL_REAL_BD_T)libHld_.resolve( "TSPH_InitAllRealBd"))) {
        qDebug("hld function resulve error. [TSPH_InitAllRealBd]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }

    if(NULL == (fpTSPL_GET_AD9775 =(TSPL_GET_AD9775_T)libHld_.resolve( "TSPL_GET_AD9775_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_AD9775]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_AD9775 =(TSPL_SET_AD9775_T)libHld_.resolve( "TSPL_SET_AD9775_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_AD9775]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_C2MI_PARAMS =(TSPH_SET_C2MI_PARAMS_T)libHld_.resolve( "TSPH_SET_C2MI_PARAMS"))) {
        qDebug("hld function resulve error. [TSPH_SET_C2MI_PARAMS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_AD9787 =(TSPL_GET_AD9787_T)libHld_.resolve( "TSPL_GET_AD9787_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_AD9787]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_AD9787 =(TSPL_SET_AD9787_T)libHld_.resolve( "TSPL_SET_AD9787_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_AD9787]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_TRY_ALLOC_IQ_MEMORY =(TSPH_TRY_ALLOC_IQ_MEMORY_T)libHld_.resolve( "TSPH_TRY_ALLOC_IQ_MEMORY"))) {
        qDebug("hld function resulve error. [TSPH_TRY_ALLOC_IQ_MEMORY]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_IQ_MODE =(TSPH_SET_IQ_MODE_T)libHld_.resolve( "TSPH_SET_IQ_MODE"))) {
        qDebug("hld function resulve error. [TSPH_SET_IQ_MODE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_COMBINER_INFO =(TSPH_SET_COMBINER_INFO_T)libHld_.resolve( "TSPH_SET_COMBINER_INFO"))) {
        qDebug("hld function resulve error. [TSPH_SET_COMBINER_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_CAL_PLAY_RATE =(TSPH_CAL_PLAY_RATE_T)libHld_.resolve( "TSPH_CAL_PLAY_RATE"))) {
        qDebug("hld function resulve error. [TSPH_CAL_PLAY_RATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_IS_COMBINED_TS =(TSPH_IS_COMBINED_TS_T)libHld_.resolve( "TSPH_IS_COMBINED_TS"))) {
        qDebug("hld function resulve error. [TSPH_IS_COMBINED_TS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_TS_ID =(TSPH_GET_TS_ID_T)libHld_.resolve( "TSPH_GET_TS_ID"))) {
        qDebug("hld function resulve error. [TSPH_GET_TS_ID]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_READ_CONTROL_REG =(TSPL_READ_CONTROL_REG_T)libHld_.resolve( "TSPL_READ_CONTROL_REG_EX"))) {
        qDebug("hld function resulve error. [TSPL_READ_CONTROL_REG]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_WRITE_CONTROL_REG =(TSPL_WRITE_CONTROL_REG_T)libHld_.resolve( "TSPL_WRITE_CONTROL_REG_EX"))) {
        qDebug("hld function resulve error. [TSPL_WRITE_CONTROL_REG]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_LOOP_ADAPTATION =(TSPH_SET_LOOP_ADAPTATION_T)libHld_.resolve( "TSPH_SET_LOOP_ADAPTATION"))) {
        qDebug("hld function resulve error. [TSPH_SET_LOOP_ADAPTATION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_T2MI_PARAMS =(TSPH_SET_T2MI_PARAMS_T)libHld_.resolve( "TSPH_SET_T2MI_PARAMS"))) {
        qDebug("hld function resulve error. [TSPH_SET_T2MI_PARAMS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_T2MI_PARAMS_GENERAL    = (TSPH_SET_T2MI_PARAMS_GENERAL_T)libHld_.resolve("TSPH_SET_T2MI_PARAMS_General"))) {
        qDebug("hld function resulve error. [TSPH_SET_T2MI_PARAMS_General]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_T2MI_PARAMS_PLPS       = (TSPH_SET_T2MI_PARAMS_PLPS_T)libHld_.resolve("TSPH_SET_T2MI_PARAMS_PLPs"))) {
        qDebug("hld function resulve error. [TSPH_SET_T2MI_PARAMS_PLPs]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_T2MI_INTERVAL_PLAY_PLP = (TSPH_SET_T2MI_INTERVAL_PLAY_PLP_T)libHld_.resolve("TSPH_SetT2mi_Interval_Play_PLP"))) {
        qDebug("hld function resulve error. [TSPH_SetT2mi_Interval_Play_PLP]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_T2MI_PARAMS_EXTENSION =(TSPH_SET_T2MI_PARAMS_EXTENSION_T)libHld_.resolve( "TSPH_SET_T2MI_PARAMS_EXTENSION"))) {
        qDebug("hld function resulve error. [TSPH_SET_T2MI_PARAMSTENSION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_BANDWIDTH =(TVB380_SET_MODULATOR_BANDWIDTH_T)libHld_.resolve( "TVB380_SET_MODULATOR_BANDWIDTH_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_BANDWIDTH]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_T2MI_PARAMS =(TSPH_GET_T2MI_PARAMS_T)libHld_.resolve( "TSPH_GET_T2MI_PARAMS"))) {
        qDebug("hld function resulve error. [TSPH_GET_T2MI_PARAMS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_RUN_T2MI_PARSER =(TSPH_RUN_T2MI_PARSER_T)libHld_.resolve( "TSPH_RUN_T2MI_PARSER"))) {
        qDebug("hld function resulve error. [TSPH_RUN_T2MI_PARSER]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_ISDBS_CALC_COMBINED_TS_BITRATE =(TSPH_ISDBS_CALC_COMBINED_TS_BITRATE_T)libHld_.resolve( "TSPH_ISDBS_CALC_COMBINED_TS_BITRATE"))) {
        qDebug("hld function resulve error. [TSPH_ISDBS_CALC_COMBINED_TS_BITRATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_RESET_SDCON =(TSPL_RESET_SDCON_T)libHld_.resolve( "TSPL_RESET_SDCON_EX"))) {
        qDebug("hld function resulve error. [TSPL_RESET_SDCON]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_MHE_PACKET_INFO =(TSPH_GET_MHE_PACKET_INFO_T)libHld_.resolve( "TSPH_GET_MHE_PACKET_INFO"))) {
        qDebug("hld function resulve error. [TSPH_GET_MHE_PACKET_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_LOOP_COUNT =(TSPH_GET_LOOP_COUNT_T)libHld_.resolve( "TSPH_GET_LOOP_COUNT"))) {
        qDebug("hld function resulve error. [TSPH_GET_LOOP_COUNT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
//#ifdef WIN32
    if(NULL == (fpTSPL_SET_AD9852_MAX_CLOCK =(TSPL_SET_AD9852_MAX_CLOCK_T)libHld_.resolve( "TSPL_SET_AD9852_MAX_CLOCK_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_AD9852_MAX_CLOCK]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
//#endif //0
    if(NULL == (fpTVB380_SET_BOARD_CONFIG_STATUS =(TVB380_SET_BOARD_CONFIG_STATUS_T)libHld_.resolve( "TVB380_SET_BOARD_CONFIG_STATUS_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_BOARD_CONFIG_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_RUN_ATSC_MH_PARSER =(TSPH_RUN_ATSC_MH_PARSER_T)libHld_.resolve( "TSPH_RUN_ATSC_MH_PARSER"))) {
        qDebug("hld function resulve error. [TSPH_RUN_ATSC_MH_PARSER]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
#if 0 // symbol not exists.
    if(NULL == (fpTSPH_GET_BOARD_LOCATION =(TSPH_GET_BOARD_LOCATION_T)libHld_.resolve( "TSPH_GET_BOARD_LOCATION"))) {
        qDebug("hld function resulve error. [TSPH_GET_BOARD_LOCATION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
#endif //0
    if(NULL == (fpTSPL_GET_BOARD_ID =(TSPL_GET_BOARD_ID_T)libHld_.resolve( "TSPL_GET_BOARD_ID_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_BOARD_ID]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_AGC =(TVB380_SET_MODULATOR_AGC_T)libHld_.resolve( "TVB380_SET_MODULATOR_AGC_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_AGC]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_ATTEN_VALUE =(TVB380_SET_MODULATOR_ATTEN_VALUE_T)libHld_.resolve( "TVB380_SET_MODULATOR_ATTEN_VALUE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_ATTEN_VALUE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_GET_MODULATOR_RF_POWER_LEVEL =(TVB380_GET_MODULATOR_RF_POWER_LEVEL_T)libHld_.resolve( "TVB380_GET_MODULATOR_RF_POWER_LEVEL_EX"))) {
        qDebug("hld function resulve error. [TVB380_GET_MODULATOR_RF_POWER_LEVEL]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_RUN_MFS_PARSER =(TSPH_RUN_MFS_PARSER_T)libHld_.resolve( "TSPH_RUN_MFS_PARSER"))) {
        qDebug("hld function resulve error. [TSPH_RUN_MFS_PARSER]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_SPECTRUM_INVERSION =(TVB380_SET_MODULATOR_SPECTRUM_INVERSION_T)libHld_.resolve( "TVB380_SET_MODULATOR_SPECTRUM_INVERSION_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_SPECTRUM_INVERSION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_CURRENT_OFFSET =(TSPH_SET_CURRENT_OFFSET_T)libHld_.resolve( "TSPH_SET_CURRENT_OFFSET"))) {
        qDebug("hld function resulve error. [TSPH_SET_CURRENT_OFFSET]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_BOARD_LED_STATUS =(TSPL_SET_BOARD_LED_STATUS_T)libHld_.resolve( "TSPL_SET_BOARD_LED_STATUS_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_BOARD_LED_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_BOARD_REV =(TSPL_GET_BOARD_REV_T)libHld_.resolve( "TSPL_GET_BOARD_REV_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_BOARD_REV]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_BOARD_CONFIG_STATUS =(TSPL_GET_BOARD_CONFIG_STATUS_T)libHld_.resolve( "TSPL_GET_BOARD_CONFIG_STATUS_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_BOARD_CONFIG_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_AUTHORIZATION =(TSPL_GET_AUTHORIZATION_T)libHld_.resolve( "TSPL_GET_AUTHORIZATION_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_AUTHORIZATION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_FPGA_INFO =(TSPL_GET_FPGA_INFO_T)libHld_.resolve( "TSPL_GET_FPGA_INFO_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_FPGA_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_STOP_MODE =(TVB380_SET_STOP_MODE_T)libHld_.resolve( "TVB380_SET_STOP_MODE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_STOP_MODE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_SDRAM_BANK_INFO =(TSPH_SET_SDRAM_BANK_INFO_T)libHld_.resolve( "TSPH_SET_SDRAM_BANK_INFO"))) {
        qDebug("hld function resulve error. [TSPH_SET_SDRAM_BANK_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_START_MONITOR =(TSPH_START_MONITOR_T)libHld_.resolve( "TSPH_START_MONITOR"))) {
        qDebug("hld function resulve error. [TSPH_START_MONITOR]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_TSIO_DIRECTION =(TSPL_SET_TSIO_DIRECTION_T)libHld_.resolve( "TSPL_SET_TSIO_DIRECTION_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_TSIO_DIRECTION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_MODULATOR_TYPE =(TSPH_SET_MODULATOR_TYPE_T)libHld_.resolve( "TSPH_SET_MODULATOR_TYPE"))) {
        qDebug("hld function resulve error. [TSPH_SET_MODULATOR_TYPE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_ERROR_INJECTION =(TSPH_SET_ERROR_INJECTION_T)libHld_.resolve( "TSPH_SET_ERROR_INJECTION"))) {
        qDebug("hld function resulve error. [TSPH_SET_ERROR_INJECTION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_CONFIG =(TVB380_SET_CONFIG_T)libHld_.resolve( "TVB380_SET_CONFIG_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_CONFIG]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_IF_FREQ =(TVB380_SET_MODULATOR_IF_FREQ_T)libHld_.resolve( "TVB380_SET_MODULATOR_IF_FREQ_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_IF_FREQ]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_FREQ =(TVB380_SET_MODULATOR_FREQ_T)libHld_.resolve( "TVB380_SET_MODULATOR_FREQ_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_FREQ]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_DVBH =(TVB380_SET_MODULATOR_DVBH_T)libHld_.resolve( "TVB380_SET_MODULATOR_DVBH_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_DVBH]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_TXMODE =(TVB380_SET_MODULATOR_TXMODE_T)libHld_.resolve( "TVB380_SET_MODULATOR_TXMODE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_TXMODE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_CODERATE =(TVB380_SET_MODULATOR_CODERATE_T)libHld_.resolve( "TVB380_SET_MODULATOR_CODERATE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_CODERATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_GUARDINTERVAL =(TVB380_SET_MODULATOR_GUARDINTERVAL_T)libHld_.resolve( "TVB380_SET_MODULATOR_GUARDINTERVAL_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_GUARDINTERVAL]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_CONSTELLATION =(TVB380_SET_MODULATOR_CONSTELLATION_T)libHld_.resolve( "TVB380_SET_MODULATOR_CONSTELLATION_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_CONSTELLATION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_SYMRATE =(TVB380_SET_MODULATOR_SYMRATE_T)libHld_.resolve( "TVB380_SET_MODULATOR_SYMRATE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_SYMRATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_INTERLEAVE =(TVB380_SET_MODULATOR_INTERLEAVE_T)libHld_.resolve( "TVB380_SET_MODULATOR_INTERLEAVE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_INTERLEAVE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_PRBS_MODE =(TVB380_SET_MODULATOR_PRBS_MODE_T)libHld_.resolve( "TVB380_SET_MODULATOR_PRBS_MODE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_PRBS_MODE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_PRBS_SCALE =(TVB380_SET_MODULATOR_PRBS_SCALE_T)libHld_.resolve( "TVB380_SET_MODULATOR_PRBS_SCALE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_PRBS_SCALE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_PRBS_INFO =(TVB380_SET_MODULATOR_PRBS_INFO_T)libHld_.resolve( "TVB380_SET_MODULATOR_PRBS_INFO_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_PRBS_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_TMCC_REMUXER =(TSPH_SET_TMCC_REMUXER_T)libHld_.resolve( "TSPH_SET_TMCC_REMUXER"))) {
        qDebug("hld function resulve error. [TSPH_SET_TMCC_REMUXER]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_ROLL_OFF_FACTOR =(TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_T)libHld_.resolve( "TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_ROLL_OFF_FACTOR]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK =(TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK_T)libHld_.resolve( "TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_PILOT =(TVB380_SET_MODULATOR_PILOT_T)libHld_.resolve( "TVB380_SET_MODULATOR_PILOT_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_PILOT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_MAX_PLAYRATE =(TSPL_SET_MAX_PLAYRATE_T)libHld_.resolve( "TSPL_SET_MAX_PLAYRATE_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_MAX_PLAYRATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_BERT_MEASURE =(TVB380_SET_MODULATOR_BERT_MEASURE_T)libHld_.resolve( "TVB380_SET_MODULATOR_BERT_MEASURE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_BERT_MEASURE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_SDRAM_CLOCK =(TVB380_SET_MODULATOR_SDRAM_CLOCK_T)libHld_.resolve( "TVB380_SET_MODULATOR_SDRAM_CLOCK_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_SDRAM_CLOCK]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_ENCRYPTED_SN =(TSPL_GET_ENCRYPTED_SN_T)libHld_.resolve( "TSPL_GET_ENCRYPTED_SN_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_ENCRYPTED_SN]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_SN =(TSPL_GET_SN_T)libHld_.resolve( "TSPL_GET_SN"))) {
        qDebug("hld function resulve error. [TSPL_GET_SN]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_IS_ENABLED_TYPE =(TVB380_IS_ENABLED_TYPE_T)libHld_.resolve( "TVB380_IS_ENABLED_TYPE_EX"))) {
        qDebug("hld function resulve error. [TVB380_IS_ENABLED_TYPE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_GET_LAST_ERROR =(TSPL_GET_LAST_ERROR_T)libHld_.resolve( "TSPL_GET_LAST_ERROR_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_LAST_ERROR]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_PLAY_RATE =(TSPL_SET_PLAY_RATE_T)libHld_.resolve( "TSPL_SET_PLAY_RATE_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_PLAY_RATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_MODULATOR_DTMB =(TVB380_SET_MODULATOR_DTMB_T)libHld_.resolve( "TVB380_SET_MODULATOR_DTMB_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_DTMB]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_FILENAME_NEXT_PLAY =(TSPH_SET_FILENAME_NEXT_PLAY_T)libHld_.resolve( "TSPH_SET_FILENAME_NEXT_PLAY"))) {
        qDebug("hld function resulve error. [TSPH_SET_FILENAME_NEXT_PLAY]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_ISDBS_BASE_TS =(TSPH_SET_ISDBS_BASE_TS_T)libHld_.resolve( "TSPH_SET_ISDBS_BASE_TS"))) {
        qDebug("hld function resulve error. [TSPH_SET_ISDBS_BASE_TS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_RX_IP_STREAMING_INFO =(TSPH_SET_RX_IP_STREAMING_INFO_T)libHld_.resolve( "TSPH_SET_RX_IP_STREAMING_INFO"))) {
        qDebug("hld function resulve error. [TSPH_SET_RX_IP_STREAMING_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_START_IP_STREAMING =(TSPH_START_IP_STREAMING_T)libHld_.resolve( "TSPH_START_IP_STREAMING"))) {
        qDebug("hld function resulve error. [TSPH_START_IP_STREAMING]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_START_PLAY =(TSPH_START_PLAY_T)libHld_.resolve( "TSPH_START_PLAY"))) {
        qDebug("hld function resulve error. [TSPH_START_PLAY]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_START_RECORD =(TSPH_START_RECORD_T)libHld_.resolve( "TSPH_START_RECORD"))) {
        qDebug("hld function resulve error. [TSPH_START_RECORD]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_REPEAT_PLAY_MODE =(TSPH_SET_REPEAT_PLAY_MODE_T)libHld_.resolve( "TSPH_SET_REPEAT_PLAY_MODE"))) {
        qDebug("hld function resulve error. [TSPH_SET_REPEAT_PLAY_MODE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_REMUX_INFO =(TSPH_GET_REMUX_INFO_T)libHld_.resolve( "TSPH_GET_REMUX_INFO"))) {
        qDebug("hld function resulve error. [TSPH_GET_REMUX_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_CHECK_LN =(TSPL_CHECK_LN_T)libHld_.resolve( "TSPL_CHECK_LN_EX"))) {
        qDebug("hld function resulve error. [TSPL_CHECK_LN]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_CURRENT_RECORD_POINT =(TSPH_GET_CURRENT_RECORD_POINT_T)libHld_.resolve( "TSPH_GET_CURRENT_RECORD_POINT"))) {
        qDebug("hld function resulve error. [TSPH_GET_CURRENT_RECORD_POINT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_CURRENT_THREAD_STATE =(TSPH_GET_CURRENT_THREAD_STATE_T)libHld_.resolve( "TSPH_GET_CURRENT_THREAD_STATE"))) {
        qDebug("hld function resulve error. [TSPH_GET_CURRENT_THREAD_STATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_GET_MODULATOR_BERT_RESULT =(TVB380_GET_MODULATOR_BERT_RESULT_T)libHld_.resolve( "TVB380_GET_MODULATOR_BERT_RESULT_EX"))) {
        qDebug("hld function resulve error. [TVB380_GET_MODULATOR_BERT_RESULT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_PLAY_BUFFER_STATUS =(TSPH_GET_PLAY_BUFFER_STATUS_T)libHld_.resolve( "TSPH_GET_PLAY_BUFFER_STATUS"))) {
        qDebug("hld function resulve error. [TSPH_GET_PLAY_BUFFER_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_PROGRAM =(TSPH_GET_PROGRAM_T)libHld_.resolve( "TSPH_GET_PROGRAM"))) {
        qDebug("hld function resulve error. [TSPH_GET_PROGRAM]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_REMUX_DATARATE =(TSPH_GET_REMUX_DATARATE_T)libHld_.resolve( "TSPH_GET_REMUX_DATARATE"))) {
        qDebug("hld function resulve error. [TSPH_GET_REMUX_DATARATE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_IS_VIDEO_WINDOW_VISIBLE =(TSPH_IS_VIDEO_WINDOW_VISIBLE_T)libHld_.resolve( "TSPH_IS_VIDEO_WINDOW_VISIBLE"))) {
        qDebug("hld function resulve error. [TSPH_IS_VIDEO_WINDOW_VISIBLE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_MOVE_VIDEO_WINDOW =(TSPH_MOVE_VIDEO_WINDOW_T)libHld_.resolve( "TSPH_MOVE_VIDEO_WINDOW"))) {
        qDebug("hld function resulve error. [TSPH_MOVE_VIDEO_WINDOW]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_READ_INPUT_STATUS =(TSPL_READ_INPUT_STATUS_T)libHld_.resolve( "TSPL_READ_INPUT_STATUS_EX"))) {
        qDebug("hld function resulve error. [TSPL_READ_INPUT_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_READ_INPUT_TSCOUNT =(TSPL_READ_INPUT_TSCOUNT_T)libHld_.resolve( "TSPL_READ_INPUT_TSCOUNT_EX"))) {
        qDebug("hld function resulve error. [TSPL_READ_INPUT_TSCOUNT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_READ_IP_STREAMING_INPUT_STATUS =(TSPH_READ_IP_STREAMING_INPUT_STATUS_T)libHld_.resolve( "TSPH_READ_IP_STREAMING_INPUT_STATUS"))) {
        qDebug("hld function resulve error. [TSPH_READ_IP_STREAMING_INPUT_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_LAYER_INFO =(TSPH_SET_LAYER_INFO_T)libHld_.resolve( "TSPH_SET_LAYER_INFO"))) {
        qDebug("hld function resulve error. [TSPH_SET_LAYER_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_T2MI_STREAM_GENERATION=(TSPH_SET_T2MI_STREAM_GENERATION_T)libHld_.resolve( "TSPH_SET_T2MI_STREAM_GENERATION"))) {
        qDebug("hld function resulve error. [TSPH_SET_T2MI_STREAM_GENERATION]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_PROGRAM =(TSPH_SET_PROGRAM_T)libHld_.resolve( "TSPH_SET_PROGRAM"))) {
        qDebug("hld function resulve error. [TSPH_SET_PROGRAM]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SET_REMUX_INFO =(TSPH_SET_REMUX_INFO_T)libHld_.resolve( "TSPH_SET_REMUX_INFO"))) {
        qDebug("hld function resulve error. [TSPH_SET_REMUX_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_SHOW_VIDEO_WINDOW =(TSPH_SHOW_VIDEO_WINDOW_T)libHld_.resolve( "TSPH_SHOW_VIDEO_WINDOW"))) {
        qDebug("hld function resulve error. [TSPH_SHOW_VIDEO_WINDOW]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_EXIT_PROCESS =(TSPH_EXIT_PROCESS_T)libHld_.resolve( "TSPH_EXIT_PROCESS"))) {
        qDebug("hld function resulve error. [TSPH_EXIT_PROCESS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_CLEAR_REMUX_INFO =(TSPH_CLEAR_REMUX_INFO_T)libHld_.resolve( "TSPH_CLEAR_REMUX_INFO"))) {
        qDebug("hld function resulve error. [TSPH_CLEAR_REMUX_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_RUN_C2MI_PARSER =(TSPH_RUN_C2MI_PARSER_T)libHld_.resolve( "TSPH_RUN_C2MI_PARSER"))) {
        qDebug("hld function resulve error. [TSPH_RUN_C2MI_PARSER]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_IP_RECV_STATUS =(TSPH_IP_RECV_STATUS_T)libHld_.resolve( "TSPH_IP_RECV_STATUS"))) {
        qDebug("hld function resulve error. [TSPH_IP_RECV_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_START_DELAY =(TSPH_START_DELAY_T)libHld_.resolve( "TSPH_START_DELAY"))) {
        qDebug("hld function resulve error. [TSPH_START_DELAY]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //ISDB-T 13seg 188 TS Loopthru
    if(NULL == (fpTSPH_IS_LOOPTHRU_ISDBT13_188 =(TSPH_IS_LOOPTHRU_ISDBT13_188_T)libHld_.resolve( "TSPH_IS_LOOPTHRU_ISDBT13_188"))) {
        qDebug("hld function resulve error. [TSPH_IS_LOOPTHRU_ISDBT13_188]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_PAUSE_LOOPTHRU_ISDBT13_PARSER =(TSPH_PAUSE_LOOPTHRU_ISDBT13_PARSER_T)libHld_.resolve( "TSPH_PAUSE_LOOPTHRU_ISDBT13_Parser"))) {
        qDebug("hld function resulve error. [TSPH_PAUSE_LOOPTHRU_ISDBT13_Parser]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188 =(TSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188_T)libHld_.resolve( "TSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188"))) {
        qDebug("hld function resulve error. [TSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188 =(TSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188_T)libHld_.resolve( "TSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188"))) {
        qDebug("hld function resulve error. [TSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //TVB594
    if(NULL == (fpTSPH__STREAM_NUMBER =(TSPH__STREAM_NUMBER_T)libHld_.resolve( "TSPH__STREAM_NUMBER"))) {
        qDebug("hld function resulve error. [TSPH__STREAM_NUMBER]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH__SEL_TS_OF_ASI310OUT =(TSPH__SEL_TS_OF_ASI310OUT_T)libHld_.resolve( "TSPH__SEL_TS_of_ASI310OUT"))) {
        qDebug("hld function resulve error. [TSPH__SEL_TS_of_ASI310OUT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //NIT
    if(NULL == (fpTSPH_GET_NIT_SATELLITE_INFO =(TSPH_GET_NIT_SATELLITE_INFO_T)libHld_.resolve( "TSPH_GET_NIT_SATELLITE_INFO"))) {
        qDebug("hld function resulve error. [TSPH_GET_NIT_SATELLITE_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_NIT_CABLE_INFO =(TSPH_GET_NIT_CABLE_INFO_T)libHld_.resolve( "TSPH_GET_NIT_CABLE_INFO"))) {
        qDebug("hld function resulve error. [TSPH_GET_NIT_CABLE_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_NIT_TERRESTRIAL_INFO =(TSPH_GET_NIT_TERRESTRIAL_INFO_T)libHld_.resolve( "TSPH_GET_NIT_TERRESTRIAL_INFO"))) {
        qDebug("hld function resulve error. [TSPH_GET_NIT_TERRESTRIAL_INFO]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //SINGLE TONE
    if(NULL == (fpTVB380_SET_MODULATOR_SINGLE_TONE =(TVB380_SET_MODULATOR_SINGLE_TONE_T)libHld_.resolve( "TVB380_SET_MODULATOR_SINGLE_TONE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MODULATOR_SINGLE_TONE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //DVB-S2_MTS
    if(NULL == (fpTVB380_SET_MTS_STREAM_ID = (TVB380_SET_MTS_STREAM_ID_T)libHld_.resolve( "TVB380_SET_MTS_STREAM_ID_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_MTS_STREAM_ID]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB380_SET_DVBS2_INPUT_STREAM_MODE = (TVB380_SET_DVBS2_INPUT_STREAM_MODE_T)libHld_.resolve( "TVB380_SET_DVBS2_INPUT_STREAM_MODE_EX"))) {
        qDebug("hld function resulve error. [TVB380_SET_DVBS2_INPUT_STREAM_MODE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_REAL_BD_CNT_N =(TSPH_GET_REAL_BD_CNT_N_T)libHld_.resolve( "TSPH_GetRealBdCnt_N"))) {
        qDebug("hld function resulve error. [TSPH_GetRealBdCnt_N]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_REAL_AND_VIR_BD_MAP =(TSPH_GET_REAL_AND_VIR_BD_MAP_T)libHld_.resolve( "TSPH_GetRealAndVirBdMap"))) {
        qDebug("hld function resulve error. [TSPH_GetRealAndVirBdMap]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_BD_ID_N =(TSPH_GET_BD_ID_N_T)libHld_.resolve( "TSPH_GetBdId_N"))) {
        qDebug("hld function resulve error. [TSPH_GetBdId_N]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_GET_BD_NAME_N =(TSPH_GET_BD_NAME_N_T)libHld_.resolve( "TSPH_GetBdName_N"))) {
        qDebug("hld function resulve error. [TSPH_GetBdName_N]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_INIT_VIR_BD =(TSPH_INIT_VIR_BD_T)libHld_.resolve( "TSPH_InitVirBd"))) {
        qDebug("hld function resulve error. [TSPH_InitVirBd]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_ACTIVATE_ONE_BD =(TSPH_ACTIVATE_ONE_BD_T)libHld_.resolve( "TSPH_ActivateOneBd"))) {
        qDebug("hld function resulve error. [TSPH_ActivateOneBd]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_CNT_MULTI_VSB_RFOUT =(TSPL_CNT_MULTI_VSB_RFOUT_T)libHld_.resolve( "TSPL_CNT_MULTI_VSB_RFOUT_EX"))) {
        qDebug("hld function resulve error. [TSPL_CNT_MULTI_VSB_RFOUT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_CNT_MULTI_QAM_RFOUT =(TSPL_CNT_MULTI_QAM_RFOUT_T)libHld_.resolve( "TSPL_CNT_MULTI_QAM_RFOUT_EX"))) {
        qDebug("hld function resulve error. [TSPL_CNT_MULTI_QAM_RFOUT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //multi dvb-t
    if(NULL == (fpTSPL_CNT_MULTI_DVBT_RFOUT =(TSPL_CNT_MULTI_DVBT_RFOUT_T)libHld_.resolve( "TSPL_CNT_MULTI_DVBT_RFOUT_EX"))) {
        qDebug("hld function resulve error. [TSPL_CNT_MULTI_DVBT_RFOUT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_CNT_MULTI_DVBS2_RFOUT =(TSPL_CNT_MULTI_DVBS2_RFOUT_T)libHld_.resolve( "TSPL_CNT_MULTI_DVBS2_RFOUT_EX"))) {
        qDebug("hld function resulve error. [TSPL_CNT_MULTI_DVBS2_RFOUT]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //SI/PID improve
    if(NULL == (fpTSPH_RUN_TS_PARSER2 =(TSPH_RUN_TS_PARSER2_T)libHld_.resolve( "TSPH_RUN_TS_PARSER2"))) {
        qDebug("hld function resulve error. [TSPH_RUN_TS_PARSER2]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //new rf level control
    if(NULL == (fpTVB59X_SET_MODULATOR_RF_LEVEL_VALUE =(TVB59X_SET_MODULATOR_RF_LEVEL_VALUE_T)libHld_.resolve( "TVB59x_SET_MODULATOR_RF_LEVEL_VALUE_EX"))) {
        qDebug("hld function resulve error. [TVB59x_SET_MODULATOR_RF_LEVEL_VALUE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB59X_GET_MODULATOR_RF_LEVEL_RANGE =(TVB59X_GET_MODULATOR_RF_LEVEL_RANGE_T)libHld_.resolve( "TVB59x_GET_MODULATOR_RF_LEVEL_RANGE_EX"))) {
        qDebug("hld function resulve error. [TVB59x_GET_MODULATOR_RF_LEVEL_RANGE]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //pcr restamp
    if(NULL == (fpTVB59X_SET_PCR_STAMP_CNTL =(TVB59X_SET_PCR_STAMP_CNTL_T)libHld_.resolve( "TVB59x_SET_PCR_STAMP_CNTL_EX"))) {
        qDebug("hld function resulve error. [TVB59x_SET_PCR_STAMP_CNTL]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_SDCON_MODE=(TSPL_SET_SDCON_MODE_T)libHld_.resolve( "TSPL_SET_SDCON_MODE_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_SDCON_MODE_EX]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TVB59X_SET_TSPACKET_CNT_MODE =(CALL_TVB59X_SET_TSPACKET_CNT_MODE_T)libHld_.resolve( "TSPL_TVB59x_SET_TsPacket_CNT_Mode_EX"))) {
        qDebug("hld function resulve error. [TSPL_TVB59x_SET_TsPacket_CNT_Mode]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TVB59X_GET_ASI_INPUT_RATE =(CALL_TVB59X_GET_ASI_INPUT_RATE_T)libHld_.resolve( "TSPL_TVB59x_Get_Asi_Input_rate_EX"))) {
        qDebug("hld function resulve error. [TSPL_TVB59x_Get_Asi_Input_rate]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TVB59X_MODULATOR_STATUS_CONTROL =(CALL_TVB59X_MODULATOR_STATUS_CONTROL_T)libHld_.resolve( "TVB59x_Modulator_Status_Control_EX"))) {
        qDebug("hld function resulve error. [TVB59x_Modulator_Status_Control]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TVB59X_GET_MODULATOR_STATUS =(CALL_TVB59X_GET_MODULATOR_STATUS_T)libHld_.resolve( "TVB59x_Get_Modulator_Status_EX"))) {
        qDebug("hld function resulve error. [TVB59x_Get_Modulator_Status]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TSPL_GET_TSIO_STATUS =(CALL_TSPL_GET_TSIO_STATUS_T)libHld_.resolve( "TSPL_GET_TSIO_STATUS_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_TSIO_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB59X_SET_OUTPUT_TS_TYPE=(TVB59X_SET_OUTPUT_TS_TYPE_T)libHld_.resolve("TVB59x_SET_Output_TS_Type_EX"))) {
        qDebug("hld function resulve error. [TSPL_GET_TSIO_STATUS]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    //IP Improve
    if(NULL == (fpCALL_TSPH_SET_IP_ENABLE_NULL_PACKET =(CALL_TSPH_SET_IP_ENABLE_NULL_PACKET_T)libHld_.resolve( "TSPH_SET_IP_ENABLE_NULL_PACKET"))) {
        qDebug("hld function resulve error. [TSPH_SET_IP_ENABLE_NULL_PACKET]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TVB59X_SET_T2MI_CONTROL = (CALL_TVB59X_SET_T2MI_CONTROL_T)libHld_.resolve("TVB59x_Set_T2MI_Control_EX"))) {
        qDebug("hld function resulve error. [TVB59x_Set_T2MI_Control]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpCALL_TSPH_SET_ISDBTMM_PARAMETERS = (CALL_TSPH_SET_ISDBTMM_PARAMETERS_T)libHld_.resolve("TSPH_SET_ISDBTmm_Parameters"))) {
        qDebug("hld function resulve error. [TSPH_SET_ISDBTmm_Parameters]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTVB59X_SET_DVB_S2X_MODCOD = (TVB59X_SET_DVB_S2X_MODCOD_T)libHld_.resolve("TVB59x_SET_DVB_S2X_ModCod_EX"))) {
        qDebug("hld function resulve error. [TVB59x_SET_DVB_S2X_ModCod]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_INIT_ONE_REAL_BD = (TSPH_INIT_ONE_REAL_BD_T)libHld_.resolve("TSPH_InitOneRealBd"))) {
        qDebug("hld function resulve error. [TSPH_InitOneRealBd]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPH_CLOSE_ONE_REAL_BD = (TSPH_CLOSE_ONE_REAL_BD_T)libHld_.resolve("TSPH_CloseOneRealBd"))) {
        qDebug("hld function resulve error. [TSPH_CloseOneRealBd]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
    if(NULL == (fpTSPL_SET_FIFO_CONTROL = (TSPL_SET_FIFO_CONTROL_T)libHld_.resolve("TSPL_SET_FIFO_CONTROL_EX"))) {
        qDebug("hld function resulve error. [TSPL_SET_FIFO_CONTROL_EX]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
#ifndef WIN32
    // Detatch LLD in HLD:: DllMain
    if(NULL == (fpDLLMain = (DLLMAIN_T)libHld_.resolve("DllMain"))) {
        qDebug("hld function resulve error. [DllMain]");
        return ERR_HLD_FUNCTION_RESOLVE;
    }
#endif // WIN32
    return SUCCESS;
}
