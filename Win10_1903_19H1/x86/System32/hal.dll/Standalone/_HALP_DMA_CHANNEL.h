typedef enum _DMA_INTERRUPT_TYPE
{
  InterruptTypeCompletion = 0,
  InterruptTypeError = 1,
  InterruptTypeCancelled = 2,
} DMA_INTERRUPT_TYPE, *PDMA_INTERRUPT_TYPE;

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HALP_DMA_CHANNEL
{
  /* 0x0000 */ unsigned long ChannelNumber;
  /* 0x0004 */ unsigned char Initialized;
  /* 0x0005 */ unsigned char Busy;
  /* 0x0006 */ unsigned char Complete;
  /* 0x0008 */ void* CurrentCompletionRoutine /* function */;
  /* 0x000c */ void* CurrentCompletionContext;
  /* 0x0010 */ struct _ADAPTER_OBJECT* CurrentChildAdapter;
  /* 0x0014 */ enum _DMA_INTERRUPT_TYPE CurrentInterruptType;
  /* 0x0018 */ struct _KDPC Dpc;
  /* 0x0038 */ unsigned char GeneratesInterrupt;
  /* 0x003c */ long Gsi;
  /* 0x0040 */ enum _KINTERRUPT_POLARITY InterruptPolarity;
  /* 0x0044 */ enum _KINTERRUPT_MODE InterruptMode;
  /* 0x0048 */ unsigned long CommonBufferLength;
  /* 0x004c */ void* CommonBufferVirtualAddress;
  /* 0x0050 */ union _LARGE_INTEGER CommonBufferLogicalAddress;
  /* 0x0058 */ struct _LIST_ENTRY AdapterQueue;
} HALP_DMA_CHANNEL, *PHALP_DMA_CHANNEL; /* size: 0x0060 */

