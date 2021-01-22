typedef struct _NDIS_802_11_KEY
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long KeyIndex;
  /* 0x0008 */ unsigned long KeyLength;
  /* 0x000c */ unsigned char BSSID[6];
  /* 0x0018 */ unsigned __int64 KeyRSC;
  /* 0x0020 */ unsigned char KeyMaterial[1];
  /* 0x0021 */ char __PADDING__[7];
} NDIS_802_11_KEY, *PNDIS_802_11_KEY; /* size: 0x0028 */

