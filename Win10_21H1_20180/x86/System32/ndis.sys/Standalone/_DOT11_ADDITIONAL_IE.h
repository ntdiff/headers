typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _DOT11_ADDITIONAL_IE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uBeaconIEsOffset;
  /* 0x0008 */ unsigned long uBeaconIEsLength;
  /* 0x000c */ unsigned long uResponseIEsOffset;
  /* 0x0010 */ unsigned long uResponseIEsLength;
} DOT11_ADDITIONAL_IE, *PDOT11_ADDITIONAL_IE; /* size: 0x0014 */

