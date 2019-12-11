typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE
{
  NdisReceiveQueueOperationalStateUndefined = 0,
  NdisReceiveQueueOperationalStateRunning = 1,
  NdisReceiveQueueOperationalStatePaused = 2,
  NdisReceiveQueueOperationalStateDmaStopped = 3,
  NdisReceiveQueueOperationalStateMaximum = 4,
} NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE, *PNDIS_RECEIVE_QUEUE_OPERATIONAL_STATE;

typedef struct _NDIS_RECEIVE_QUEUE_STATE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long QueueId;
  /* 0x000c */ enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE QueueState;
} NDIS_RECEIVE_QUEUE_STATE, *PNDIS_RECEIVE_QUEUE_STATE; /* size: 0x0010 */

