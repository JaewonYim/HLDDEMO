#ifndef _QTHLD_API_H_
#define _QTHLD_API_H_
#include <QLibrary>
#include "../include/type_def.h"
#include "../include/variable.h"
#ifdef WIN32
#include <minwindef.h>
#else
typedef unsigned int DWORD;
#endif

typedef int(*TSPH_SET_C2MI_PARAMS_T)(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,char*,int);
typedef int(*TSPL_GET_AD9775_T)(int,long);
typedef int(*TSPL_SET_AD9775_T)(int,long,long);
typedef int(*TSPL_GET_AD9787_T)(int,long);
typedef int(*TSPL_SET_AD9787_T)(int,long,long);
typedef int(*TSPH_TRY_ALLOC_IQ_MEMORY_T)(int,int);
typedef int(*TSPH_SET_IQ_MODE_T)(int,int,int,int,int);
typedef int(*TSPH_SET_COMBINER_INFO_T)(int,int,char*,long,long,long);
typedef int(*TSPH_CAL_PLAY_RATE_T)(int,char*,int);
typedef int(*TSPH_IS_COMBINED_TS_T)(int,char*);
typedef int(*TSPH_GET_TS_ID_T)(int,char*);
#ifdef WIN32
typedef long(*TSPL_READ_CONTROL_REG_T)(int,int,unsigned long);
#else
typedef DWORD(*TSPL_READ_CONTROL_REG_T)(int,int,unsigned long);
#endif

