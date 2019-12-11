typedef struct _PMKID_CANDIDATE
{
  /* 0x0000 */ unsigned char BSSID[6];
  /* 0x0008 */ unsigned long Flags;
} PMKID_CANDIDATE, *PPMKID_CANDIDATE; /* size: 0x000c */

