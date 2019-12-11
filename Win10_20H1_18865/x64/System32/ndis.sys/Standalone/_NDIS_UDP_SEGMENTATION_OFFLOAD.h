typedef struct _NDIS_UDP_SEGMENTATION_OFFLOAD
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
    /* 0x0018 */ unsigned long IpExtensionHeadersSupported : 2; /* bit position: 0 */
  } /* size: 0x0010 */ IPv6;
} NDIS_UDP_SEGMENTATION_OFFLOAD, *PNDIS_UDP_SEGMENTATION_OFFLOAD; /* size: 0x001c */

