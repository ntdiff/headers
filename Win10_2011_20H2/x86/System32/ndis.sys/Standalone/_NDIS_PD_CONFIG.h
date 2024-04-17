typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PD_CONFIG
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned char Enabled;
  /* 0x000c */ unsigned long CapabilitiesOffset;
  /* 0x0010 */ unsigned long CapabilitiesSize;
  /* 0x0014 */ long __PADDING__[1];
} NDIS_PD_CONFIG, *PNDIS_PD_CONFIG; /* size: 0x0018 */

