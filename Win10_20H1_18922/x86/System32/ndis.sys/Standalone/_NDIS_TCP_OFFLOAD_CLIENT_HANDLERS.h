typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_TCP_OFFLOAD_CLIENT_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0008 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x000c */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0010 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x0014 */ void* TcpOffloadEventHandler /* function */;
  /* 0x0018 */ void* TcpOffloadReceiveIndicateHandler /* function */;
} NDIS_TCP_OFFLOAD_CLIENT_HANDLERS, *PNDIS_TCP_OFFLOAD_CLIENT_HANDLERS; /* size: 0x001c */

