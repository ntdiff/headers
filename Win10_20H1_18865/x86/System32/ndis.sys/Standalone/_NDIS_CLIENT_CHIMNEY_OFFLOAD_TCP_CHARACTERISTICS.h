typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

enum NDIS_CHIMNEY_OFFLOAD_TYPE
{
  NdisTcpChimneyOffload = 1,
  NdisIpsecChimneyOffload = 2,
  NdisRdmaChimneyOffload = 3,
  NdisMaxChimneyOffload = 4,
};

typedef struct _NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum NDIS_CHIMNEY_OFFLOAD_TYPE OffloadType;
  /* 0x000c */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0010 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0014 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0018 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x001c */ void* TcpOffloadEventHandler /* function */;
  /* 0x0020 */ void* TcpOffloadReceiveIndicateHandler /* function */;
} NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS, *PNDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS; /* size: 0x0024 */

