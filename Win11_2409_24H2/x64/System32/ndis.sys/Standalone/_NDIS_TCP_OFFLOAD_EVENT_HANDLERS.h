typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_TCP_OFFLOAD_EVENT_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* NdisTcpOffloadEventHandler /* function */;
  /* 0x0010 */ void* NdisTcpOffloadReceiveHandler /* function */;
  /* 0x0018 */ void* NdisTcpOffloadSendComplete /* function */;
  /* 0x0020 */ void* NdisTcpOffloadReceiveComplete /* function */;
  /* 0x0028 */ void* NdisTcpOffloadDisconnectComplete /* function */;
  /* 0x0030 */ void* NdisTcpOffloadForwardComplete /* function */;
} NDIS_TCP_OFFLOAD_EVENT_HANDLERS, *PNDIS_TCP_OFFLOAD_EVENT_HANDLERS; /* size: 0x0038 */

