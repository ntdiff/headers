typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0008 */ void* CancelSendContext;
  /* 0x0010 */ void* IndicateNetBufferListsContext;
  /* 0x0018 */ void* IndicateNetBufferListsObject;
  /* 0x0020 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0028 */ void* ReturnNetBufferListsContext;
  /* 0x0030 */ void* ReturnNetBufferListsObject;
  /* 0x0038 */ void* SendNetBufferListsContext;
  /* 0x0040 */ void* SendNetBufferListsObject;
  /* 0x0048 */ void* SendNetBufferListsCompleteContext;
  /* 0x0050 */ void* SendNetBufferListsCompleteObject;
  /* 0x0058 */ void* RequestHandle;
  /* 0x0060 */ void* StatusHandle;
  /* 0x0068 */ void* DevicePnPEventNotifyHandle;
  /* 0x0070 */ void* NetPnPEventHandle;
  union
  {
    /* 0x0078 */ void* CancelSendHandler /* function */;
    /* 0x0078 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0080 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0088 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x0090 */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x0098 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x00a0 */ void* SendNetBufferListsHandler /* function */;
  /* 0x00a8 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x00b0 */

