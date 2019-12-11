typedef struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Unused : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long Type : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long Reserved2 : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long MSS : 20; /* bit position: 0 */
        /* 0x0000 */ unsigned long TcpHeaderOffset : 10; /* bit position: 20 */
        /* 0x0000 */ unsigned long Type : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long Reserved2 : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ LsoV1Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long TcpPayload : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long Type : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long Reserved2 : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ LsoV1TransmitComplete;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long MSS : 20; /* bit position: 0 */
        /* 0x0000 */ unsigned long TcpHeaderOffset : 10; /* bit position: 20 */
        /* 0x0000 */ unsigned long Type : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long IPVersion : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ LsoV2Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long Type : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long Reserved2 : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ LsoV2TransmitComplete;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0004 */
} NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO, *PNDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO; /* size: 0x0004 */

