typedef struct _NDIS_UDP_SEGMENTATION_OFFLOAD
{
  struct
  {
    /* 0x0000 */ unsigned long Encapsulation;
    /* 0x0004 */ unsigned long MaxOffLoadSize;
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long MinSegmentCount : 6; /* bit position: 0 */
      /* 0x0008 */ unsigned long SubMssFinalSegmentSupported : 1; /* bit position: 6 */
      /* 0x0008 */ unsigned long Reserved : 25; /* bit position: 7 */
    }; /* bitfield */
  } /* size: 0x000c */ IPv4;
  struct
  {
    /* 0x000c */ unsigned long Encapsulation;
    /* 0x0010 */ unsigned long MaxOffLoadSize;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long MinSegmentCount : 6; /* bit position: 0 */
      /* 0x0014 */ unsigned long SubMssFinalSegmentSupported : 1; /* bit position: 6 */
      /* 0x0014 */ unsigned long Reserved1 : 25; /* bit position: 7 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0018 */ unsigned long IpExtensionHeadersSupported : 2; /* bit position: 0 */
      /* 0x0018 */ unsigned long Reserved2 : 30; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0010 */ IPv6;
} NDIS_UDP_SEGMENTATION_OFFLOAD, *PNDIS_UDP_SEGMENTATION_OFFLOAD; /* size: 0x001c */

