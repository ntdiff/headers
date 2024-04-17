typedef enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE
{
  NdisReceiveQueueOperationalStateUndefined = 0,
  NdisReceiveQueueOperationalStateRunning = 1,
  NdisReceiveQueueOperationalStatePaused = 2,
  NdisReceiveQueueOperationalStateDmaStopped = 3,
  NdisReceiveQueueOperationalStateMaximum = 4,
} NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE, *PNDIS_RECEIVE_QUEUE_OPERATIONAL_STATE;

