typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD
{
  struct
  {
    /* 0x0000 */ unsigned long Encapsulation;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long IpOptionsSupported : 2; /* bit position: 0 */
      /* 0x0004 */ unsigned long TcpOptionsSupported : 2; /* bit position: 2 */
      /* 0x0004 */ unsigned long TcpChecksum : 2; /* bit position: 4 */
      /* 0x0004 */ unsigned long UdpChecksum : 2; /* bit position: 6 */
      /* 0x0004 */ unsigned long IpChecksum : 2; /* bit position: 8 */
    }; /* bitfield */
  } /* size: 0x0008 */ IPv4Transmit;
  struct
  {
    /* 0x0008 */ unsigned long Encapsulation;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long IpOptionsSupported : 2; /* bit position: 0 */
      /* 0x000c */ unsigned long TcpOptionsSupported : 2; /* bit position: 2 */
      /* 0x000c */ unsigned long TcpChecksum : 2; /* bit position: 4 */
      /* 0x000c */ unsigned long UdpChecksum : 2; /* bit position: 6 */
      /* 0x000c */ unsigned long IpChecksum : 2; /* bit position: 8 */
    }; /* bitfield */
  } /* size: 0x0008 */ IPv4Receive;
  struct
  {
    /* 0x0010 */ unsigned long Encapsulation;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long IpExtensionHeadersSupported : 2; /* bit position: 0 */
      /* 0x0014 */ unsigned long TcpOptionsSupported : 2; /* bit position: 2 */
      /* 0x0014 */ unsigned long TcpChecksum : 2; /* bit position: 4 */
      /* 0x0014 */ unsigned long UdpChecksum : 2; /* bit position: 6 */
    }; /* bitfield */
  } /* size: 0x0008 */ IPv6Transmit;
  struct
  {
    /* 0x0018 */ unsigned long Encapsulation;
    struct /* bitfield */
    {
      /* 0x001c */ unsigned long IpExtensionHeadersSupported : 2; /* bit position: 0 */
      /* 0x001c */ unsigned long TcpOptionsSupported : 2; /* bit position: 2 */
      /* 0x001c */ unsigned long TcpChecksum : 2; /* bit position: 4 */
      /* 0x001c */ unsigned long UdpChecksum : 2; /* bit position: 6 */
    }; /* bitfield */
  } /* size: 0x0008 */ IPv6Receive;
} NDIS_TCP_IP_CHECKSUM_OFFLOAD, *PNDIS_TCP_IP_CHECKSUM_OFFLOAD; /* size: 0x0020 */

typedef struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1
{
  struct
  {
    /* 0x0000 */ unsigned long Encapsulation;
    /* 0x0004 */ unsigned long MaxOffLoadSize;
    /* 0x0008 */ unsigned long MinSegmentCount;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long TcpOptions : 2; /* bit position: 0 */
      /* 0x000c */ unsigned long IpOptions : 2; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0010 */ IPv4;
} NDIS_TCP_LARGE_SEND_OFFLOAD_V1, *PNDIS_TCP_LARGE_SEND_OFFLOAD_V1; /* size: 0x0010 */

typedef struct _NDIS_IPSEC_OFFLOAD_V1
{
  struct
  {
    /* 0x0000 */ unsigned long Encapsulation;
    /* 0x0004 */ unsigned long AhEspCombined;
    /* 0x0008 */ unsigned long TransportTunnelCombined;
    /* 0x000c */ unsigned long IPv4Options;
    /* 0x0010 */ unsigned long Flags;
  } /* size: 0x0014 */ Supported;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long Md5 : 2; /* bit position: 0 */
      /* 0x0014 */ unsigned long Sha_1 : 2; /* bit position: 2 */
      /* 0x0014 */ unsigned long Transport : 2; /* bit position: 4 */
      /* 0x0014 */ unsigned long Tunnel : 2; /* bit position: 6 */
      /* 0x0014 */ unsigned long Send : 2; /* bit position: 8 */
      /* 0x0014 */ unsigned long Receive : 2; /* bit position: 10 */
    }; /* bitfield */
  } /* size: 0x0004 */ IPv4AH;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0018 */ unsigned long Des : 2; /* bit position: 0 */
      /* 0x0018 */ unsigned long Reserved : 2; /* bit position: 2 */
      /* 0x0018 */ unsigned long TripleDes : 2; /* bit position: 4 */
      /* 0x0018 */ unsigned long NullEsp : 2; /* bit position: 6 */
      /* 0x0018 */ unsigned long Transport : 2; /* bit position: 8 */
      /* 0x0018 */ unsigned long Tunnel : 2; /* bit position: 10 */
      /* 0x0018 */ unsigned long Send : 2; /* bit position: 12 */
      /* 0x0018 */ unsigned long Receive : 2; /* bit position: 14 */
    }; /* bitfield */
  } /* size: 0x0004 */ IPv4ESP;
} NDIS_IPSEC_OFFLOAD_V1, *PNDIS_IPSEC_OFFLOAD_V1; /* size: 0x001c */

