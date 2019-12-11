typedef enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
  PeriodicReceivesOff = 0,
  PeriodicReceivesOn = 1,
  PeriodicReceivesBlocked = 2,
} NDIS_M_PERIODIC_RECEIVE_STATE, *PNDIS_M_PERIODIC_RECEIVE_STATE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _NDIS_M_PERIODIC_RECEIVES
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* NextMiniportBlock;
  /* 0x0004 */ enum _NDIS_M_PERIODIC_RECEIVE_STATE State;
  /* 0x0008 */ unsigned long SpinLock;
  /* 0x000c */ void* LockThread;
  /* 0x0010 */ long NumMQueuedNbls;
  /* 0x0014 */ long NumNblsDequeued;
  /* 0x0018 */ struct _NET_BUFFER_LIST* QueuedHead;
  /* 0x001c */ struct _NET_BUFFER_LIST* QueuedTail;
  /* 0x0020 */ unsigned long BoundToIP;
  /* 0x0024 */ unsigned char Paused;
  /* 0x0028 */ long NblsAllocated;
  /* 0x002c */ unsigned long TrackingQueued;
  /* 0x0030 */ unsigned long TrackingDequeued;
  /* 0x0034 */ unsigned long TrackingResources;
  /* 0x0038 */ unsigned long TrackingPending;
  /* 0x003c */ unsigned long TrackingIndicated;
  /* 0x0040 */ unsigned long TrackingEmptied;
  /* 0x0044 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0054 */ long WorkItemQueued;
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x0058 */

