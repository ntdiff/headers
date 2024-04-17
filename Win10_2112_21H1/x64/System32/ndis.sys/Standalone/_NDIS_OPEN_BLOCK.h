typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_OPEN_BLOCK
{
  /* 0x03f8 */ struct _NDIS_CO_AF_BLOCK* NextAf;
  /* 0x0400 */ void* MiniportCoCreateVcHandler /* function */;
  /* 0x0408 */ void* MiniportCoRequestHandler /* function */;
  /* 0x0410 */ void* CoCreateVcHandler /* function */;
  /* 0x0418 */ void* CoDeleteVcHandler /* function */;
  /* 0x0420 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0428 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x0430 */ void* CoRequestCompleteHandler /* function */;
  /* 0x0438 */ void* CoRequestHandler /* function */;
  /* 0x0440 */ struct _LIST_ENTRY ActiveVcHead;
  /* 0x0450 */ struct _LIST_ENTRY InactiveVcHead;
  /* 0x0460 */ long PendingAfNotifications;
  /* 0x0468 */ struct _KEVENT* AfNotifyCompleteEvent;
  /* 0x0470 */ void* MiniportCoOidRequestHandler /* function */;
  /* 0x0478 */ void* CoOidRequestCompleteHandler /* function */;
  /* 0x0480 */ void* CoOidRequestHandler /* function */;
} NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK; /* size: 0x0488 */

