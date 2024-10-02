typedef struct _RTL_SCP_CFG_COMMON_HEADER
{
  /* 0x0000 */ unsigned long CfgDispatchRva;
  /* 0x0004 */ unsigned long CfgDispatchESRva;
  /* 0x0008 */ unsigned long CfgCheckRva;
  /* 0x000c */ unsigned long CfgCheckESRva;
  /* 0x0010 */ unsigned long InvalidCallHandlerRva;
  /* 0x0014 */ unsigned long FnTableRva;
} RTL_SCP_CFG_COMMON_HEADER, *PRTL_SCP_CFG_COMMON_HEADER; /* size: 0x0018 */

