typedef struct _RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC
{
  /* 0x0000 */ void* EcInvalidCallHandler;
  /* 0x0008 */ void* EcCfgCheckFptr;
  /* 0x0010 */ void* EcCfgCheckESFptr;
  /* 0x0018 */ void* EcCallCheckFptr;
  /* 0x0020 */ void* CpuInitializationComplete;
  /* 0x0028 */ void* LdrpValidateEcCallTargetInit;
  union
  {
    union
    {
      /* 0x0030 */ unsigned long* Ptr;
      /* 0x0030 */ unsigned long Value;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ SyscallFfsSize;
  /* 0x0038 */ void* SyscallFfsBase;
} RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC, *PRTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC; /* size: 0x0040 */

