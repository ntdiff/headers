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

typedef struct _DBGKD_WRITE_BREAKPOINT64
{
  /* 0x0000 */ unsigned __int64 BreakPointAddress;
  /* 0x0008 */ unsigned long BreakPointHandle;
  /* 0x000c */ long __PADDING__[1];
} DBGKD_WRITE_BREAKPOINT64, *PDBGKD_WRITE_BREAKPOINT64; /* size: 0x0010 */

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

typedef struct _DBGKD_READ_WRITE_IO64
{
  /* 0x0000 */ unsigned __int64 IoAddress;
  /* 0x0008 */ unsigned long DataSize;
  /* 0x000c */ unsigned long DataValue;
} DBGKD_READ_WRITE_IO64, *PDBGKD_READ_WRITE_IO64; /* size: 0x0010 */

typedef struct _DBGKD_READ_WRITE_IO_EXTENDED64
{
  /* 0x0000 */ unsigned long DataSize;
  /* 0x0004 */ unsigned long InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long AddressSpace;
  /* 0x0010 */ unsigned __int64 IoAddress;
  /* 0x0018 */ unsigned long DataValue;
  /* 0x001c */ long __PADDING__[1];
} DBGKD_READ_WRITE_IO_EXTENDED64, *PDBGKD_READ_WRITE_IO_EXTENDED64; /* size: 0x0020 */

typedef struct _DBGKD_QUERY_SPECIAL_CALLS
{
  /* 0x0000 */ unsigned long NumberOfSpecialCalls;
} DBGKD_QUERY_SPECIAL_CALLS, *PDBGKD_QUERY_SPECIAL_CALLS; /* size: 0x0004 */

typedef struct _DBGKD_SET_SPECIAL_CALL64
{
  /* 0x0000 */ unsigned __int64 SpecialCall;
} DBGKD_SET_SPECIAL_CALL64, *PDBGKD_SET_SPECIAL_CALL64; /* size: 0x0008 */

typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT64
{
  /* 0x0000 */ unsigned __int64 BreakpointAddress;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ long __PADDING__[1];
} DBGKD_SET_INTERNAL_BREAKPOINT64, *PDBGKD_SET_INTERNAL_BREAKPOINT64; /* size: 0x0010 */

typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT64
{
  /* 0x0000 */ unsigned __int64 BreakpointAddress;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Calls;
  /* 0x0010 */ unsigned long MaxCallsPerPeriod;
  /* 0x0014 */ unsigned long MinInstructions;
  /* 0x0018 */ unsigned long MaxInstructions;
  /* 0x001c */ unsigned long TotalInstructions;
} DBGKD_GET_INTERNAL_BREAKPOINT64, *PDBGKD_GET_INTERNAL_BREAKPOINT64; /* size: 0x0020 */

typedef struct _DBGKD_GET_VERSION64
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
  /* 0x0004 */ unsigned char ProtocolVersion;
  /* 0x0005 */ unsigned char KdSecondaryVersion;
  /* 0x0006 */ unsigned short Flags;
  /* 0x0008 */ unsigned short MachineType;
  /* 0x000a */ unsigned char MaxPacketType;
  /* 0x000b */ unsigned char MaxStateChange;
  /* 0x000c */ unsigned char MaxManipulate;
  /* 0x000d */ unsigned char Simulation;
  /* 0x000e */ unsigned short Unused[1];
  /* 0x0010 */ unsigned __int64 KernBase;
  /* 0x0018 */ unsigned __int64 PsLoadedModuleList;
  /* 0x0020 */ unsigned __int64 DebuggerDataList;
} DBGKD_GET_VERSION64, *PDBGKD_GET_VERSION64; /* size: 0x0028 */

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

typedef struct _DBGKD_GET_SET_BUS_DATA
{
  /* 0x0000 */ unsigned long BusDataType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ unsigned long SlotNumber;
  /* 0x000c */ unsigned long Offset;
  /* 0x0010 */ unsigned long Length;
} DBGKD_GET_SET_BUS_DATA, *PDBGKD_GET_SET_BUS_DATA; /* size: 0x0014 */

typedef struct _DBGKD_FILL_MEMORY
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned short Flags;
  /* 0x000e */ unsigned short PatternLength;
} DBGKD_FILL_MEMORY, *PDBGKD_FILL_MEMORY; /* size: 0x0010 */

