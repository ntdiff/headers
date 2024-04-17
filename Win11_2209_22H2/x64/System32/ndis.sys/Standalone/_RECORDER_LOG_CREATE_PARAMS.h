typedef enum _WPP_RECORDER_TRI_STATE
{
  WppRecorderFalse = 0,
  WppRecorderTrue = 1,
  WppRecorderUseDefault = 2,
} WPP_RECORDER_TRI_STATE, *PWPP_RECORDER_TRI_STATE;

typedef struct _RECORDER_LOG_CREATE_PARAMS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long LogTag;
  /* 0x0008 */ unsigned long TotalBufferSize;
  /* 0x000c */ unsigned long ErrorPartitionSize;
  /* 0x0010 */ unsigned __int64 LogIdentifierAppendValue;
  /* 0x0018 */ unsigned char LogIdentifierAppendValueSet;
  /* 0x001c */ unsigned long LogIdentifierSize;
  /* 0x0020 */ char LogIdentifier[16];
  /* 0x0030 */ enum _WPP_RECORDER_TRI_STATE UseTimeStamp;
  /* 0x0034 */ enum _WPP_RECORDER_TRI_STATE PreciseTimeStamp;
} RECORDER_LOG_CREATE_PARAMS, *PRECORDER_LOG_CREATE_PARAMS; /* size: 0x0038 */

