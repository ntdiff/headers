typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_OPEN_BLOCK
{
  /* 0x03c0 */ struct _NDIS_CO_AF_BLOCK* NextAf;
  /* 0x03c8 */ void* MiniportCoCreateVcHandler /* function */;
  /* 0x03d0 */ void* MiniportCoRequestHandler /* function */;
  /* 0x03d8 */ void* CoCreateVcHandler /* function */;
  /* 0x03e0 */ void* CoDeleteVcHandler /* function */;
  /* 0x03e8 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x03f0 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x03f8 */ void* CoRequestCompleteHandler /* function */;
  /* 0x0400 */ void* CoRequestHandler /* function */;
  /* 0x0408 */ struct _LIST_ENTRY ActiveVcHead;
  /* 0x0418 */ struct _LIST_ENTRY InactiveVcHead;
  /* 0x0428 */ long PendingAfNotifications;
  /* 0x0430 */ struct _KEVENT* AfNotifyCompleteEvent;
  /* 0x0438 */ void* MiniportCoOidRequestHandler /* function */;
  /* 0x0440 */ void* CoOidRequestCompleteHandler /* function */;
  /* 0x0448 */ void* CoOidRequestHandler /* function */;
} NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK; /* size: 0x0450 */

