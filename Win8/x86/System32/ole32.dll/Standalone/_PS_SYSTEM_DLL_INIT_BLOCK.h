typedef struct _PS_SYSTEM_DLL_INIT_BLOCK
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long SystemDllWowRelocation;
  /* 0x0008 */ unsigned __int64 SystemDllNativeRelocation;
  /* 0x0010 */ unsigned long Wow64SharedInformation[16];
  /* 0x0050 */ unsigned long RngData;
  /* 0x0058 */ unsigned __int64 MitigationOptions;
} PS_SYSTEM_DLL_INIT_BLOCK, *PPS_SYSTEM_DLL_INIT_BLOCK; /* size: 0x0060 */