typedef long(*TSPL_WRITE_CONTROL_REG_T)(int,int,unsigned long,unsigned long);
typedef int(*TSPH_SET_LOOP_ADAPTATION_T)(int,int,int,int,char*,char*);
typedef int(*TSPH_SET_T2MI_PARAMS_T)(int,int,int,int,int,int,int,double,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,char*,int);
typedef int(*TSPH_SET_T2MI_PARAMS_GENERAL_T)(int, int, int, int, int, int, int, double, int, int, int, int, int, int, int, int);
typedef int(*TSPH_SET_T2MI_PARAMS_PLPS_T)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char *);
typedef int(*TSPH_SET_T2MI_INTERVAL_PLAY_PLP_T)(int, int, double, double);
typedef int(*TSPH_SET_T2MI_PARAMS_EXTENSION_T)(int,int,int,int,int,int,int,int);
typedef int(*TVB380_SET_MODULATOR_BANDWIDTH_T)(int,long,long,double);
typedef int(*TSPH_GET_T2MI_PARAMS_T)(int,int *,int *);
typedef int(*TSPH_RUN_T2MI_PARSER_T)(int,char *,T2MI_Parsing_Info *szResult);
typedef int(*TSPH_ISDBS_CALC_COMBINED_TS_BITRATE_T)(int,char *);
typedef int(*TSPL_RESET_SDCON_T)(int);
typedef long(*TSPH_GET_MHE_PACKET_INFO_T)(int,char *,int);
typedef int(*TSPH_GET_LOOP_COUNT_T)(int);
typedef int(*TSPL_SET_AD9852_MAX_CLOCK_T)(int,long);
typedef int(*TVB380_SET_BOARD_CONFIG_STATUS_T)(int,long,long);
typedef int(*TSPH_RUN_ATSC_MH_PARSER_T)(int,char *,char *);
typedef int(*TSPH_GET_BOARD_LOCATION_T)();
typedef int(*TSPL_GET_BOARD_ID_T)(int);
typedef int(*TVB380_SET_MODULATOR_AGC_T)(int,long,long,long);
typedef int(*TVB380_SET_MODULATOR_ATTEN_VALUE_T)(int,long,double,long);
typedef double(*TVB380_GET_MODULATOR_RF_POWER_LEVEL_T)(int,long,long);
typedef int(*TSPH_RUN_MFS_PARSER_T)(int,char *,char *);
typedef int(*TVB380_SET_MODULATOR_SPECTRUM_INVERSION_T)(int,long,long);
typedef int(*TSPH_SET_CURRENT_OFFSET_T)(int,int,double);
typedef int(*TSPL_SET_BOARD_LED_STATUS_T)(int,int,int);
typedef int(*TSPL_GET_BOARD_REV_T)(int);
typedef int(*TSPL_GET_BOARD_CONFIG_STATUS_T)(int);
typedef int(*TSPL_GET_AUTHORIZATION_T)(int);
typedef int(*TSPL_GET_FPGA_INFO_T)(int,int);
typedef int(*TVB380_SET_STOP_MODE_T)(int,long);
typedef int(*TSPH_SET_SDRAM_BANK_INFO_T)(int,int,int);
typedef int(*TSPH_START_MONITOR_T)(int,int);
typedef int(*TSPL_SET_TSIO_DIRECTION_T)(int,int);
typedef int(*TSPH_SET_MODULATOR_TYPE_T)(int,long);
typedef int(*TSPH_SET_ERROR_INJECTION_T)(int,long,long,long,long,long,long,long,long);
typedef int(*TVB380_SET_CONFIG_T)(int,int,int);
typedef int(*TVB380_SET_MODULATOR_IF_FREQ_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_FREQ_T)(int,long,double,long);
typedef int(*TVB380_SET_MODULATOR_DVBH_T)(int,long,long,long,long,long,long);
typedef int(*TVB380_SET_MODULATOR_TXMODE_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_CODERATE_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_GUARDINTERVAL_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_CONSTELLATION_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_SYMRATE_T)(int,long,double,long);
typedef int(*TVB380_SET_MODULATOR_INTERLEAVE_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_PRBS_MODE_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_PRBS_SCALE_T)(int,long,double);
typedef int(*TVB380_SET_MODULATOR_PRBS_INFO_T)(int,long,long,double);
typedef int(*TSPH_SET_TMCC_REMUXER_T)(int,long);
typedef int(*TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_ROLL_OFF_FACTOR_QPSK_T)(int, int);
typedef int(*TVB380_SET_MODULATOR_PILOT_T)(int,long,long);
typedef int(*TSPL_SET_MAX_PLAYRATE_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_BERT_MEASURE_T)(int,long,long,long);
typedef int(*TVB380_SET_MODULATOR_SDRAM_CLOCK_T)(int,long,long);
typedef int(*TSPL_GET_ENCRYPTED_SN_T)(int,int,char *);
typedef int(*TSPL_GET_SN_T)(int,int,char *);
typedef int(*TVB380_IS_ENABLED_TYPE_T)(int, int);
typedef int(*TSPL_GET_LAST_ERROR_T)(int);
typedef int(*TSPL_SET_PLAY_RATE_T)(int,long,long);
typedef int(*TVB380_SET_MODULATOR_DTMB_T)(int,long,long,long,long,long,long,long,long);
typedef int(*TSPH_SET_FILENAME_NEXT_PLAY_T)(int,char *);
typedef int(*TSPH_SET_ISDBS_BASE_TS_T)(int,char *);
typedef int(*TSPH_SET_RX_IP_STREAMING_INFO_T)(int,char *,char *,long,char *,long,long);
typedef int(*TSPH_START_IP_STREAMING_T)(int,char *,long,double,long,long,long,char *);
typedef int(*TSPH_START_PLAY_T)(int,char *,long,double,long,long);
typedef int(*TSPH_START_RECORD_T)(int,char *,int);
typedef int(*TSPH_SET_REPEAT_PLAY_MODE_T)(int,int);
typedef int(*TSPH_GET_REMUX_INFO_T)(int,char *,int);
typedef int(*TSPL_CHECK_LN_T)(int,char *);
typedef double(*TSPH_GET_CURRENT_RECORD_POINT_T)(int);
typedef int(*TSPH_GET_CURRENT_THREAD_STATE_T)(int);
typedef double(*TVB380_GET_MODULATOR_BERT_RESULT_T)(int,long);
typedef int(*TSPH_GET_PLAY_BUFFER_STATUS_T)(int);
typedef long(*TSPH_GET_PROGRAM_T)(int,long);
typedef int(*TSPH_GET_REMUX_DATARATE_T)(int,long);
typedef int(*TSPH_IS_VIDEO_WINDOW_VISIBLE_T)(int);
typedef int(*TSPH_MOVE_VIDEO_WINDOW_T)(int,int,int,int,int);
#ifdef WIN32
typedef long(*TSPL_READ_INPUT_STATUS_T)(int);
#else
typedef DWORD(*TSPL_READ_INPUT_STATUS_T)(int);
#endif //0
typedef double(*TSPL_READ_INPUT_TSCOUNT_T)(int);
typedef int(*TSPH_READ_IP_STREAMING_INPUT_STATUS_T)(int,long);
typedef int(*TSPH_SET_LAYER_INFO_T)(int,int,int,int,char *,int,char *,int,char *,int,char *);
typedef long(*TSPH_SET_PROGRAM_T)(int,long);
typedef int(*TSPH_SET_REMUX_INFO_T)(int,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long);
typedef int(*TSPH_SHOW_VIDEO_WINDOW_T)(int,int);
typedef long(*TSPH_EXIT_PROCESS_T)(int);
typedef int(*TSPH_CLEAR_REMUX_INFO_T)(int);
typedef int(*TSPH_RUN_C2MI_PARSER_T)(int,char *,char *);
typedef int(*TSPH_IP_RECV_STATUS_T)(int,unsigned int *,unsigned int *);
typedef int(*TSPH_START_DELAY_T)(int,int);
typedef int(*TSPH_IS_LOOPTHRU_ISDBT13_188_T)(int);
typedef int(*TSPH_PAUSE_LOOPTHRU_ISDBT13_PARSER_T)(int, struct _TSPH_TS_INFO **);
typedef int(*TSPH_BUF_CLEAR_LOOPTHRU_ISDBT13_188_T)(int);
typedef int(*TSPH_IS_LOOPTHRU_INBUF_FULL_ISDBT13_188_T)(int);
typedef int(*TSPH__STREAM_NUMBER_T)(int);
typedef int(*TSPH__SEL_TS_OF_ASI310OUT_T)(int,int);
typedef int(*TSPH_GET_NIT_SATELLITE_INFO_T)(int, int*, int*, int*, int*, int*, int*, int*);
typedef int(*TSPH_GET_NIT_CABLE_INFO_T)(int, int*, int*, int*, int*, int*);
typedef int(*TSPH_GET_NIT_TERRESTRIAL_INFO_T)(int, int*, unsigned int*, int*, int*, int*, int*, int*, int*, int*);
typedef int(*TVB380_SET_MODULATOR_SINGLE_TONE_T)(int, long, unsigned long, long);
typedef int(*TVB380_SET_MTS_STREAM_ID_T)(int,long,long);
typedef int(*TVB380_SET_DVBS2_INPUT_STREAM_MODE_T)(int,long,long);
typedef int(*TSPH_GET_REAL_BD_CNT_N_T)();
typedef int(*TSPH_GET_REAL_AND_VIR_BD_MAP_T)(int,int *);
typedef int(*TSPH_GET_BD_ID_N_T)(int);
typedef char *(*TSPH_GET_BD_NAME_N_T)(int);
typedef int(*TSPH_CONF_TVB_SYSTEM_T)();
typedef int(*TSPH_INIT_ALL_REAL_BD_T)();
typedef int(*TSPH_INIT_VIR_BD_T)(int,int);
typedef int(*TSPH_ACTIVATE_ONE_BD_T)(int,int,int);
typedef int(*TSPL_CNT_MULTI_VSB_RFOUT_T)(int);
typedef int(*TSPL_CNT_MULTI_QAM_RFOUT_T)(int);
typedef int(*TSPL_CNT_MULTI_DVBT_RFOUT_T)(int);
typedef int(*TSPL_CNT_MULTI_DVBS2_RFOUT_T)(int);
typedef int(*TSPH_RUN_TS_PARSER2_T)(int, char *, int, struct _TSPH_TS_INFO **);
typedef int(*TVB59X_SET_MODULATOR_RF_LEVEL_VALUE_T)(int, long, double, long *, long); // 20160314
typedef int(*TVB59X_GET_MODULATOR_RF_LEVEL_RANGE_T)(int, long, double *, double *, long);
typedef int(*TVB59X_SET_PCR_STAMP_CNTL_T)(int,int);