typedef struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2
{
  struct
  {
    /* 0x0000 */ unsigned long Encapsulation;
    /* 0x0004 */ unsigned long MaxOffLoadSize;
    /* 0x0008 */ unsigned long MinSegmentCount;
  } /* size: 0x000c */ IPv4;
  struct
  {
    /* 0x000c */ unsigned long Encapsulation;
    /* 0x0010 */ unsigned long MaxOffLoadSize;
    /* 0x0014 */ unsigned long MinSegmentCount;
    struct /* bitfield */
    {
      /* 0x0018 */ unsigned long IpExtensionHeadersSupported : 2; /* bit position: 0 */
      /* 0x0018 */ unsigned long TcpOptionsSupported : 2; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0010 */ IPv6;
} NDIS_TCP_LARGE_SEND_OFFLOAD_V2, *PNDIS_TCP_LARGE_SEND_OFFLOAD_V2; /* size: 0x001c */

typedef struct _NDIS_IPSEC_OFFLOAD_V2
{
  /* 0x0000 */ unsigned long Encapsulation;
  /* 0x0004 */ unsigned char IPv6Supported;
  /* 0x0005 */ unsigned char IPv4Options;
  /* 0x0006 */ unsigned char IPv6NonIPsecExtensionHeaders;
  /* 0x0007 */ unsigned char Ah;
  /* 0x0008 */ unsigned char Esp;
  /* 0x0009 */ unsigned char AhEspCombined;
  /* 0x000a */ unsigned char Transport;
  /* 0x000b */ unsigned char Tunnel;
  /* 0x000c */ unsigned char TransportTunnelCombined;
  /* 0x000d */ unsigned char LsoSupported;
  /* 0x000e */ unsigned char ExtendedSequenceNumbers;
  /* 0x0010 */ unsigned long UdpEsp;
  /* 0x0014 */ unsigned long AuthenticationAlgorithms;
  /* 0x0018 */ unsigned long EncryptionAlgorithms;
  /* 0x001c */ unsigned long SaOffloadCapacity;
} NDIS_IPSEC_OFFLOAD_V2, *PNDIS_IPSEC_OFFLOAD_V2; /* size: 0x0020 */

typedef struct _NDIS_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD Checksum;
  /* 0x0024 */ struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1 LsoV1;
  /* 0x0034 */ struct _NDIS_IPSEC_OFFLOAD_V1 IPsecV1;
  /* 0x0050 */ struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2 LsoV2;
  /* 0x006c */ unsigned long Flags;
  /* 0x0070 */ struct _NDIS_IPSEC_OFFLOAD_V2 IPsecV2;
} NDIS_OFFLOAD, *PNDIS_OFFLOAD; /* size: 0x0090 */

typedef struct _NDIS_FILTER_TASK_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OFFLOAD OffloadCaps;
} NDIS_FILTER_TASK_OFFLOAD, *PNDIS_FILTER_TASK_OFFLOAD; /* size: 0x0090 */

