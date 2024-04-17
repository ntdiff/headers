typedef struct _PS_MITIGATION_OPTIONS_MAP
{
  /* 0x0000 */ unsigned __int64 Map[2];
} PS_MITIGATION_OPTIONS_MAP, *PPS_MITIGATION_OPTIONS_MAP; /* size: 0x0010 */

typedef struct _PS_MITIGATION_AUDIT_OPTIONS_MAP
{
  /* 0x0000 */ unsigned __int64 Map[2];
} PS_MITIGATION_AUDIT_OPTIONS_MAP, *PPS_MITIGATION_AUDIT_OPTIONS_MAP; /* size: 0x0010 */

typedef struct _PS_SYSTEM_DLL_INIT_BLOCK
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ unsigned __int64 SystemDllWowRelocation;
  /* 0x0010 */ unsigned __int64 SystemDllNativeRelocation;
  /* 0x0018 */ unsigned __int64 Wow64SharedInformation[16];
  /* 0x0098 */ unsigned long RngData;
  union
  {
    /* 0x009c */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x009c */ unsigned long CfgOverride : 1; /* bit position: 0 */
      /* 0x009c */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x00a0 */ struct _PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap;
  /* 0x00b0 */ unsigned __int64 CfgBitMap;
  /* 0x00b8 */ unsigned __int64 CfgBitMapSize;
  /* 0x00c0 */ unsigned __int64 Wow64CfgBitMap;
  /* 0x00c8 */ unsigned __int64 Wow64CfgBitMapSize;
  /* 0x00d0 */ struct _PS_MITIGATION_AUDIT_OPTIONS_MAP MitigationAuditOptionsMap;
} PS_SYSTEM_DLL_INIT_BLOCK, *PPS_SYSTEM_DLL_INIT_BLOCK; /* size: 0x00e0 */

