typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _NDIS_RECEIVE_QUEUE_PNP_STATE
{
  NdisReceiveQueuePnPStateUndefined = 0,
  NdisReceiveQueuePnPStateAddedToList = 1,
  NdisReceiveQueuePnPStateAllocated = 2,
  NdisReceiveQueuePnPStateEnabled = 3,
  NdisReceiveQueuePnPStateMaximum = 4,
} NDIS_RECEIVE_QUEUE_PNP_STATE, *PNDIS_RECEIVE_QUEUE_PNP_STATE;

typedef enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE
{
  NdisReceiveQueueOperationalStateUndefined = 0,
  NdisReceiveQueueOperationalStateRunning = 1,
  NdisReceiveQueueOperationalStatePaused = 2,
  NdisReceiveQueueOperationalStateDmaStopped = 3,
  NdisReceiveQueueOperationalStateMaximum = 4,
} NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE, *PNDIS_RECEIVE_QUEUE_OPERATIONAL_STATE;

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_RECEIVE_QUEUE_TYPE
{
  NdisReceiveQueueTypeUnspecified = 0,
  NdisReceiveQueueTypeVMQueue = 1,
  NdisReceiveQueueTypeMaximum = 2,
} NDIS_RECEIVE_QUEUE_TYPE, *PNDIS_RECEIVE_QUEUE_TYPE;

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef struct _NDIS_RECEIVE_QUEUE_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_RECEIVE_QUEUE_TYPE QueueType;
  /* 0x000c */ unsigned long QueueId;
  /* 0x0010 */ unsigned long QueueGroupId;
  /* 0x0018 */ struct _GROUP_AFFINITY ProcessorAffinity;
  /* 0x0028 */ unsigned long NumSuggestedReceiveBuffers;
  /* 0x002c */ unsigned long MSIXTableEntry;
  /* 0x0030 */ unsigned long LookaheadSize;
  /* 0x0034 */ struct _IF_COUNTED_STRING_LH VmName;
  /* 0x0238 */ struct _IF_COUNTED_STRING_LH QueueName;
  /* 0x043c */ long __PADDING__[1];
} NDIS_RECEIVE_QUEUE_PARAMETERS, *PNDIS_RECEIVE_QUEUE_PARAMETERS; /* size: 0x0440 */

typedef struct _NDIS_RECEIVE_QUEUE_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY AdapterLink;
  /* 0x0010 */ struct _LIST_ENTRY OpenLink;
  /* 0x0020 */ struct _LIST_ENTRY FilterList;
  /* 0x0030 */ unsigned long QueueId;
  /* 0x0034 */ enum _NDIS_RECEIVE_QUEUE_PNP_STATE QueuePnPState;
  /* 0x0038 */ enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE QueueState;
  /* 0x0040 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0048 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0050 */ long Reference;
  /* 0x0054 */ unsigned long NumFilters;
  /* 0x0058 */ struct _LIST_ENTRY SharedMemoryList;
  /* 0x0068 */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0070 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0078 */ unsigned char MacAddress[6];
  /* 0x0080 */ struct _NDIS_RECEIVE_QUEUE_PARAMETERS QueueParameters;
} NDIS_RECEIVE_QUEUE_BLOCK, *PNDIS_RECEIVE_QUEUE_BLOCK; /* size: 0x04c0 */

