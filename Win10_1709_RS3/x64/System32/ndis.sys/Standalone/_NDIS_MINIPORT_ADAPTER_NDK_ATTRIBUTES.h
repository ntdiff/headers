typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char Enabled;
  /* 0x0008 */ struct _NDIS_NDK_CAPABILITIES* NdkCapabilities;
} NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES, *PNDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES; /* size: 0x0010 */

