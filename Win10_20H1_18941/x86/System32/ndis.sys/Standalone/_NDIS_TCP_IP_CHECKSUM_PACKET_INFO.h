typedef struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NdisPacketChecksumV4 : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long NdisPacketChecksumV6 : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long NdisPacketTcpChecksum : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long NdisPacketUdpChecksum : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned long NdisPacketIpChecksum : 1; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0004 */ Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NdisPacketTcpChecksumFailed : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long NdisPacketUdpChecksumFailed : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long NdisPacketIpChecksumFailed : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long NdisPacketTcpChecksumSucceeded : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned long NdisPacketUdpChecksumSucceeded : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned long NdisPacketIpChecksumSucceeded : 1; /* bit position: 5 */
        /* 0x0000 */ unsigned long NdisPacketLoopback : 1; /* bit position: 6 */
      }; /* bitfield */
    } /* size: 0x0004 */ Receive;
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_TCP_IP_CHECKSUM_PACKET_INFO, *PNDIS_TCP_IP_CHECKSUM_PACKET_INFO; /* size: 0x0004 */

