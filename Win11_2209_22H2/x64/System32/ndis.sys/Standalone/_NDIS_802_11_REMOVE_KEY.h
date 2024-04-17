typedef struct _NDIS_802_11_REMOVE_KEY
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long KeyIndex;
  /* 0x0008 */ unsigned char BSSID[6];
  /* 0x000e */ char __PADDING__[2];
} NDIS_802_11_REMOVE_KEY, *PNDIS_802_11_REMOVE_KEY; /* size: 0x0010 */

