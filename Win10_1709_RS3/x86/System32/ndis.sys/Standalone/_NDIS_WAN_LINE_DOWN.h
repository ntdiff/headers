typedef struct _NDIS_WAN_LINE_DOWN
{
  /* 0x0000 */ unsigned char RemoteAddress[6];
  /* 0x0006 */ unsigned char LocalAddress[6];
} NDIS_WAN_LINE_DOWN, *PNDIS_WAN_LINE_DOWN; /* size: 0x000c */

