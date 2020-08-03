typedef struct _BSSID_INFO
{
  /* 0x0000 */ unsigned char BSSID[6];
  /* 0x0006 */ unsigned char PMKID[16];
} BSSID_INFO, *PBSSID_INFO; /* size: 0x0016 */

