typedef struct _NDIS_WAN_FRAGMENT
{
  /* 0x0000 */ unsigned char RemoteAddress[6];
  /* 0x0006 */ unsigned char LocalAddress[6];
} NDIS_WAN_FRAGMENT, *PNDIS_WAN_FRAGMENT; /* size: 0x000c */

