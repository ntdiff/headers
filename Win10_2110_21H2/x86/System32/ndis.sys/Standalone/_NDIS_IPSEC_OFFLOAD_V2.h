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

