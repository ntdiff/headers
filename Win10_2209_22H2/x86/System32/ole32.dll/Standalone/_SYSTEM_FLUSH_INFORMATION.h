typedef struct _SYSTEM_FLUSH_INFORMATION
{
  /* 0x0000 */ unsigned long SupportedFlushMethods;
  /* 0x0004 */ unsigned long ProcessorCacheFlushSize;
  /* 0x0008 */ unsigned __int64 SystemFlushCapabilities;
  /* 0x0010 */ unsigned __int64 Reserved[2];
} SYSTEM_FLUSH_INFORMATION, *PSYSTEM_FLUSH_INFORMATION; /* size: 0x0020 */

