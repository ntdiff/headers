typedef struct _NDIS_TASK_TCP_IP_CHECKSUM
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long IpOptionsSupported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long TcpOptionsSupported : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long TcpChecksum : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UdpChecksum : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long IpChecksum : 1; /* bit position: 4 */
    }; /* bitfield */
  } /* size: 0x0004 */ V4Transmit;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long IpOptionsSupported : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long TcpOptionsSupported : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long TcpChecksum : 1; /* bit position: 2 */
      /* 0x0004 */ unsigned long UdpChecksum : 1; /* bit position: 3 */
      /* 0x0004 */ unsigned long IpChecksum : 1; /* bit position: 4 */
    }; /* bitfield */
  } /* size: 0x0004 */ V4Receive;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long IpOptionsSupported : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long TcpOptionsSupported : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long TcpChecksum : 1; /* bit position: 2 */
      /* 0x0008 */ unsigned long UdpChecksum : 1; /* bit position: 3 */
    }; /* bitfield */
  } /* size: 0x0004 */ V6Transmit;
  struct
  {
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long IpOptionsSupported : 1; /* bit position: 0 */
      /* 0x000c */ unsigned long TcpOptionsSupported : 1; /* bit position: 1 */
      /* 0x000c */ unsigned long TcpChecksum : 1; /* bit position: 2 */
      /* 0x000c */ unsigned long UdpChecksum : 1; /* bit position: 3 */
    }; /* bitfield */
  } /* size: 0x0004 */ V6Receive;
} NDIS_TASK_TCP_IP_CHECKSUM, *PNDIS_TASK_TCP_IP_CHECKSUM; /* size: 0x0010 */

