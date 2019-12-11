typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_OPEN_BLOCK
{
  /* 0x0210 */ struct _NDIS_CO_AF_BLOCK* NextAf;
  /* 0x0214 */ void* MiniportCoCreateVcHandler /* function */;
  /* 0x0218 */ void* MiniportCoRequestHandler /* function */;
  /* 0x021c */ void* CoCreateVcHandler /* function */;
  /* 0x0220 */ void* CoDeleteVcHandler /* function */;
  /* 0x0224 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0228 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x022c */ void* CoRequestCompleteHandler /* function */;
  /* 0x0230 */ void* CoRequestHandler /* function */;
  /* 0x0234 */ struct _LIST_ENTRY ActiveVcHead;
  /* 0x023c */ struct _LIST_ENTRY InactiveVcHead;
  /* 0x0244 */ long PendingAfNotifications;
  /* 0x0248 */ struct _KEVENT* AfNotifyCompleteEvent;
  /* 0x024c */ void* MiniportCoOidRequestHandler /* function */;
  /* 0x0250 */ void* CoOidRequestCompleteHandler /* function */;
  /* 0x0254 */ void* CoOidRequestHandler /* function */;
} NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK; /* size: 0x0258 */

