typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

typedef struct _NDIS_NSI_NETWORK_RW
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned int CompartmentId;
  /* 0x0008 */ unsigned long SiteId;
  /* 0x000c */ struct _IF_COUNTED_STRING_LH NetworkName;
} NDIS_NSI_NETWORK_RW, *PNDIS_NSI_NETWORK_RW; /* size: 0x0210 */

