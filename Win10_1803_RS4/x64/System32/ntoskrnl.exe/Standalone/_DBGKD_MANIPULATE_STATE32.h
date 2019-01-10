typedef struct _DBGKD_READ_MEMORY32
{
  /* 0x0000 */ unsigned long TargetBaseAddress;
  /* 0x0004 */ unsigned long TransferCount;
  /* 0x0008 */ unsigned long ActualBytesRead;
} DBGKD_READ_MEMORY32, *PDBGKD_READ_MEMORY32; /* size: 0x000c */

typedef struct _DBGKD_WRITE_MEMORY32
{
  /* 0x0000 */ unsigned long TargetBaseAddress;
  /* 0x0004 */ unsigned long TransferCount;
  /* 0x0008 */ unsigned long ActualBytesWritten;
} DBGKD_WRITE_MEMORY32, *PDBGKD_WRITE_MEMORY32; /* size: 0x000c */

typedef struct _DBGKD_READ_MEMORY64
{
  /* 0x0000 */ unsigned __int64 TargetBaseAddress;
  /* 0x0008 */ unsigned long TransferCount;
  /* 0x000c */ unsigned long ActualBytesRead;
} DBGKD_READ_MEMORY64, *PDBGKD_READ_MEMORY64; /* size: 0x0010 */

typedef struct _DBGKD_WRITE_MEMORY64
{
  /* 0x0000 */ unsigned __int64 TargetBaseAddress;
  /* 0x0008 */ unsigned long TransferCount;
  /* 0x000c */ unsigned long ActualBytesWritten;
} DBGKD_WRITE_MEMORY64, *PDBGKD_WRITE_MEMORY64; /* size: 0x0010 */

typedef struct _DBGKD_GET_CONTEXT
{
  /* 0x0000 */ unsigned long Unused;
} DBGKD_GET_CONTEXT, *PDBGKD_GET_CONTEXT; /* size: 0x0004 */

typedef struct _DBGKD_SET_CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
} DBGKD_SET_CONTEXT, *PDBGKD_SET_CONTEXT; /* size: 0x0004 */

typedef struct _DBGKD_WRITE_BREAKPOINT32
{
  /* 0x0000 */ unsigned long BreakPointAddress;
  /* 0x0004 */ unsigned long BreakPointHandle;
} DBGKD_WRITE_BREAKPOINT32, *PDBGKD_WRITE_BREAKPOINT32; /* size: 0x0008 */

typedef struct _DBGKD_RESTORE_BREAKPOINT
{
  /* 0x0000 */ unsigned long BreakPointHandle;
} DBGKD_RESTORE_BREAKPOINT, *PDBGKD_RESTORE_BREAKPOINT; /* size: 0x0004 */

typedef struct _DBGKD_CONTINUE
{
  /* 0x0000 */ long ContinueStatus;
} DBGKD_CONTINUE, *PDBGKD_CONTINUE; /* size: 0x0004 */

typedef struct _AMD64_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long TraceFlag;
  /* 0x0004 */ unsigned __int64 Dr7;
  /* 0x000c */ unsigned __int64 CurrentSymbolStart;
  /* 0x0014 */ unsigned __int64 CurrentSymbolEnd;
} AMD64_DBGKD_CONTROL_SET, *PAMD64_DBGKD_CONTROL_SET; /* size: 0x001c */

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

typedef struct _DBGKD_CONTINUE2
{
  /* 0x0000 */ long ContinueStatus;
  union
  {
    /* 0x0004 */ struct _AMD64_DBGKD_CONTROL_SET ControlSet;
    /* 0x0004 */ struct _DBGKD_ANY_CONTROL_SET AnyControlSet;
  }; /* size: 0x001c */
} DBGKD_CONTINUE2, *PDBGKD_CONTINUE2; /* size: 0x0020 */

typedef struct _DBGKD_READ_WRITE_IO32
{
  /* 0x0000 */ unsigned long DataSize;
  /* 0x0004 */ unsigned long IoAddress;
  /* 0x0008 */ unsigned long DataValue;
} DBGKD_READ_WRITE_IO32, *PDBGKD_READ_WRITE_IO32; /* size: 0x000c */

typedef struct _DBGKD_READ_WRITE_IO_EXTENDED32
{
  /* 0x0000 */ unsigned long DataSize;
  /* 0x0004 */ unsigned long InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long AddressSpace;
  /* 0x0010 */ unsigned long IoAddress;
  /* 0x0014 */ unsigned long DataValue;
} DBGKD_READ_WRITE_IO_EXTENDED32, *PDBGKD_READ_WRITE_IO_EXTENDED32; /* size: 0x0018 */

typedef struct _DBGKD_QUERY_SPECIAL_CALLS
{
  /* 0x0000 */ unsigned long NumberOfSpecialCalls;
} DBGKD_QUERY_SPECIAL_CALLS, *PDBGKD_QUERY_SPECIAL_CALLS; /* size: 0x0004 */

typedef struct _DBGKD_SET_SPECIAL_CALL32
{
  /* 0x0000 */ unsigned long SpecialCall;
} DBGKD_SET_SPECIAL_CALL32, *PDBGKD_SET_SPECIAL_CALL32; /* size: 0x0004 */

typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT32
{
  /* 0x0000 */ unsigned long BreakpointAddress;
  /* 0x0004 */ unsigned long Flags;
} DBGKD_SET_INTERNAL_BREAKPOINT32, *PDBGKD_SET_INTERNAL_BREAKPOINT32; /* size: 0x0008 */

typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT32
{
  /* 0x0000 */ unsigned long BreakpointAddress;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Calls;
  /* 0x000c */ unsigned long MaxCallsPerPeriod;
  /* 0x0010 */ unsigned long MinInstructions;
  /* 0x0014 */ unsigned long MaxInstructions;
  /* 0x0018 */ unsigned long TotalInstructions;
} DBGKD_GET_INTERNAL_BREAKPOINT32, *PDBGKD_GET_INTERNAL_BREAKPOINT32; /* size: 0x001c */

typedef struct _DBGKD_GET_VERSION32
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
  /* 0x0004 */ unsigned short ProtocolVersion;
  /* 0x0006 */ unsigned short Flags;
  /* 0x0008 */ unsigned long KernBase;
  /* 0x000c */ unsigned long PsLoadedModuleList;
  /* 0x0010 */ unsigned short MachineType;
  /* 0x0012 */ unsigned short ThCallbackStack;
  /* 0x0014 */ unsigned short NextCallback;
  /* 0x0016 */ unsigned short FramePointer;
  /* 0x0018 */ unsigned long KiCallUserMode;
  /* 0x001c */ unsigned long KeUserCallbackDispatcher;
  /* 0x0020 */ unsigned long BreakpointWithStatus;
  /* 0x0024 */ unsigned long DebuggerDataList;
} DBGKD_GET_VERSION32, *PDBGKD_GET_VERSION32; /* size: 0x0028 */

typedef struct _DBGKD_BREAKPOINTEX
{
  /* 0x0000 */ unsigned long BreakPointCount;
  /* 0x0004 */ long ContinueStatus;
} DBGKD_BREAKPOINTEX, *PDBGKD_BREAKPOINTEX; /* size: 0x0008 */

typedef struct _DBGKD_READ_WRITE_MSR
{
  /* 0x0000 */ unsigned long Msr;
  /* 0x0004 */ unsigned long DataValueLow;
  /* 0x0008 */ unsigned long DataValueHigh;
} DBGKD_READ_WRITE_MSR, *PDBGKD_READ_WRITE_MSR; /* size: 0x000c */

typedef struct _DBGKD_SEARCH_MEMORY
{
  union
  {
    /* 0x0000 */ unsigned __int64 SearchAddress;
    /* 0x0000 */ unsigned __int64 FoundAddress;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 SearchLength;
  /* 0x0010 */ unsigned long PatternLength;
  /* 0x0014 */ long __PADDING__[1];
} DBGKD_SEARCH_MEMORY, *PDBGKD_SEARCH_MEMORY; /* size: 0x0018 */

typedef struct _DBGKD_CONTEXT_EX
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long ByteCount;
  /* 0x0008 */ unsigned long BytesCopied;
} DBGKD_CONTEXT_EX, *PDBGKD_CONTEXT_EX; /* size: 0x000c */

typedef struct _DBGKD_MANIPULATE_STATE32
{
  /* 0x0000 */ unsigned long ApiNumber;
  /* 0x0004 */ unsigned short ProcessorLevel;
  /* 0x0006 */ unsigned short Processor;
  /* 0x0008 */ long ReturnStatus;
  union
  {
    union
    {
      /* 0x000c */ struct _DBGKD_READ_MEMORY32 ReadMemory;
      /* 0x000c */ struct _DBGKD_WRITE_MEMORY32 WriteMemory;
      /* 0x000c */ struct _DBGKD_READ_MEMORY64 ReadMemory64;
      /* 0x000c */ struct _DBGKD_WRITE_MEMORY64 WriteMemory64;
      /* 0x000c */ struct _DBGKD_GET_CONTEXT GetContext;
      /* 0x000c */ struct _DBGKD_SET_CONTEXT SetContext;
      /* 0x000c */ struct _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;
      /* 0x000c */ struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;
      /* 0x000c */ struct _DBGKD_CONTINUE Continue;
      /* 0x000c */ struct _DBGKD_CONTINUE2 Continue2;
      /* 0x000c */ struct _DBGKD_READ_WRITE_IO32 ReadWriteIo;
      /* 0x000c */ struct _DBGKD_READ_WRITE_IO_EXTENDED32 ReadWriteIoExtended;
      /* 0x000c */ struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;
      /* 0x000c */ struct _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;
      /* 0x000c */ struct _DBGKD_SET_INTERNAL_BREAKPOINT32 SetInternalBreakpoint;
      /* 0x000c */ struct _DBGKD_GET_INTERNAL_BREAKPOINT32 GetInternalBreakpoint;
      /* 0x000c */ struct _DBGKD_GET_VERSION32 GetVersion32;
      /* 0x000c */ struct _DBGKD_BREAKPOINTEX BreakPointEx;
      /* 0x000c */ struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;
      /* 0x000c */ struct _DBGKD_SEARCH_MEMORY SearchMemory;
      /* 0x000c */ struct _DBGKD_CONTEXT_EX GetContextEx;
      /* 0x000c */ struct _DBGKD_CONTEXT_EX SetContextEx;
    }; /* size: 0x0028 */
  } /* size: 0x0028 */ u;
} DBGKD_MANIPULATE_STATE32, *PDBGKD_MANIPULATE_STATE32; /* size: 0x0034 */

