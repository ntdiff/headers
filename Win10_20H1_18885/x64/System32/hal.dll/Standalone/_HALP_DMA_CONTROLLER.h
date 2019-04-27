typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DMA_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeController /* function */;
  /* 0x0008 */ void* ValidateRequestLineBinding /* function */;
  /* 0x0010 */ void* QueryMaxFragments /* function */;
  /* 0x0018 */ void* ProgramChannel /* function */;
  /* 0x0020 */ void* ConfigureChannel /* function */;
  /* 0x0028 */ void* FlushChannel /* function */;
  /* 0x0030 */ void* HandleInterrupt /* function */;
  /* 0x0038 */ void* ReadDmaCounter /* function */;
  /* 0x0040 */ void* ReportCommonBuffer /* function */;
  /* 0x0048 */ void* CancelTransfer /* function */;
} DMA_FUNCTION_TABLE, *PDMA_FUNCTION_TABLE; /* size: 0x0050 */

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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _HALP_DMA_CONTROLLER
{
  /* 0x0000 */ struct _LIST_ENTRY Controllers;
  /* 0x0010 */ struct _LIST_ENTRY AdapterList;
  /* 0x0020 */ unsigned long ControllerId;
  /* 0x0024 */ unsigned long MinimumRequestLine;
  /* 0x0028 */ unsigned long MaximumRequestLine;
  /* 0x002c */ unsigned long ChannelCount;
  /* 0x0030 */ unsigned long ScatterGatherLimit;
  /* 0x0038 */ struct _HALP_DMA_CHANNEL* Channels;
  /* 0x0040 */ void* ExtensionData;
  /* 0x0048 */ unsigned char CacheCoherent;
  /* 0x004c */ unsigned long DmaAddressWidth;
  /* 0x0050 */ struct _DMA_FUNCTION_TABLE Operations;
  /* 0x00a0 */ unsigned long SupportedPortWidths;
  /* 0x00a4 */ unsigned long MinimumTransferUnit;
  /* 0x00a8 */ unsigned __int64 Lock;
  /* 0x00b0 */ unsigned char Irql;
  /* 0x00b1 */ unsigned char GeneratesInterrupt;
  /* 0x00b4 */ long Gsi;
  /* 0x00b8 */ enum _KINTERRUPT_POLARITY InterruptPolarity;
  /* 0x00bc */ enum _KINTERRUPT_MODE InterruptMode;
  /* 0x00c0 */ struct _UNICODE_STRING ResourceId;
  /* 0x00d0 */ struct POHANDLE__* PowerHandle;
  /* 0x00d8 */ unsigned char PowerActive;
  /* 0x00d9 */ char __PADDING__[7];
} HALP_DMA_CONTROLLER, *PHALP_DMA_CONTROLLER; /* size: 0x00e0 */

