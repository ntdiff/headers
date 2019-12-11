typedef struct _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long IsIPv4 : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long IsIPv6 : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long TcpChecksum : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long UdpChecksum : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned long IpHeaderChecksum : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned long Reserved : 11; /* bit position: 5 */
        /* 0x0000 */ unsigned long TcpHeaderOffset : 10; /* bit position: 16 */
      }; /* bitfield */
    } /* size: 0x0004 */ Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long TcpChecksumFailed : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long UdpChecksumFailed : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long IpChecksumFailed : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long TcpChecksumSucceeded : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned long UdpChecksumSucceeded : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned long IpChecksumSucceeded : 1; /* bit position: 5 */
        /* 0x0000 */ unsigned long Loopback : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned long TcpChecksumValueInvalid : 1; /* bit position: 7 */
        /* 0x0000 */ unsigned long IpChecksumValueInvalid : 1; /* bit position: 8 */
      }; /* bitfield */
    } /* size: 0x0004 */ Receive;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0008 */
} NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO, *PNDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO; /* size: 0x0008 */

