typedef enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
  PeriodicReceivesOff = 0,
  PeriodicReceivesOn = 1,
  PeriodicReceivesBlocked = 2,
} NDIS_M_PERIODIC_RECEIVE_STATE, *PNDIS_M_PERIODIC_RECEIVE_STATE;

typedef struct _NDIS_M_PERIODIC_RECEIVES
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* NextMiniportBlock;
  /* 0x0008 */ enum _NDIS_M_PERIODIC_RECEIVE_STATE State;
  /* 0x0010 */ unsigned __int64 SpinLock;
  /* 0x0018 */ void* LockThread;
  /* 0x0020 */ unsigned long LockDbg;
  /* 0x0024 */ long NumMQueuedNbls;
  /* 0x0028 */ long NumNblsDequeued;
  /* 0x0030 */ struct _NET_BUFFER_LIST* QueuedHead;
  /* 0x0038 */ struct _NET_BUFFER_LIST* QueuedTail;
  /* 0x0040 */ struct _NET_BUFFER_LIST* IndicateHead;
  /* 0x0048 */ struct _NET_BUFFER_LIST* IndicateTail;
  /* 0x0050 */ unsigned long BoundToIP;
  /* 0x0054 */ unsigned char Paused;
  /* 0x0058 */ long NblsAllocated;
  /* 0x005c */ unsigned long TrackingQueued;
  /* 0x0060 */ unsigned long TrackingDequeued;
  /* 0x0064 */ unsigned long TrackingResources;
  /* 0x0068 */ unsigned long TrackingPending;
  /* 0x006c */ unsigned long TrackingIndicated;
  /* 0x0070 */ unsigned long TrackingEmptied;
  /* 0x0074 */ long __PADDING__[1];
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x0078 */

