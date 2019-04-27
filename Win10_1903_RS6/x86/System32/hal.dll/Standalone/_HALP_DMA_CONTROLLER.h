typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DMA_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeController /* function */;
  /* 0x0004 */ void* ValidateRequestLineBinding /* function */;
  /* 0x0008 */ void* QueryMaxFragments /* function */;
  /* 0x000c */ void* ProgramChannel /* function */;
  /* 0x0010 */ void* ConfigureChannel /* function */;
  /* 0x0014 */ void* FlushChannel /* function */;
  /* 0x0018 */ void* HandleInterrupt /* function */;
  /* 0x001c */ void* ReadDmaCounter /* function */;
  /* 0x0020 */ void* ReportCommonBuffer /* function */;
  /* 0x0024 */ void* CancelTransfer /* function */;
} DMA_FUNCTION_TABLE, *PDMA_FUNCTION_TABLE; /* size: 0x0028 */

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
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _HALP_DMA_CONTROLLER
{
  /* 0x0000 */ struct _LIST_ENTRY Controllers;
  /* 0x0008 */ struct _LIST_ENTRY AdapterList;
  /* 0x0010 */ unsigned long ControllerId;
  /* 0x0014 */ unsigned long MinimumRequestLine;
  /* 0x0018 */ unsigned long MaximumRequestLine;
  /* 0x001c */ unsigned long ChannelCount;
  /* 0x0020 */ unsigned long ScatterGatherLimit;
  /* 0x0024 */ struct _HALP_DMA_CHANNEL* Channels;
  /* 0x0028 */ void* ExtensionData;
  /* 0x002c */ unsigned char CacheCoherent;
  /* 0x0030 */ unsigned long DmaAddressWidth;
  /* 0x0034 */ struct _DMA_FUNCTION_TABLE Operations;
  /* 0x005c */ unsigned long SupportedPortWidths;
  /* 0x0060 */ unsigned long MinimumTransferUnit;
  /* 0x0064 */ unsigned long Lock;
  /* 0x0068 */ unsigned char Irql;
  /* 0x0069 */ unsigned char GeneratesInterrupt;
  /* 0x006c */ long Gsi;
  /* 0x0070 */ enum _KINTERRUPT_POLARITY InterruptPolarity;
  /* 0x0074 */ enum _KINTERRUPT_MODE InterruptMode;
  /* 0x0078 */ struct _UNICODE_STRING ResourceId;
  /* 0x0080 */ struct POHANDLE__* PowerHandle;
  /* 0x0084 */ unsigned char PowerActive;
  /* 0x0085 */ char __PADDING__[3];
} HALP_DMA_CONTROLLER, *PHALP_DMA_CONTROLLER; /* size: 0x0088 */

