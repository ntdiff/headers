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

typedef struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD
{
  struct
  {
    /* 0x0000 */ unsigned char Enabled;
  } /* size: 0x0001 */ IPv4;
  struct
  {
    /* 0x0001 */ unsigned char Enabled;
  } /* size: 0x0001 */ IPv6;
} NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD, *PNDIS_TCP_RECV_SEG_COALESCE_OFFLOAD; /* size: 0x0002 */

typedef struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TransmitChecksumOffloadSupported : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReceiveChecksumOffloadSupported : 4; /* bit position: 4 */
    /* 0x0000 */ unsigned long LsoV2Supported : 4; /* bit position: 8 */
    /* 0x0000 */ unsigned long RssSupported : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned long VmqSupported : 4; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long MaxHeaderSizeSupported;
} NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD, *PNDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD; /* size: 0x0008 */

typedef struct _NDIS_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD Checksum;
  /* 0x0024 */ struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1 LsoV1;
  /* 0x0034 */ struct _NDIS_IPSEC_OFFLOAD_V1 IPsecV1;
  /* 0x0050 */ struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2 LsoV2;
  /* 0x006c */ unsigned long Flags;
  /* 0x0070 */ struct _NDIS_IPSEC_OFFLOAD_V2 IPsecV2;
  /* 0x0090 */ struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD Rsc;
  /* 0x0094 */ struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD EncapsulatedPacketTaskOffloadGre;
} NDIS_OFFLOAD, *PNDIS_OFFLOAD; /* size: 0x009c */

typedef struct _NDIS_OFFLOAD_ENCAPSULATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  struct
  {
    /* 0x0004 */ unsigned long Enabled;
    /* 0x0008 */ unsigned long EncapsulationType;
    /* 0x000c */ unsigned long HeaderSize;
  } /* size: 0x000c */ IPv4;
  struct
  {
    /* 0x0010 */ unsigned long Enabled;
    /* 0x0014 */ unsigned long EncapsulationType;
    /* 0x0018 */ unsigned long HeaderSize;
  } /* size: 0x000c */ IPv6;
} NDIS_OFFLOAD_ENCAPSULATION, *PNDIS_OFFLOAD_ENCAPSULATION; /* size: 0x001c */

typedef struct _NDIS_TCP_CONNECTION_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Encapsulation;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long SupportIPv4 : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long SupportIPv6 : 2; /* bit position: 2 */
    /* 0x0008 */ unsigned long SupportIPv6ExtensionHeaders : 2; /* bit position: 4 */
    /* 0x0008 */ unsigned long SupportSack : 2; /* bit position: 6 */
    /* 0x0008 */ unsigned long CongestionAlgorithm : 4; /* bit position: 8 */
  }; /* bitfield */
  /* 0x000c */ unsigned long TcpConnectionOffloadCapacity;
  /* 0x0010 */ unsigned long Flags;
} NDIS_TCP_CONNECTION_OFFLOAD, *PNDIS_TCP_CONNECTION_OFFLOAD; /* size: 0x0014 */

typedef struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_OFFLOAD_ENCAPSULATION Encapsulation;
  /* 0x0020 */ unsigned long TicksPerSecond;
  /* 0x0024 */ unsigned char TcpAckFrequency;
  /* 0x0025 */ unsigned char TcpDelayedAckTicks;
  /* 0x0026 */ unsigned char TcpMaximumRetransmissions;
  /* 0x0027 */ unsigned char TcpDoubtReachabilityRetransmissions;
  /* 0x0028 */ unsigned long TcpSwsPreventionTicks;
  /* 0x002c */ unsigned long TcpDuplicateAckThreshold;
  /* 0x0030 */ unsigned long TcpPushTicks;
  /* 0x0034 */ unsigned long NceStaleTicks;
  /* 0x0038 */ unsigned long CongestionAlgorithm;
} NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS, *PNDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS; /* size: 0x003c */

typedef struct _NDIS_MINIPORT_OFFLOAD
{
  /* 0x0000 */ unsigned char SupportsOffload;
  /* 0x0001 */ unsigned char SupportsTopOffload;
  /* 0x0002 */ unsigned char SupportsTcpConnectionOffload;
  /* 0x0003 */ unsigned char SupportsTopTcpConnectionOffload;
  /* 0x0004 */ unsigned char TopConnectionOffloadPaused;
  /* 0x0005 */ unsigned char RSCDisallowed;
  /* 0x0008 */ struct _NDIS_OFFLOAD MiniportCurrentConfig;
  /* 0x00a4 */ struct _NDIS_OFFLOAD TopCapabilities;
  /* 0x0140 */ struct _NDIS_OFFLOAD MiniportInitialConfig;
  /* 0x01dc */ struct _NDIS_OFFLOAD MiniportHardwareCapabilities;
  /* 0x0278 */ struct _NDIS_OFFLOAD_ENCAPSULATION MiniportSetEncapsulation;
  /* 0x0294 */ struct _NDIS_OFFLOAD_ENCAPSULATION TopSetEncapsulation;
  /* 0x02b0 */ struct _NDIS_OFFLOAD_ENCAPSULATION TopMergedEncapsulation;
  /* 0x02cc */ struct _NDIS_OFFLOAD_ENCAPSULATION MiniportMergedEncapsulation;
  /* 0x02e8 */ struct _NDIS_TCP_CONNECTION_OFFLOAD TopTcpConnectionOffloadCapabilities;
  /* 0x02fc */ struct _NDIS_TCP_CONNECTION_OFFLOAD MiniportTcpConnectionOffloadCurrentConfig;
  /* 0x0310 */ struct _NDIS_TCP_CONNECTION_OFFLOAD MiniportHwTcpConnectionOffloadCapabilities;
  /* 0x0324 */ struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS TopTcpConnectionParameters;
  /* 0x0360 */ struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS MiniportTcpConnectionParameters;
  /* 0x039c */ unsigned char MiniportTask[144];
  /* 0x042c */ unsigned long MiniportTaskSize;
  /* 0x0430 */ unsigned char Ndis5Xsum;
  /* 0x0431 */ unsigned char Ndis5LSO;
  /* 0x0432 */ unsigned char Ndis5IPsec;
  /* 0x0438 */ void* MiniportRequestBuffer;
  /* 0x0440 */ unsigned long MiniportRequestOid;
  /* 0x0444 */ unsigned long MiniportRequestBufferLength;
} NDIS_MINIPORT_OFFLOAD, *PNDIS_MINIPORT_OFFLOAD; /* size: 0x0448 */

