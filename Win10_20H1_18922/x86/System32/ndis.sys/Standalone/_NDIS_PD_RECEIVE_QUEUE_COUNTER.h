typedef struct _NDIS_PD_RECEIVE_QUEUE_COUNTER
{
  /* 0x0000 */ unsigned __int64 PacketsReceived;
  /* 0x0008 */ unsigned __int64 BytesReceived;
  /* 0x0010 */ unsigned __int64 PacketsDropped;
} NDIS_PD_RECEIVE_QUEUE_COUNTER, *PNDIS_PD_RECEIVE_QUEUE_COUNTER; /* size: 0x0018 */