typedef struct _DBGKD_QUERY_MEMORY
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 Reserved;
  /* 0x0010 */ unsigned long AddressSpace;
  /* 0x0014 */ unsigned long Flags;
} DBGKD_QUERY_MEMORY, *PDBGKD_QUERY_MEMORY; /* size: 0x0018 */

typedef struct _DBGKD_SWITCH_PARTITION
{
  /* 0x0000 */ unsigned long Partition;
} DBGKD_SWITCH_PARTITION, *PDBGKD_SWITCH_PARTITION; /* size: 0x0004 */

typedef struct _DBGKD_CONTEXT_EX
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long ByteCount;
  /* 0x0008 */ unsigned long BytesCopied;
} DBGKD_CONTEXT_EX, *PDBGKD_CONTEXT_EX; /* size: 0x000c */

typedef struct _DBGKD_WRITE_CUSTOM_BREAKPOINT
{
  /* 0x0000 */ unsigned __int64 BreakPointAddress;
  /* 0x0008 */ unsigned __int64 BreakPointInstruction;
  /* 0x0010 */ unsigned long BreakPointHandle;
  /* 0x0014 */ unsigned char BreakPointInstructionSize;
  /* 0x0015 */ unsigned char BreakPointInstructionAlignment;
  /* 0x0016 */ char __PADDING__[2];
} DBGKD_WRITE_CUSTOM_BREAKPOINT, *PDBGKD_WRITE_CUSTOM_BREAKPOINT; /* size: 0x0018 */

typedef struct _DBGKD_MANIPULATE_STATE64
{
  /* 0x0000 */ unsigned long ApiNumber;
  /* 0x0004 */ unsigned short ProcessorLevel;
  /* 0x0006 */ unsigned short Processor;
  /* 0x0008 */ long ReturnStatus;
  union
  {
    union
    {
      /* 0x0010 */ struct _DBGKD_READ_MEMORY64 ReadMemory;
      /* 0x0010 */ struct _DBGKD_WRITE_MEMORY64 WriteMemory;
      /* 0x0010 */ struct _DBGKD_GET_CONTEXT GetContext;
      /* 0x0010 */ struct _DBGKD_SET_CONTEXT SetContext;
      /* 0x0010 */ struct _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;
      /* 0x0010 */ struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;
      /* 0x0010 */ struct _DBGKD_CONTINUE Continue;
      /* 0x0010 */ struct _DBGKD_CONTINUE2 Continue2;
      /* 0x0010 */ struct _DBGKD_READ_WRITE_IO64 ReadWriteIo;
      /* 0x0010 */ struct _DBGKD_READ_WRITE_IO_EXTENDED64 ReadWriteIoExtended;
      /* 0x0010 */ struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;
      /* 0x0010 */ struct _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;
      /* 0x0010 */ struct _DBGKD_SET_INTERNAL_BREAKPOINT64 SetInternalBreakpoint;
      /* 0x0010 */ struct _DBGKD_GET_INTERNAL_BREAKPOINT64 GetInternalBreakpoint;
      /* 0x0010 */ struct _DBGKD_GET_VERSION64 GetVersion64;
      /* 0x0010 */ struct _DBGKD_BREAKPOINTEX BreakPointEx;
      /* 0x0010 */ struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;
      /* 0x0010 */ struct _DBGKD_SEARCH_MEMORY SearchMemory;
      /* 0x0010 */ struct _DBGKD_GET_SET_BUS_DATA GetSetBusData;
      /* 0x0010 */ struct _DBGKD_FILL_MEMORY FillMemory;
      /* 0x0010 */ struct _DBGKD_QUERY_MEMORY QueryMemory;
      /* 0x0010 */ struct _DBGKD_SWITCH_PARTITION SwitchPartition;
      /* 0x0010 */ struct _DBGKD_CONTEXT_EX GetContextEx;
      /* 0x0010 */ struct _DBGKD_CONTEXT_EX SetContextEx;
      /* 0x0010 */ struct _DBGKD_WRITE_CUSTOM_BREAKPOINT WriteCustomBreakPoint;
    }; /* size: 0x0028 */
  } /* size: 0x0028 */ u;
} DBGKD_MANIPULATE_STATE64, *PDBGKD_MANIPULATE_STATE64; /* size: 0x0038 */

