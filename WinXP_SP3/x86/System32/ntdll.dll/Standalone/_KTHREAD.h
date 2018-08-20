typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Absolute;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char Inserted;
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KAPC_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY ApcListHead[2];
  /* 0x0010 */ struct _KPROCESS* Process;
  /* 0x0014 */ unsigned char KernelApcInProgress;
  /* 0x0015 */ unsigned char KernelApcPending;
  /* 0x0016 */ unsigned char UserApcPending;
  /* 0x0017 */ char __PADDING__[1];
} KAPC_STATE, *PKAPC_STATE; /* size: 0x0018 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ void* Object;
  /* 0x0010 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0014 */ unsigned short WaitKey;
  /* 0x0016 */ unsigned short WaitType;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0018 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
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

typedef struct _KAPC
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ unsigned long Spare0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ struct _LIST_ENTRY ApcListEntry;
  /* 0x0014 */ void* KernelRoutine /* function */;
  /* 0x0018 */ void* RundownRoutine /* function */;
  /* 0x001c */ void* NormalRoutine /* function */;
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

typedef struct _KTHREAD
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY MutantListHead;
  /* 0x0018 */ void* InitialStack;
  /* 0x001c */ void* StackLimit;
  /* 0x0020 */ void* Teb;
  /* 0x0024 */ void* TlsArray;
  /* 0x0028 */ void* KernelStack;
  /* 0x002c */ unsigned char DebugActive;
  /* 0x002d */ unsigned char State;
  /* 0x002e */ unsigned char Alerted[2];
  /* 0x0030 */ unsigned char Iopl;
  /* 0x0031 */ unsigned char NpxState;
  /* 0x0032 */ char Saturation;
  /* 0x0033 */ char Priority;
  /* 0x0034 */ struct _KAPC_STATE ApcState;
  /* 0x004c */ unsigned long ContextSwitches;
  /* 0x0050 */ unsigned char IdleSwapBlock;
  /* 0x0051 */ unsigned char Spare0[3];
  /* 0x0054 */ long WaitStatus;
  /* 0x0058 */ unsigned char WaitIrql;
  /* 0x0059 */ char WaitMode;
  /* 0x005a */ unsigned char WaitNext;
  /* 0x005b */ unsigned char WaitReason;
  /* 0x005c */ struct _KWAIT_BLOCK* WaitBlockList;
  union
  {
    /* 0x0060 */ struct _LIST_ENTRY WaitListEntry;
    /* 0x0060 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0008 */
  /* 0x0068 */ unsigned long WaitTime;
  /* 0x006c */ char BasePriority;
  /* 0x006d */ unsigned char DecrementCount;
  /* 0x006e */ char PriorityDecrement;
  /* 0x006f */ char Quantum;
  /* 0x0070 */ struct _KWAIT_BLOCK WaitBlock[4];
  /* 0x00d0 */ void* LegoData;
  /* 0x00d4 */ unsigned long KernelApcDisable;
  /* 0x00d8 */ unsigned long UserAffinity;
  /* 0x00dc */ unsigned char SystemAffinityActive;
  /* 0x00dd */ unsigned char PowerState;
  /* 0x00de */ unsigned char NpxIrql;
  /* 0x00df */ unsigned char InitialNode;
  /* 0x00e0 */ void* ServiceTable;
  /* 0x00e4 */ struct _KQUEUE* Queue;
  /* 0x00e8 */ unsigned long ApcQueueLock;
  /* 0x00f0 */ struct _KTIMER Timer;
  /* 0x0118 */ struct _LIST_ENTRY QueueListEntry;
  /* 0x0120 */ unsigned long SoftAffinity;
  /* 0x0124 */ unsigned long Affinity;
  /* 0x0128 */ unsigned char Preempted;
  /* 0x0129 */ unsigned char ProcessReadyQueue;
  /* 0x012a */ unsigned char KernelStackResident;
  /* 0x012b */ unsigned char NextProcessor;
  /* 0x012c */ void* CallbackStack;
  /* 0x0130 */ void* Win32Thread;
  /* 0x0134 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x0138 */ struct _KAPC_STATE* ApcStatePointer[2];
  /* 0x0140 */ char PreviousMode;
  /* 0x0141 */ unsigned char EnableStackSwap;
  /* 0x0142 */ unsigned char LargeStack;
  /* 0x0143 */ unsigned char ResourceIndex;
  /* 0x0144 */ unsigned long KernelTime;
  /* 0x0148 */ unsigned long UserTime;
  /* 0x014c */ struct _KAPC_STATE SavedApcState;
  /* 0x0164 */ unsigned char Alertable;
  /* 0x0165 */ unsigned char ApcStateIndex;
  /* 0x0166 */ unsigned char ApcQueueable;
  /* 0x0167 */ unsigned char AutoAlignment;
  /* 0x0168 */ void* StackBase;
  /* 0x016c */ struct _KAPC SuspendApc;
  /* 0x019c */ struct _KSEMAPHORE SuspendSemaphore;
  /* 0x01b0 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x01b8 */ char FreezeCount;
  /* 0x01b9 */ char SuspendCount;
  /* 0x01ba */ unsigned char IdealProcessor;
  /* 0x01bb */ unsigned char DisableBoost;
  /* 0x01bc */ long __PADDING__[1];
} KTHREAD, *PKTHREAD; /* size: 0x01c0 */

