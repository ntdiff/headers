typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Cr0NpxState;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _DESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad;
  /* 0x0002 */ unsigned short Limit;
  /* 0x0004 */ unsigned long Base;
} DESCRIPTOR, *PDESCRIPTOR; /* size: 0x0008 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned long Cr0;
  /* 0x0004 */ unsigned long Cr2;
  /* 0x0008 */ unsigned long Cr3;
  /* 0x000c */ unsigned long Cr4;
  /* 0x0010 */ unsigned long KernelDr0;
  /* 0x0014 */ unsigned long KernelDr1;
  /* 0x0018 */ unsigned long KernelDr2;
  /* 0x001c */ unsigned long KernelDr3;
  /* 0x0020 */ unsigned long KernelDr6;
  /* 0x0024 */ unsigned long KernelDr7;
  /* 0x0028 */ struct _DESCRIPTOR Gdtr;
  /* 0x0030 */ struct _DESCRIPTOR Idtr;
  /* 0x0038 */ unsigned short Tr;
  /* 0x003a */ unsigned short Ldtr;
  /* 0x003c */ unsigned long Reserved[6];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x0054 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _CONTEXT ContextFrame;
  /* 0x02cc */ struct _KSPECIAL_REGISTERS SpecialRegisters;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x0320 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0004 */ unsigned long* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0008 */

typedef struct _PP_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE* P;
  /* 0x0004 */ struct _GENERAL_LOOKASIDE* L;
} PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Importance;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ unsigned long* Lock;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _FNSAVE_FORMAT
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
} FNSAVE_FORMAT, *PFNSAVE_FORMAT; /* size: 0x006c */

typedef struct _FXSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned short TagWord;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned long ErrorSelector;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned long DataSelector;
  /* 0x0018 */ unsigned long MXCsr;
  /* 0x001c */ unsigned long MXCsrMask;
  /* 0x0020 */ unsigned char RegisterArea[128];
  /* 0x00a0 */ unsigned char Reserved3[128];
  /* 0x0120 */ unsigned char Reserved4[224];
  /* 0x0200 */ unsigned char Align16Byte[8];
} FXSAVE_FORMAT, *PFXSAVE_FORMAT; /* size: 0x0208 */

typedef struct _FX_SAVE_AREA
{
  union
  {
    union
    {
      /* 0x0000 */ struct _FNSAVE_FORMAT FnArea;
      /* 0x0000 */ struct _FXSAVE_FORMAT FxArea;
    }; /* size: 0x0208 */
  } /* size: 0x0208 */ U;
  /* 0x0208 */ unsigned long NpxSavedCpu;
  /* 0x020c */ unsigned long Cr0NpxState;
} FX_SAVE_AREA, *PFX_SAVE_AREA; /* size: 0x0210 */

struct PROCESSOR_IDLE_TIMES
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 EndTime;
  /* 0x0010 */ unsigned long IdleHandlerReserved[4];
}; /* size: 0x0020 */

