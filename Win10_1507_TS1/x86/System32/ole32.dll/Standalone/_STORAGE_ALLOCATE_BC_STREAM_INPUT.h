typedef struct _STORAGE_ALLOCATE_BC_STREAM_INPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long RequestsPerPeriod;
  /* 0x0008 */ unsigned long Period;
  /* 0x000c */ unsigned char RetryFailures;
  /* 0x000d */ unsigned char Discardable;
  /* 0x000e */ unsigned char Reserved1[2];
  /* 0x0010 */ unsigned long AccessType;
  /* 0x0014 */ unsigned long AccessMode;
} STORAGE_ALLOCATE_BC_STREAM_INPUT, *PSTORAGE_ALLOCATE_BC_STREAM_INPUT; /* size: 0x0018 */

