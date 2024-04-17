typedef struct _SYSTEM_SPCALL2_INFORMATION
{
  /* 0x0000 */ void* InputData;
  /* 0x0004 */ void* OutputData;
  /* 0x0008 */ unsigned long InputDataSize;
  /* 0x000c */ unsigned long OutputDataSize;
  /* 0x0010 */ unsigned long Version;
} SYSTEM_SPCALL2_INFORMATION, *PSYSTEM_SPCALL2_INFORMATION; /* size: 0x0014 */

