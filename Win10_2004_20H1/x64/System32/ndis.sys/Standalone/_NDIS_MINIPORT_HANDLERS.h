typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0008 */ void* CancelSendContext;
  /* 0x0010 */ void* IndicateNetBufferListsContext;
  /* 0x0018 */ struct NDIS_NBL_TRACKER_HANDLE__* IndicateNetBufferListsTracker;
  /* 0x0020 */ struct _NDIS_OBJECT_HEADER* IndicateNetBufferListsObject;
  /* 0x0028 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0030 */ void* ReturnNetBufferListsContext;
  /* 0x0038 */ struct NDIS_NBL_TRACKER_HANDLE__* ReturnNetBufferListsTracker;
  /* 0x0040 */ struct _NDIS_OBJECT_HEADER* ReturnNetBufferListsObject;
  /* 0x0048 */ void* SendNetBufferListsContext;
  /* 0x0050 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsTracker;
  /* 0x0058 */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsObject;
  /* 0x0060 */ void* SendNetBufferListsCompleteContext;
  /* 0x0068 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsCompleteTracker;
  /* 0x0070 */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsCompleteObject;
  /* 0x0078 */ void* RequestHandle;
  union
  {
    /* 0x0080 */ void* CancelSendHandler /* function */;
    /* 0x0080 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0088 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0090 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x0098 */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x00a0 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x00a8 */ void* SendNetBufferListsHandler /* function */;
  /* 0x00b0 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x00b8 */

