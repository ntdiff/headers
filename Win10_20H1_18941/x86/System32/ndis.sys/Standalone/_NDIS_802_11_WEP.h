typedef struct _NDIS_802_11_WEP
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long KeyIndex;
  /* 0x0008 */ unsigned long KeyLength;
  /* 0x000c */ unsigned char KeyMaterial[1];
  /* 0x000d */ char __PADDING__[3];
} NDIS_802_11_WEP, *PNDIS_802_11_WEP; /* size: 0x0010 */