typedef struct _DISPATCHER_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Absolute;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char Inserted;
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ void* IdleFunction /* function */;
  /* 0x0004 */ unsigned long Idle0KernelTimeLimit;
  /* 0x0008 */ unsigned long Idle0LastTime;
  /* 0x000c */ void* IdleHandlers;
  /* 0x0010 */ void* IdleState;
  /* 0x0014 */ unsigned long IdleHandlersCount;
  /* 0x0018 */ unsigned __int64 LastCheck;
  /* 0x0020 */ struct PROCESSOR_IDLE_TIMES IdleTimes;
  /* 0x0040 */ unsigned long IdleTime1;
  /* 0x0044 */ unsigned long PromotionCheck;
  /* 0x0048 */ unsigned long IdleTime2;
  /* 0x004c */ unsigned char CurrentThrottle;
  /* 0x004d */ unsigned char ThermalThrottleLimit;
  /* 0x004e */ unsigned char CurrentThrottleIndex;
  /* 0x004f */ unsigned char ThermalThrottleIndex;
  /* 0x0050 */ unsigned long LastKernelUserTime;
  /* 0x0054 */ unsigned long LastIdleThreadKernelTime;
  /* 0x0058 */ unsigned long PackageIdleStartTime;
  /* 0x005c */ unsigned long PackageIdleTime;
  /* 0x0060 */ unsigned long DebugCount;
  /* 0x0064 */ unsigned long LastSysTime;
  /* 0x0068 */ unsigned __int64 TotalIdleStateTime[3];
  /* 0x0080 */ unsigned long TotalIdleTransitions[3];
  /* 0x0090 */ unsigned __int64 PreviousC3StateTime;
  /* 0x0098 */ unsigned char KneeThrottleIndex;
  /* 0x0099 */ unsigned char ThrottleLimitIndex;
  /* 0x009a */ unsigned char PerfStatesCount;
  /* 0x009b */ unsigned char ProcessorMinThrottle;
  /* 0x009c */ unsigned char ProcessorMaxThrottle;
  /* 0x009d */ unsigned char EnableIdleAccounting;
  /* 0x009e */ unsigned char LastC3Percentage;
  /* 0x009f */ unsigned char LastAdjustedBusyPercentage;
  /* 0x00a0 */ unsigned long PromotionCount;
  /* 0x00a4 */ unsigned long DemotionCount;
  /* 0x00a8 */ unsigned long ErrorCount;
  /* 0x00ac */ unsigned long RetryCount;
  /* 0x00b0 */ unsigned long Flags;
  /* 0x00b8 */ union _LARGE_INTEGER PerfCounterFrequency;
  /* 0x00c0 */ unsigned long PerfTickCount;
  /* 0x00c8 */ struct _KTIMER PerfTimer;
  /* 0x00f0 */ struct _KDPC PerfDpc;
  /* 0x0110 */ struct PROCESSOR_PERF_STATE* PerfStates;
  /* 0x0114 */ void* PerfSetThrottle /* function */;
  /* 0x0118 */ unsigned long LastC3KernelUserTime;
  /* 0x011c */ unsigned long LastPackageIdleTime;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0120 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned short MinorVersion;
  /* 0x0002 */ unsigned short MajorVersion;
  /* 0x0004 */ struct _KTHREAD* CurrentThread;
  /* 0x0008 */ struct _KTHREAD* NextThread;
  /* 0x000c */ struct _KTHREAD* IdleThread;
  /* 0x0010 */ char Number;
  /* 0x0011 */ char Reserved;
  /* 0x0012 */ unsigned short BuildType;
  /* 0x0014 */ unsigned long SetMember;
  /* 0x0018 */ char CpuType;
  /* 0x0019 */ char CpuID;
  /* 0x001a */ unsigned short CpuStep;
  /* 0x001c */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x033c */ unsigned long KernelReserved[16];
  /* 0x037c */ unsigned long HalReserved[16];
  /* 0x03bc */ unsigned char PrcbPad0[92];
  /* 0x0418 */ struct _KSPIN_LOCK_QUEUE LockQueue[16];
  /* 0x0498 */ unsigned char PrcbPad1[8];
  /* 0x04a0 */ struct _KTHREAD* NpxThread;
  /* 0x04a4 */ unsigned long InterruptCount;
  /* 0x04a8 */ unsigned long KernelTime;
  /* 0x04ac */ unsigned long UserTime;
  /* 0x04b0 */ unsigned long DpcTime;
  /* 0x04b4 */ unsigned long DebugDpcTime;
  /* 0x04b8 */ unsigned long InterruptTime;
  /* 0x04bc */ unsigned long AdjustDpcThreshold;
  /* 0x04c0 */ unsigned long PageColor;
  /* 0x04c4 */ unsigned long SkipTick;
  /* 0x04c8 */ unsigned char MultiThreadSetBusy;
  /* 0x04c9 */ unsigned char Spare2[3];
  /* 0x04cc */ struct _KNODE* ParentNode;
  /* 0x04d0 */ unsigned long MultiThreadProcessorSet;
  /* 0x04d4 */ struct _KPRCB* MultiThreadSetMaster;
  /* 0x04d8 */ unsigned long ThreadStartCount[2];
  /* 0x04e0 */ unsigned long CcFastReadNoWait;
  /* 0x04e4 */ unsigned long CcFastReadWait;
  /* 0x04e8 */ unsigned long CcFastReadNotPossible;
  /* 0x04ec */ unsigned long CcCopyReadNoWait;
  /* 0x04f0 */ unsigned long CcCopyReadWait;
  /* 0x04f4 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x04f8 */ unsigned long KeAlignmentFixupCount;
  /* 0x04fc */ unsigned long KeContextSwitches;
  /* 0x0500 */ unsigned long KeDcacheFlushCount;
  /* 0x0504 */ unsigned long KeExceptionDispatchCount;
  /* 0x0508 */ unsigned long KeFirstLevelTbFills;
  /* 0x050c */ unsigned long KeFloatingEmulationCount;
  /* 0x0510 */ unsigned long KeIcacheFlushCount;
  /* 0x0514 */ unsigned long KeSecondLevelTbFills;
  /* 0x0518 */ unsigned long KeSystemCalls;
  /* 0x051c */ unsigned long SpareCounter0[1];
  /* 0x0520 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x05a0 */ struct _PP_LOOKASIDE_LIST PPNPagedLookasideList[32];
  /* 0x06a0 */ struct _PP_LOOKASIDE_LIST PPPagedLookasideList[32];
  /* 0x07a0 */ volatile unsigned long PacketBarrier;
  /* 0x07a4 */ volatile unsigned long ReverseStall;
  /* 0x07a8 */ void* IpiFrame;
  /* 0x07ac */ unsigned char PrcbPad2[52];
  /* 0x07e0 */ void* volatile CurrentPacket[3];
  /* 0x07ec */ volatile unsigned long TargetSet;
  /* 0x07f0 */ void* volatile WorkerRoutine /* function */;
  /* 0x07f4 */ volatile unsigned long IpiFrozen;
  /* 0x07f8 */ unsigned char PrcbPad3[40];
  /* 0x0820 */ volatile unsigned long RequestSummary;
  /* 0x0824 */ volatile struct _KPRCB* SignalDone;
  /* 0x0828 */ unsigned char PrcbPad4[56];
  /* 0x0860 */ struct _LIST_ENTRY DpcListHead;
  /* 0x0868 */ void* DpcStack;
  /* 0x086c */ unsigned long DpcCount;
  /* 0x0870 */ volatile unsigned long DpcQueueDepth;
  /* 0x0874 */ volatile unsigned long DpcRoutineActive;
  /* 0x0878 */ volatile unsigned long DpcInterruptRequested;
  /* 0x087c */ unsigned long DpcLastCount;
  /* 0x0880 */ unsigned long DpcRequestRate;
  /* 0x0884 */ unsigned long MaximumDpcQueueDepth;
  /* 0x0888 */ unsigned long MinimumDpcRate;
  /* 0x088c */ unsigned long QuantumEnd;
  /* 0x0890 */ unsigned char PrcbPad5[16];
  /* 0x08a0 */ unsigned long DpcLock;
  /* 0x08a4 */ unsigned char PrcbPad6[28];
  /* 0x08c0 */ struct _KDPC CallDpc;
  /* 0x08e0 */ void* ChainedInterruptList;
  /* 0x08e4 */ long LookasideIrpFloat;
  /* 0x08e8 */ unsigned long SpareFields0[6];
  /* 0x0900 */ unsigned char VendorString[13];
  /* 0x090d */ unsigned char InitialApicId;
  /* 0x090e */ unsigned char LogicalProcessorsPerPhysicalProcessor;
  /* 0x0910 */ unsigned long MHz;
  /* 0x0914 */ unsigned long FeatureBits;
  /* 0x0918 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x0920 */ struct _FX_SAVE_AREA NpxSaveArea;
  /* 0x0b30 */ struct _PROCESSOR_POWER_STATE PowerState;
} KPRCB, *PKPRCB; /* size: 0x0c50 */

