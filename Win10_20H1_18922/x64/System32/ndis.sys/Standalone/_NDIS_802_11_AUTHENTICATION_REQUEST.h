typedef struct _NDIS_802_11_AUTHENTICATION_REQUEST
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned char Bssid[6];
  /* 0x000c */ unsigned long Flags;
} NDIS_802_11_AUTHENTICATION_REQUEST, *PNDIS_802_11_AUTHENTICATION_REQUEST; /* size: 0x0010 */

