typedef struct _NDIS_802_11_SSID
{
  /* 0x0000 */ unsigned long SsidLength;
  /* 0x0004 */ unsigned char Ssid[32];
} NDIS_802_11_SSID, *PNDIS_802_11_SSID; /* size: 0x0024 */

