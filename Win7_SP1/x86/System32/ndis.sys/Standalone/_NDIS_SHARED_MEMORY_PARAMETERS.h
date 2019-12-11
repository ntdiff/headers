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
  /* 0x000c */ void* SharedMemoryHandle;
  /* 0x0010 */ unsigned long PreferredNode;
  /* 0x0014 */ enum _NDIS_SHARED_MEMORY_USAGE Usage;
  /* 0x0018 */ unsigned long Length;
  /* 0x001c */ void* VirtualAddress;
  /* 0x0020 */ unsigned long SGListBufferLength;
  /* 0x0024 */ struct _SCATTER_GATHER_LIST* SGListBuffer;
} NDIS_SHARED_MEMORY_PARAMETERS, *PNDIS_SHARED_MEMORY_PARAMETERS; /* size: 0x0028 */

