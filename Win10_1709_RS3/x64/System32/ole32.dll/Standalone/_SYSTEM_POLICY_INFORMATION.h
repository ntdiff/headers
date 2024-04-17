typedef struct _SYSTEM_POLICY_INFORMATION
{
  /* 0x0000 */ void* InputData;
  /* 0x0008 */ void* OutputData;
  /* 0x0010 */ unsigned long InputDataSize;
  /* 0x0014 */ unsigned long OutputDataSize;
  /* 0x0018 */ unsigned long Version;
  /* 0x001c */ long __PADDING__[1];
} SYSTEM_POLICY_INFORMATION, *PSYSTEM_POLICY_INFORMATION; /* size: 0x0020 */

