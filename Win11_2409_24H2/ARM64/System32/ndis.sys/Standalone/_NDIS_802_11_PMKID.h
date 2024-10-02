typedef struct _BSSID_INFO
{
  /* 0x0000 */ unsigned char BSSID[6];
  /* 0x0006 */ unsigned char PMKID[16];
} BSSID_INFO, *PBSSID_INFO; /* size: 0x0016 */

typedef struct _NDIS_802_11_PMKID
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long BSSIDInfoCount;
  /* 0x0008 */ struct _BSSID_INFO BSSIDInfo[1];
  /* 0x001e */ char __PADDING__[2];
} NDIS_802_11_PMKID, *PNDIS_802_11_PMKID; /* size: 0x0020 */

