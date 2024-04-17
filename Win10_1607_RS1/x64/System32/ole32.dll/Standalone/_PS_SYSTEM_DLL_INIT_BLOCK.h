typedef struct _PS_SYSTEM_DLL_INIT_BLOCK
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long SystemDllWowRelocation;
  /* 0x0008 */ unsigned __int64 SystemDllNativeRelocation;
  /* 0x0010 */ unsigned long Wow64SharedInformation[16];
  /* 0x0050 */ unsigned long RngData;
  union
  {
    /* 0x0054 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0054 */ unsigned long CfgOverride : 1; /* bit position: 0 */
      /* 0x0054 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned __int64 MitigationOptions;
  /* 0x0060 */ unsigned __int64 CfgBitMap;
  /* 0x0068 */ unsigned __int64 CfgBitMapSize;
  /* 0x0070 */ unsigned __int64 Wow64CfgBitMap;
  /* 0x0078 */ unsigned __int64 Wow64CfgBitMapSize;
} PS_SYSTEM_DLL_INIT_BLOCK, *PPS_SYSTEM_DLL_INIT_BLOCK; /* size: 0x0080 */

