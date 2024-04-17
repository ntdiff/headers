typedef struct _NDIS_UDP_RSC_OFFLOAD_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short SegCount;
      /* 0x0002 */ unsigned short SegSize;
    } /* size: 0x0004 */ Receive;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0008 */
} NDIS_UDP_RSC_OFFLOAD_NET_BUFFER_LIST_INFO, *PNDIS_UDP_RSC_OFFLOAD_NET_BUFFER_LIST_INFO; /* size: 0x0008 */

