typedef struct _PENDING_STACK_EXPANSION_FALLBACK_WORK
{
  /* 0x0000 */ unsigned char IssueOidRequest;
  /* 0x0001 */ unsigned char CompleteOidRequest;
  /* 0x0008 */ struct _NDIS_OID_REQUEST* DirectOidRequestsToComplete;
  /* 0x0010 */ struct _NDIS_STATUS_INDICATION* StatusIndications;
  /* 0x0018 */ struct _NET_PNP_EVENT_NOTIFICATION* NetPnPEvents;
  /* 0x0020 */ struct _NET_DEVICE_PNP_EVENT* DevicePnPEvents;
  /* 0x0028 */ struct _NET_BUFFER_LIST* SentNblsToComplete;
  /* 0x0030 */ struct _NET_BUFFER_LIST* ReceivedNblsToComplete;
} PENDING_STACK_EXPANSION_FALLBACK_WORK, *PPENDING_STACK_EXPANSION_FALLBACK_WORK; /* size: 0x0038 */

