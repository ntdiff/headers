typedef enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
  PeriodicReceivesOff = 0,
  PeriodicReceivesOn = 1,
  PeriodicReceivesBlocked = 2,
} NDIS_M_PERIODIC_RECEIVE_STATE, *PNDIS_M_PERIODIC_RECEIVE_STATE;

typedef struct _NDIS_M_PERIODIC_RECEIVES
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* NextMiniportBlock;
  /* 0x0004 */ enum _NDIS_M_PERIODIC_RECEIVE_STATE State;
  /* 0x0008 */ unsigned long SpinLock;
  /* 0x000c */ void* LockThread;
  /* 0x0010 */ unsigned long LockDbg;
  /* 0x0014 */ long NumMQueuedNbls;
  /* 0x0018 */ long NumNblsDequeued;
  /* 0x001c */ struct _NET_BUFFER_LIST* QueuedHead;
  /* 0x0020 */ struct _NET_BUFFER_LIST* QueuedTail;
  /* 0x0024 */ struct _NET_BUFFER_LIST* IndicateHead;
  /* 0x0028 */ struct _NET_BUFFER_LIST* IndicateTail;
  /* 0x002c */ unsigned long BoundToIP;
  /* 0x0030 */ unsigned char Paused;
  /* 0x0034 */ long NblsAllocated;
  /* 0x0038 */ unsigned long TrackingQueued;
  /* 0x003c */ unsigned long TrackingDequeued;
  /* 0x0040 */ unsigned long TrackingResources;
  /* 0x0044 */ unsigned long TrackingPending;
  /* 0x0048 */ unsigned long TrackingIndicated;
  /* 0x004c */ unsigned long TrackingEmptied;
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x0050 */

