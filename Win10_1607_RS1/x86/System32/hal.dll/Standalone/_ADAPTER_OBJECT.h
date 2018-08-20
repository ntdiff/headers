typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0008 */

typedef struct _HALP_DMA_TRANSLATION_BUFFER_POSITION
{
  /* 0x0000 */ struct _HALP_DMA_TRANSLATION_BUFFER* Buffer;
  /* 0x0004 */ unsigned long Offset;
} HALP_DMA_TRANSLATION_BUFFER_POSITION, *PHALP_DMA_TRANSLATION_BUFFER_POSITION; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
  /* 0x0008 */ struct _RTL_BITMAP* ContiguousMapRegisters;
  /* 0x000c */ struct _HALP_DMA_TRANSLATION_ENTRY* ScatterBufferListHead;
  /* 0x0010 */ unsigned long NumberOfFreeScatterBuffers;
  /* 0x0014 */ struct _HALP_DMA_TRANSLATION_BUFFER* ContiguousTranslations;
  /* 0x0018 */ struct _HALP_DMA_TRANSLATION_BUFFER* ScatterTranslations;
  /* 0x001c */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;
  /* 0x0024 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;
  struct // _TAG_UNNAMED_34
  {
    /* 0x002c */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;
    /* 0x0034 */ struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;
  } /* size: 0x0010 */ CrashDump;
  /* 0x003c */ unsigned long SpinLock;
  /* 0x0040 */ unsigned long GrowLock;
  /* 0x0048 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0050 */ unsigned char IsMasterAdapter;
  /* 0x0051 */ unsigned char DmaCanCross64K;
  /* 0x0054 */ unsigned long LibraryVersion;
} HALP_DMA_ADAPTER_OBJECT, *PHALP_DMA_ADAPTER_OBJECT; /* size: 0x0058 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x000c */ unsigned long Lock;
  /* 0x0010 */ unsigned char Busy;
  /* 0x0011 */ char __PADDING__[3];
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0014 */

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
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _SCATTER_GATHER_ELEMENT
{
  /* 0x0000 */ union _LARGE_INTEGER Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned long Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT; /* size: 0x0010 */

typedef struct _SCATTER_GATHER_LIST
{
  /* 0x0000 */ unsigned long NumberOfElements;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _SCATTER_GATHER_ELEMENT* Elements /* zero-length array */;
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST; /* size: 0x0008 */

typedef struct _ADAPTER_OBJECT
{
  /* 0x0000 */ struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
  /* 0x0058 */ struct _HALP_DMA_MASTER_ADAPTER_OBJECT* MasterAdapter;
  /* 0x005c */ struct _LIST_ENTRY WaitQueueEntry;
  union
  {
    /* 0x0064 */ struct _KDEVICE_QUEUE ChannelWaitQueue;
    struct
    {
      /* 0x0064 */ unsigned long ResourceWaitLock;
      /* 0x0068 */ struct _LIST_ENTRY ResourceWaitQueue;
      /* 0x0070 */ struct _LIST_ENTRY ChannelResourceWaitQueue;
    }; /* size: 0x0014 */
  }; /* size: 0x0014 */
  /* 0x0078 */ unsigned char ResourceQueueBusy;
  /* 0x007c */ unsigned long MapRegistersPerChannel;
  /* 0x0080 */ void* MapRegisterBase;
  /* 0x0084 */ unsigned long NumberOfMapRegisters;
  /* 0x0088 */ void* CrashDumpRegisterBase[2];
  /* 0x0090 */ unsigned long NumberOfCrashDumpRegisters[2];
  /* 0x0098 */ unsigned long CrashDumpRegisterRefCount[2];
  /* 0x00a0 */ struct _LIST_ENTRY AdapterCrashDumpList;
  /* 0x00a8 */ struct _MDL* MapRegisterMdl;
  /* 0x00ac */ unsigned long MapRegisterMdlLock;
  /* 0x00b0 */ void* AllocationHandle;
  /* 0x00b4 */ void* VirtualAddress;
  /* 0x00b8 */ unsigned char IsAllocationMdlBased;
  /* 0x00b9 */ unsigned char NoLocalPool;
  /* 0x00bc */ struct _WAIT_CONTEXT_BLOCK* CurrentWcb;
  /* 0x00c0 */ struct _DMA_TRANSFER_CONTEXT* CurrentTransferContext;
  /* 0x00c4 */ struct _HALP_DMA_CONTROLLER* DmaController;
  /* 0x00c8 */ unsigned long Controller;
  /* 0x00cc */ unsigned long ChannelNumber;
  /* 0x00d0 */ unsigned long RequestLine;
  /* 0x00d4 */ unsigned long RequestedChannelCount;
  /* 0x00d8 */ unsigned long AllocatedChannelCount;
  /* 0x00dc */ unsigned long AllocatedChannels[8];
  /* 0x00fc */ void* ChannelAdapter;
  /* 0x0100 */ unsigned char NeedsMapRegisters;
  /* 0x0101 */ unsigned char MasterDevice;
  /* 0x0102 */ unsigned char ScatterGather;
  /* 0x0103 */ unsigned char AutoInitialize;
  /* 0x0104 */ unsigned char IgnoreCount;
  /* 0x0105 */ unsigned char CacheCoherent;
  union
  {
    struct
    {
      /* 0x0108 */ unsigned char Dma32BitAddresses;
      /* 0x0109 */ unsigned char Dma64BitAddresses;
    }; /* size: 0x0002 */
    /* 0x0108 */ unsigned long DmaAddressWidth;
  }; /* size: 0x0004 */
  /* 0x010c */ enum _DMA_WIDTH DmaPortWidth;
  /* 0x0110 */ union _LARGE_INTEGER DeviceAddress;
  /* 0x0118 */ struct _LIST_ENTRY AdapterList;
  /* 0x0120 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0130 */ void* DomainHandle;
  /* 0x0134 */ unsigned char AdapterInUse;
  /* 0x0138 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x013c */ struct _MDL* ScatterGatherMdl;
  /* 0x0140 */ unsigned long ScatterGatherBufferLength;
  /* 0x0148 */ struct _SCATTER_GATHER_LIST ScatterGatherBuffer;
} ADAPTER_OBJECT, *PADAPTER_OBJECT; /* size: 0x0150 */

