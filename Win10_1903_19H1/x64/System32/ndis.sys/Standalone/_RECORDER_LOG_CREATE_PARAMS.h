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
} RECORDER_LOG_CREATE_PARAMS, *PRECORDER_LOG_CREATE_PARAMS; /* size: 0x0030 */

