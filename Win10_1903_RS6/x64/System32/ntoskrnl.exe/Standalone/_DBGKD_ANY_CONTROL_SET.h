typedef struct _X86_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long TraceFlag;
  /* 0x0004 */ unsigned long Dr7;
  /* 0x0008 */ unsigned long CurrentSymbolStart;
  /* 0x000c */ unsigned long CurrentSymbolEnd;
} X86_DBGKD_CONTROL_SET, *PX86_DBGKD_CONTROL_SET; /* size: 0x0010 */

typedef struct _IA64_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned __int64 CurrentSymbolStart;
  /* 0x000c */ unsigned __int64 CurrentSymbolEnd;
} IA64_DBGKD_CONTROL_SET, *PIA64_DBGKD_CONTROL_SET; /* size: 0x0014 */

typedef struct _AMD64_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long TraceFlag;
  /* 0x0004 */ unsigned __int64 Dr7;
  /* 0x000c */ unsigned __int64 CurrentSymbolStart;
  /* 0x0014 */ unsigned __int64 CurrentSymbolEnd;
} AMD64_DBGKD_CONTROL_SET, *PAMD64_DBGKD_CONTROL_SET; /* size: 0x001c */

typedef struct _ARM_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long CurrentSymbolStart;
  /* 0x0008 */ unsigned long CurrentSymbolEnd;
} ARM_DBGKD_CONTROL_SET, *PARM_DBGKD_CONTROL_SET; /* size: 0x000c */

typedef struct _ARM64_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long TraceFlag;
  /* 0x0008 */ unsigned __int64 CurrentSymbolStart;
  /* 0x0010 */ unsigned __int64 CurrentSymbolEnd;
} ARM64_DBGKD_CONTROL_SET, *PARM64_DBGKD_CONTROL_SET; /* size: 0x0018 */

typedef struct _ARMCE_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long CurrentSymbolStart;
  /* 0x0008 */ unsigned long CurrentSymbolEnd;
} ARMCE_DBGKD_CONTROL_SET, *PARMCE_DBGKD_CONTROL_SET; /* size: 0x000c */

typedef struct _PPC_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long CurrentSymbolStart;
  /* 0x0008 */ unsigned long CurrentSymbolEnd;
} PPC_DBGKD_CONTROL_SET, *PPPC_DBGKD_CONTROL_SET; /* size: 0x000c */

typedef struct _DBGKD_ANY_CONTROL_SET
{
  union
  {
    /* 0x0000 */ struct _X86_DBGKD_CONTROL_SET X86ControlSet;
    /* 0x0000 */ unsigned long AlphaControlSet;
    /* 0x0000 */ struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;
    /* 0x0000 */ struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet;
    /* 0x0000 */ struct _ARM_DBGKD_CONTROL_SET ArmControlSet;
    /* 0x0000 */ struct _ARM64_DBGKD_CONTROL_SET Arm64ControlSet;
    /* 0x0000 */ struct _ARMCE_DBGKD_CONTROL_SET ArmCeControlSet;
    struct
    {
      /* 0x0000 */ struct _PPC_DBGKD_CONTROL_SET PpcControlSet;
      /* 0x000c */ long __PADDING__[4];
    }; /* size: 0x001c */
  }; /* size: 0x001c */
} DBGKD_ANY_CONTROL_SET, *PDBGKD_ANY_CONTROL_SET; /* size: 0x001c */

