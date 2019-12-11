typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_SHARED_MEMORY_USAGE
{
  NdisSharedMemoryUsageUndefined = 0,
  NdisSharedMemoryUsageXmit = 1,
  NdisSharedMemoryUsageXmitHeader = 2,
  NdisSharedMemoryUsageXmitData = 3,
  NdisSharedMemoryUsageReceive = 4,
  NdisSharedMemoryUsageReceiveLookahead = 5,
  NdisSharedMemoryUsageReceivePostLookahead = 6,
  NdisSharedMemoryUsageReceiveHeader = 7,
  NdisSharedMemoryUsageReceiveData = 8,
  NdisSharedMemoryUsageOther = 9,
  NdisSharedMemoryUsageMax = 10,
} NDIS_SHARED_MEMORY_USAGE, *PNDIS_SHARED_MEMORY_USAGE;

typedef struct _NDIS_SHARED_MEMORY_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long QueueId;
  /* 0x0010 */ void* SharedMemoryHandle;
  /* 0x0018 */ unsigned long PreferredNode;
  /* 0x001c */ enum _NDIS_SHARED_MEMORY_USAGE Usage;
  /* 0x0020 */ unsigned long Length;
  /* 0x0028 */ void* VirtualAddress;
  /* 0x0030 */ unsigned long SGListBufferLength;
  /* 0x0038 */ struct _SCATTER_GATHER_LIST* SGListBuffer;
} NDIS_SHARED_MEMORY_PARAMETERS, *PNDIS_SHARED_MEMORY_PARAMETERS; /* size: 0x0040 */

typedef struct _NDIS_SHARED_MEMORY_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY MiniportLink;
  /* 0x0010 */ struct _LIST_ENTRY OpenLink;
  /* 0x0020 */ struct _LIST_ENTRY QueueLink;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0038 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0040 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0048 */ struct _NDIS_RECEIVE_QUEUE_BLOCK* ReceiveQueue;
  /* 0x0050 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0058 */ void* SharedMemoryHandlerContext;
  /* 0x0060 */ void* ProviderAllocationContext;
  /* 0x0068 */ union _LARGE_INTEGER PhysicalAddress;
  /* 0x0070 */ struct _NDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters;
} NDIS_SHARED_MEMORY_BLOCK, *PNDIS_SHARED_MEMORY_BLOCK; /* size: 0x00b0 */

