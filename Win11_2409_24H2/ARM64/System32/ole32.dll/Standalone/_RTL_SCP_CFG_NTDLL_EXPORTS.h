typedef struct _RTL_SCP_CFG_REGION_BOUNDS
{
  /* 0x0000 */ void* StartAddress;
  /* 0x0008 */ void* EndAddress;
} RTL_SCP_CFG_REGION_BOUNDS, *PRTL_SCP_CFG_REGION_BOUNDS; /* size: 0x0010 */

typedef struct _RTL_SCP_CFG_NTDLL_EXPORTS
{
  /* 0x0000 */ struct _RTL_SCP_CFG_REGION_BOUNDS ScpRegions[4];
  /* 0x0040 */ void* CfgDispatchFptr;
  /* 0x0048 */ void* CfgDispatchESFptr;
  /* 0x0050 */ void* CfgCheckFptr;
  /* 0x0058 */ void* CfgCheckESFptr;
  /* 0x0060 */ void* IllegalCallHandler;
} RTL_SCP_CFG_NTDLL_EXPORTS, *PRTL_SCP_CFG_NTDLL_EXPORTS; /* size: 0x0068 */

