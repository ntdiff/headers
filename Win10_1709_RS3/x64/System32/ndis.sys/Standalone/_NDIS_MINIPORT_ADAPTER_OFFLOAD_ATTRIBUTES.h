typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_OFFLOAD* DefaultOffloadConfiguration;
  /* 0x0010 */ struct _NDIS_OFFLOAD* HardwareOffloadCapabilities;
  /* 0x0018 */ struct _NDIS_TCP_CONNECTION_OFFLOAD* DefaultTcpConnectionOffloadConfiguration;
  /* 0x0020 */ struct _NDIS_TCP_CONNECTION_OFFLOAD* TcpConnectionOffloadHardwareCapabilities;
} NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES, *PNDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES; /* size: 0x0028 */

