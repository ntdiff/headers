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

