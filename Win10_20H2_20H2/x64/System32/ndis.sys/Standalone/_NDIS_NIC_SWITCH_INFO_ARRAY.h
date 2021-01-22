typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_NIC_SWITCH_INFO_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long FirstElementOffset;
  /* 0x0008 */ unsigned long NumElements;
  /* 0x000c */ unsigned long ElementSize;
} NDIS_NIC_SWITCH_INFO_ARRAY, *PNDIS_NIC_SWITCH_INFO_ARRAY; /* size: 0x0010 */

