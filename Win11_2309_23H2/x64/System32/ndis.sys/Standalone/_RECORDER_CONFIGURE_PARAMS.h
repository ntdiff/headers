typedef enum _WPP_RECORDER_TRI_STATE
{
  WppRecorderFalse = 0,
  WppRecorderTrue = 1,
  WppRecorderUseDefault = 2,
} WPP_RECORDER_TRI_STATE, *PWPP_RECORDER_TRI_STATE;

typedef struct _RECORDER_CONFIGURE_PARAMS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned char CreateDefaultLog;
  /* 0x0008 */ enum _WPP_RECORDER_TRI_STATE UseTimeStamp;
  /* 0x000c */ enum _WPP_RECORDER_TRI_STATE PreciseTimeStamp;
} RECORDER_CONFIGURE_PARAMS, *PRECORDER_CONFIGURE_PARAMS; /* size: 0x0010 */