typedef int(*TSPH_SET_T2MI_STREAM_GENERATION_T)(int,int,char *);
typedef int(*TVB59X_SET_OUTPUT_TS_TYPE_T)(int,int);
typedef int(*TVB59X_SET_RESET_CONTROL_REG_T)(int,int);
typedef int(*TSPL_SET_SDCON_MODE_T)(int,int);
typedef int(*CALL_TVB59X_SET_TSPACKET_CNT_MODE_T)(int,int);
typedef int(*CALL_TVB59X_GET_ASI_INPUT_RATE_T)(int,int *,int *);
typedef int(*CALL_TVB59X_MODULATOR_STATUS_CONTROL_T)(int,long,long,long);
typedef int(*CALL_TVB59X_GET_MODULATOR_STATUS_T)(int,int);
typedef int(*CALL_TSPL_GET_TSIO_STATUS_T)(int,int);
typedef int(*CALL_TVB59X_SET_T2MI_CONTROL_T)(int, long, long);
typedef int(*CALL_TSPH_SET_IP_ENABLE_NULL_PACKET_T)(int,int);
typedef int(*TVB59X_SET_DVB_S2X_MODCOD_T)(int, long, long);
typedef int(*CALL_TSPH_SET_ISDBTMM_PARAMETERS_T)(int, int, IsdbTmm_Params);
typedef int(*TSPH_INIT_ONE_REAL_BD_T)(int);
typedef int(*TSPH_CLOSE_ONE_REAL_BD_T)(int);
typedef int(*TSPL_SET_FIFO_CONTROL_T)(int, long, long);
#ifndef WIN32
typedef int(*DLLMAIN_T)(int, int, int, int);
#endif //WIN32
//typedef CHldGVar*(*TSPH_GET_HLD_T)(int);


//TSPH_GET_HLD_T                               fpTSPH_GET_HLD;
//TSPH_SET_C2MI_PARAMS_T                       fpTSPH_SET_C2MI_PARAMS;
#endif
