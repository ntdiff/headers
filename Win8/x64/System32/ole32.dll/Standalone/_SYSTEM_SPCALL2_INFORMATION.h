typedef struct _SYSTEM_SPCALL2_INFORMATION
{
  /* 0x0000 */ void* InputData;
  /* 0x0008 */ void* OutputData;
  /* 0x0010 */ unsigned long InputDataSize;
  /* 0x0014 */ unsigned long OutputDataSize;
  /* 0x0018 */ unsigned long Version;
  /* 0x001c */ long __PADDING__[1];
} SYSTEM_SPCALL2_INFORMATION, *PSYSTEM_SPCALL2_INFORMATION; /* size: 0x0020 */

