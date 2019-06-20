typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0008 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0010 */

typedef struct _HALP_DMA_TRANSLATION_BUFFER_POSITION
{
  /* 0x0000 */ struct _HALP_DMA_TRANSLATION_BUFFER* Buffer;
  /* 0x0008 */ unsigned long Offset;
  /* 0x000c */ long __PADDING__[1];
} HALP_DMA_TRANSLATION_BUFFER_POSITION, *PHALP_DMA_TRANSLATION_BUFFER_POSITION; /* size: 0x0010 */

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

typedef struct _HALP_DMA_ADAPTER_OBJECT
{
  /* 0x0000 */ struct _DMA_ADAPTER DmaHeader;
  /* 0x0010 */ struct _RTL_BITMAP* ContiguousMapRegisters;
  /* 0x0018 */ struct _HALP_DMA_TRANSLATION_ENTRY* ScatterBufferListHead;
  /* 0x0020 */ unsigned long NumberOfFreeScatterBuffers;
  /* 0x0028 */ struct _HALP_DMA_TRANSLATION_BUFFER* ContiguousTranslations;
  /* 0x0030 */ struct _HALP_DMA_TRANSLATION_BUFFER* ScatterTranslations;
  /* 0x0038 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;
  /* 0x0048 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;
  struct
  {
    /* 0x0058 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;
    /* 0x0068 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;
  } /* size: 0x0020 */ CrashDump;
  /* 0x0078 */ unsigned __int64 SpinLock;
  /* 0x0080 */ unsigned __int64 GrowLock;
  /* 0x0088 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0090 */ unsigned char IsMasterAdapter;
  /* 0x0091 */ unsigned char DmaCanCross64K;
  /* 0x0094 */ unsigned long LibraryVersion;
} HALP_DMA_ADAPTER_OBJECT, *PHALP_DMA_ADAPTER_OBJECT; /* size: 0x0098 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x0018 */ unsigned __int64 Lock;
  union
  {
    /* 0x0020 */ unsigned char Busy;
    struct /* bitfield */
    {
      /* 0x0020 */ __int64 Reserved : 8; /* bit position: 0 */
      /* 0x0020 */ __int64 Hint : 56; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0028 */

typedef enum _DMA_WIDTH
{
  Width8Bits = 0,
  Width16Bits = 1,
  Width32Bits = 2,
  Width64Bits = 3,
  WidthNoWrap = 4,
  MaximumDmaWidth = 5,
} DMA_WIDTH, *PDMA_WIDTH;

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  ExtTranslationTypePassThrough = 0,
  ExtTranslationTypeBlocked = 1,
  ExtTranslationTypeTranslate = 2,
  ExtTranslationTypeSafePassThrough = 3,
  ExtTranslationTypeInvalid = 4,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

typedef enum _HALP_EMERGENCY_LA_QUEUE_TYPE
{
  HalpDmaLegacyLaQueueEntry = 0,
  HalpDmaThinLaQueueEntry = 1,
  HalpDmaLaQueueEntryMax = 2,
} HALP_EMERGENCY_LA_QUEUE_TYPE, *PHALP_EMERGENCY_LA_QUEUE_TYPE;

typedef struct _HALP_EMERGENCY_LA_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ enum _HALP_EMERGENCY_LA_QUEUE_TYPE EntryType;
  /* 0x0014 */ long __PADDING__[1];
} HALP_EMERGENCY_LA_QUEUE_ENTRY, *PHALP_EMERGENCY_LA_QUEUE_ENTRY; /* size: 0x0018 */

typedef enum _HALP_DMA_ADAPTER_ALLOCATION_STATE
{
  HalpDmaAdapterAllocationStateNone = 0,
  HalpDmaAdapterAllocateChannel = 1,
  HalpDmaAdapterAllocateMapRegisters = 2,
  HalpDmaAdapterAllocateChannelRemapResources = 3,
  HalpDmaAdapterAllocationStateComplete = 4,
  HalpDmaAdapterAllocationStateMax = 5,
} HALP_DMA_ADAPTER_ALLOCATION_STATE, *PHALP_DMA_ADAPTER_ALLOCATION_STATE;

typedef struct _SCATTER_GATHER_ELEMENT
{
  /* 0x0000 */ union _LARGE_INTEGER Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x0010 */ unsigned __int64 Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT; /* size: 0x0018 */

typedef struct _SCATTER_GATHER_LIST
{
  /* 0x0000 */ unsigned long NumberOfElements;
  /* 0x0008 */ unsigned __int64 Reserved;
  /* 0x0010 */ struct _SCATTER_GATHER_ELEMENT* Elements /* zero-length array */;
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST; /* size: 0x0010 */

typedef struct _ADAPTER_OBJECT
{
  /* 0x0000 */ struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
  /* 0x0098 */ struct _HALP_DMA_MASTER_ADAPTER_OBJECT* MasterAdapter;
  /* 0x00a0 */ struct _LIST_ENTRY WaitQueueEntry;
  union
  {
    /* 0x00b0 */ struct _KDEVICE_QUEUE ChannelWaitQueue;
    struct
    {
      /* 0x00b0 */ unsigned __int64 ResourceWaitLock;
      /* 0x00b8 */ struct _LIST_ENTRY ResourceWaitQueue;
      /* 0x00c8 */ struct _LIST_ENTRY ChannelResourceWaitQueue;
    }; /* size: 0x0028 */
  }; /* size: 0x0028 */
  /* 0x00d8 */ unsigned char ResourceQueueBusy;
  /* 0x00e0 */ unsigned long MapRegistersPerChannel;
  /* 0x00e8 */ void* MapRegisterBase;
  /* 0x00f0 */ unsigned long NumberOfMapRegisters;
  /* 0x00f4 */ unsigned long MaxTransferLength;
  /* 0x00f8 */ void* CrashDumpRegisterBase[2];
  /* 0x0108 */ unsigned long NumberOfCrashDumpRegisters[2];
  /* 0x0110 */ unsigned long CrashDumpRegisterRefCount[2];
  /* 0x0118 */ struct _LIST_ENTRY AdapterCrashDumpList;
  /* 0x0128 */ struct _MDL* MapRegisterMdl;
  /* 0x0130 */ unsigned __int64 MapRegisterMdlLock;
  /* 0x0138 */ void* AllocationHandle;
  /* 0x0140 */ void* VirtualAddress;
  /* 0x0148 */ unsigned char IsAllocationMdlBased;
  /* 0x0149 */ unsigned char NoLocalPool;
  /* 0x0150 */ struct _WAIT_CONTEXT_BLOCK* CurrentWcb;
  /* 0x0158 */ struct _DMA_TRANSFER_CONTEXT* CurrentTransferContext;
  /* 0x0160 */ struct _HALP_DMA_CONTROLLER* DmaController;
  /* 0x0168 */ unsigned long Controller;
  /* 0x016c */ unsigned long ChannelNumber;
  /* 0x0170 */ unsigned long RequestLine;
  /* 0x0174 */ unsigned long RequestedChannelCount;
  /* 0x0178 */ unsigned long AllocatedChannelCount;
  /* 0x017c */ unsigned long AllocatedChannels[8];
  /* 0x01a0 */ void* ChannelAdapter;
  /* 0x01a8 */ unsigned char NeedsMapRegisters;
  /* 0x01a9 */ unsigned char MasterDevice;
  /* 0x01aa */ unsigned char ScatterGather;
  /* 0x01ab */ unsigned char AutoInitialize;
  /* 0x01ac */ unsigned char IgnoreCount;
  /* 0x01ad */ unsigned char CacheCoherent;
  union
  {
    struct
    {
      /* 0x01b0 */ unsigned char Dma32BitAddresses;
      /* 0x01b1 */ unsigned char Dma64BitAddresses;
    }; /* size: 0x0002 */
    /* 0x01b0 */ unsigned long DmaAddressWidth;
  }; /* size: 0x0004 */
  /* 0x01b4 */ enum _DMA_WIDTH DmaPortWidth;
  /* 0x01b8 */ union _LARGE_INTEGER DeviceAddress;
  /* 0x01c0 */ struct _LIST_ENTRY AdapterList;
  /* 0x01d0 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x01f0 */ struct _HALP_DMA_DOMAIN_OBJECT* DomainPointer;
  /* 0x01f8 */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  /* 0x01fc */ unsigned char AdapterInUse;
  /* 0x0200 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0208 */ struct _EXT_IOMMU_DEVICE_ID* DeviceId;
  /* 0x0210 */ void* IommuDevice;
  /* 0x0218 */ struct _MDL* ScatterGatherMdl;
  /* 0x0220 */ unsigned __int64 LowMemoryLogicalAddressBase;
  /* 0x0228 */ unsigned __int64 LowMemoryLogicalAddressQueueLock;
  /* 0x0230 */ struct _LIST_ENTRY LowMemoryLogicalAddressQueue;
  /* 0x0240 */ unsigned char LowMemoryLogicalAddressQueueInUse;
  /* 0x0248 */ struct _HALP_EMERGENCY_LA_QUEUE_ENTRY LowMemoryLogicalAddressQueueEntry;
  /* 0x0260 */ enum _HALP_DMA_ADAPTER_ALLOCATION_STATE AllocationState;
  /* 0x0264 */ unsigned long ScatterGatherBufferLength;
  /* 0x0268 */ struct _SCATTER_GATHER_LIST ScatterGatherBuffer;
} ADAPTER_OBJECT, *PADAPTER_OBJECT; /* size: 0x0278 */

