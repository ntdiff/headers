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

typedef struct _NDIS_SCATTER_GATHER_LIST_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long QueueId;
  /* 0x000c */ enum _NDIS_SHARED_MEMORY_USAGE SharedMemoryUsage;
  /* 0x0010 */ struct _MDL* Mdl;
  /* 0x0014 */ void* CurrentVa;
  /* 0x0018 */ unsigned long Length;
  /* 0x001c */ void* ProcessSGListHandler /* function */;
  /* 0x0020 */ void* Context;
  /* 0x0024 */ struct _SCATTER_GATHER_LIST* ScatterGatherListBuffer;
  /* 0x0028 */ unsigned long ScatterGatherListBufferSize;
  /* 0x002c */ unsigned long ScatterGatherListBufferSizeNeeded;
} NDIS_SCATTER_GATHER_LIST_PARAMETERS, *PNDIS_SCATTER_GATHER_LIST_PARAMETERS; /* size: 0x0030 */

