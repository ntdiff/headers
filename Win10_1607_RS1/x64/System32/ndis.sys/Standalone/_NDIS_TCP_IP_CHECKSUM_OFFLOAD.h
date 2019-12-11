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

