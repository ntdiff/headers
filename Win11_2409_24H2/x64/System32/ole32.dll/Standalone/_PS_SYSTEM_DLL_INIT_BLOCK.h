typedef struct _PS_MITIGATION_OPTIONS_MAP
{
  /* 0x0000 */ unsigned __int64 Map[3];
} PS_MITIGATION_OPTIONS_MAP, *PPS_MITIGATION_OPTIONS_MAP; /* size: 0x0018 */

typedef struct _PS_MITIGATION_AUDIT_OPTIONS_MAP
{
  /* 0x0000 */ unsigned __int64 Map[3];
} PS_MITIGATION_AUDIT_OPTIONS_MAP, *PPS_MITIGATION_AUDIT_OPTIONS_MAP; /* size: 0x0018 */

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
  /* 0x00b8 */ unsigned __int64 CfgBitMap;
  /* 0x00c0 */ unsigned __int64 CfgBitMapSize;
  /* 0x00c8 */ unsigned __int64 Wow64CfgBitMap;
  /* 0x00d0 */ unsigned __int64 Wow64CfgBitMapSize;
  /* 0x00d8 */ struct _PS_MITIGATION_AUDIT_OPTIONS_MAP MitigationAuditOptionsMap;
  /* 0x00f0 */ unsigned __int64 ScpCfgCheckFunction;
  /* 0x00f8 */ unsigned __int64 ScpCfgCheckESFunction;
  /* 0x0100 */ unsigned __int64 ScpCfgDispatchFunction;
  /* 0x0108 */ unsigned __int64 ScpCfgDispatchESFunction;
  /* 0x0110 */ unsigned __int64 ScpArm64EcCallCheck;
  /* 0x0118 */ unsigned __int64 ScpArm64EcCfgCheckFunction;
  /* 0x0120 */ unsigned __int64 ScpArm64EcCfgCheckESFunction;
} PS_SYSTEM_DLL_INIT_BLOCK, *PPS_SYSTEM_DLL_INIT_BLOCK; /* size: 0x0128 */

