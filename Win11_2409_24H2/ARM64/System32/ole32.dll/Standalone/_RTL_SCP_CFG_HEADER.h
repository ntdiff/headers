typedef struct _RTL_SCP_CFG_COMMON_HEADER
{
  /* 0x0000 */ unsigned long CfgDispatchRva;
  /* 0x0004 */ unsigned long CfgDispatchESRva;
  /* 0x0008 */ unsigned long CfgCheckRva;
  /* 0x000c */ unsigned long CfgCheckESRva;
  /* 0x0010 */ unsigned long InvalidCallHandlerRva;
  /* 0x0014 */ unsigned long FnTableRva;
} RTL_SCP_CFG_COMMON_HEADER, *PRTL_SCP_CFG_COMMON_HEADER; /* size: 0x0018 */

typedef struct _RTL_SCP_CFG_ARM64_HEADER
{
  /* 0x0000 */ unsigned long EcInvalidCallHandlerRva;
  /* 0x0004 */ unsigned long EcCfgCheckRva;
  /* 0x0008 */ unsigned long EcCfgCheckESRva;
  /* 0x000c */ unsigned long EcCallCheckRva;
  /* 0x0010 */ unsigned long CpuInitializationCompleteLoadRva;
  /* 0x0014 */ unsigned long LdrpValidateEcCallTargetInitRva;
  /* 0x0018 */ unsigned long SyscallFfsSizeRva;
  /* 0x001c */ unsigned long SyscallFfsBaseRva;
} RTL_SCP_CFG_ARM64_HEADER, *PRTL_SCP_CFG_ARM64_HEADER; /* size: 0x0020 */

typedef struct _RTL_SCP_CFG_HEADER
{
  /* 0x0000 */ struct _RTL_SCP_CFG_COMMON_HEADER Common;
  /* 0x0018 */ struct _RTL_SCP_CFG_ARM64_HEADER Arm64;
} RTL_SCP_CFG_HEADER, *PRTL_SCP_CFG_HEADER; /* size: 0x0038 */

