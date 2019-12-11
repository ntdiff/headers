typedef struct _NDIS_802_11_SSID
{
  /* 0x0000 */ unsigned long SsidLength;
  /* 0x0004 */ unsigned char Ssid[32];
} NDIS_802_11_SSID, *PNDIS_802_11_SSID; /* size: 0x0024 */

typedef struct _NDIS_802_11_NON_BCAST_SSID_LIST
{
  /* 0x0000 */ unsigned long NumberOfItems;
  /* 0x0004 */ struct _NDIS_802_11_SSID Non_Bcast_Ssid[1];
} NDIS_802_11_NON_BCAST_SSID_LIST, *PNDIS_802_11_NON_BCAST_SSID_LIST; /* size: 0x0028 */

