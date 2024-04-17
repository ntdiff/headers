typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_PRIVACY_EXEMPTION
{
  /* 0x0000 */ unsigned short usEtherType;
  /* 0x0002 */ unsigned short usExemptionActionType;
  /* 0x0004 */ unsigned short usExemptionPacketType;
}; /* size: 0x0006 */

struct DOT11_PRIVACY_EXEMPTION_LIST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumOfEntries;
  /* 0x0008 */ unsigned long uTotalNumOfEntries;
  /* 0x000c */ struct DOT11_PRIVACY_EXEMPTION PrivacyExemptionEntries[1];
  /* 0x0012 */ char __PADDING__[2];
}; /* size: 0x0014 */

