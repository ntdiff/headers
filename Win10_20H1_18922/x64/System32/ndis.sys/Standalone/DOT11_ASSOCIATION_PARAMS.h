typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_ASSOCIATION_PARAMS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char BSSID[6];
  /* 0x000c */ unsigned long uAssocRequestIEsOffset;
  /* 0x0010 */ unsigned long uAssocRequestIEsLength;
}; /* size: 0x0014 */

