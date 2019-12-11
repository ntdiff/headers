typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

struct DOT11_IBSS_PARAMS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char bJoinOnly;
  /* 0x0008 */ unsigned long uIEsOffset;
  /* 0x000c */ unsigned long uIEsLength;
}; /* size: 0x0010 */

