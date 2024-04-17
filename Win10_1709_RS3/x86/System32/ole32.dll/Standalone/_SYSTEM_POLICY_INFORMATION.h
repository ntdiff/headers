typedef struct _SYSTEM_POLICY_INFORMATION
{
  /* 0x0000 */ void* InputData;
  /* 0x0004 */ void* OutputData;
  /* 0x0008 */ unsigned long InputDataSize;
  /* 0x000c */ unsigned long OutputDataSize;
  /* 0x0010 */ unsigned long Version;
} SYSTEM_POLICY_INFORMATION, *PSYSTEM_POLICY_INFORMATION; /* size: 0x0014 */

