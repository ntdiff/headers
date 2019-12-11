typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0004 */ void* CancelSendContext;
  /* 0x0008 */ void* IndicateNetBufferListsContext;
  /* 0x000c */ struct NDIS_NBL_TRACKER_HANDLE__* IndicateNetBufferListsTracker;
  /* 0x0010 */ struct _NDIS_OBJECT_HEADER* IndicateNetBufferListsObject;
  /* 0x0014 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0018 */ void* ReturnNetBufferListsContext;
  /* 0x001c */ struct NDIS_NBL_TRACKER_HANDLE__* ReturnNetBufferListsTracker;
  /* 0x0020 */ struct _NDIS_OBJECT_HEADER* ReturnNetBufferListsObject;
  /* 0x0024 */ void* SendNetBufferListsContext;
  /* 0x0028 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsTracker;
  /* 0x002c */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsObject;
  /* 0x0030 */ void* SendNetBufferListsCompleteContext;
  /* 0x0034 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsCompleteTracker;
  /* 0x0038 */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsCompleteObject;
  /* 0x003c */ void* RequestHandle;
  union
  {
    /* 0x0040 */ void* CancelSendHandler /* function */;
    /* 0x0040 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0044 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0048 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x004c */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x0050 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0054 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0058 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x005c */

