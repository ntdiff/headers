typedef struct _NDIS_PD_RECEIVE_QUEUE_COUNTER
{
  /* 0x0000 */ unsigned __int64 PacketsReceived;
  /* 0x0008 */ unsigned __int64 BytesReceived;
  /* 0x0010 */ unsigned __int64 PacketsDropped;
} NDIS_PD_RECEIVE_QUEUE_COUNTER, *PNDIS_PD_RECEIVE_QUEUE_COUNTER; /* size: 0x0018 */

typedef struct _NDIS_PD_TRANSMIT_QUEUE_COUNTER
{
  /* 0x0000 */ unsigned __int64 PacketsTransmitted;
  /* 0x0008 */ unsigned __int64 BytesTransmitted;
} NDIS_PD_TRANSMIT_QUEUE_COUNTER, *PNDIS_PD_TRANSMIT_QUEUE_COUNTER; /* size: 0x0010 */

typedef struct _NDIS_PD_FILTER_COUNTER
{
  /* 0x0000 */ unsigned __int64 PacketsMatched;
  /* 0x0008 */ unsigned __int64 BytesMatched;
} NDIS_PD_FILTER_COUNTER, *PNDIS_PD_FILTER_COUNTER; /* size: 0x0010 */

typedef union _NDIS_PD_COUNTER_VALUE
{
  union
  {
    /* 0x0000 */ struct _NDIS_PD_RECEIVE_QUEUE_COUNTER ReceiveQueue;
    /* 0x0000 */ struct _NDIS_PD_TRANSMIT_QUEUE_COUNTER TransmitQueue;
    /* 0x0000 */ struct _NDIS_PD_FILTER_COUNTER Filter;
  }; /* size: 0x0018 */
} NDIS_PD_COUNTER_VALUE, *PNDIS_PD_COUNTER_VALUE; /* size: 0x0018 */

