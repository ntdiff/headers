typedef struct _NDIS_UDP_SEGMENTATION_OFFLOAD_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long MSS : 20; /* bit position: 0 */
        /* 0x0000 */ unsigned long UdpHeaderOffset : 10; /* bit position: 20 */
        /* 0x0000 */ unsigned long Reserved : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long IPVersion : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ Transmit;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0008 */
} NDIS_UDP_SEGMENTATION_OFFLOAD_NET_BUFFER_LIST_INFO, *PNDIS_UDP_SEGMENTATION_OFFLOAD_NET_BUFFER_LIST_INFO; /* size: 0x0008 */

