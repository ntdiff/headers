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

typedef struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum NDIS_CHIMNEY_OFFLOAD_TYPE OffloadType;
  /* 0x0010 */ void* TcpOffloadSendHandler /* function */;
  /* 0x0018 */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x0020 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x0028 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x0030 */ void* TcpOffloadReceiveReturnHandler /* function */;
} NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS, *PNDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS; /* size: 0x0038 */

