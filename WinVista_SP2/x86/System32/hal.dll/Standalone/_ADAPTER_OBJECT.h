typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0008 */

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

typedef struct _ADAPTER_OBJECT
{
  /* 0x0000 */ struct _DMA_ADAPTER DmaHeader;
  /* 0x0008 */ struct _ADAPTER_OBJECT* MasterAdapter;
  /* 0x000c */ unsigned long MapRegistersPerChannel;
  /* 0x0010 */ void* AdapterBaseVa;
  /* 0x0014 */ void* MapRegisterBase;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ unsigned long CommittedMapRegisters;
  /* 0x0020 */ struct _WAIT_CONTEXT_BLOCK* CurrentWcb;
  /* 0x0024 */ struct _KDEVICE_QUEUE ChannelWaitQueue;
  /* 0x0038 */ struct _KDEVICE_QUEUE* RegisterWaitQueue;
  /* 0x003c */ struct _LIST_ENTRY AdapterQueue;
  /* 0x0044 */ unsigned long SpinLock;
  /* 0x0048 */ struct _RTL_BITMAP* MapRegisters;
  /* 0x004c */ unsigned char* PagePort;
  /* 0x0050 */ unsigned char ChannelNumber;
  /* 0x0051 */ unsigned char AdapterNumber;
  /* 0x0052 */ unsigned short DmaPortAddress;
  /* 0x0054 */ unsigned char AdapterMode;
  /* 0x0055 */ unsigned char NeedsMapRegisters;
  /* 0x0056 */ unsigned char MasterDevice;
  /* 0x0057 */ unsigned char Width16Bits;
  /* 0x0058 */ unsigned char ScatterGather;
  /* 0x0059 */ unsigned char IgnoreCount;
  /* 0x005a */ unsigned char Dma32BitAddresses;
  /* 0x005b */ unsigned char Dma64BitAddresses;
  /* 0x005c */ unsigned char LegacyAdapter;
  /* 0x0060 */ struct _LIST_ENTRY AdapterList;
} ADAPTER_OBJECT, *PADAPTER_OBJECT; /* size: 0x0068 */

