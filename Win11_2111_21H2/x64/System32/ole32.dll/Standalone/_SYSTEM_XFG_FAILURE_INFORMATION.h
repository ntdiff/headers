typedef struct _SYSTEM_XFG_FAILURE_INFORMATION
{
  /* 0x0000 */ void* ReturnAddress;
  /* 0x0008 */ void* TargetAddress;
  /* 0x0010 */ unsigned long DispatchMode;
  /* 0x0018 */ unsigned __int64 XfgValue;
} SYSTEM_XFG_FAILURE_INFORMATION, *PSYSTEM_XFG_FAILURE_INFORMATION; /* size: 0x0020 */

