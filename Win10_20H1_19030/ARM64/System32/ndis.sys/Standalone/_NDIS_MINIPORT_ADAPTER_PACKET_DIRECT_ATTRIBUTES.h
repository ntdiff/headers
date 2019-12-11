typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned char DmaAddressWidth;
  /* 0x0009 */ char __PADDING__[3];
} NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES, *PNDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES; /* size: 0x000c */

