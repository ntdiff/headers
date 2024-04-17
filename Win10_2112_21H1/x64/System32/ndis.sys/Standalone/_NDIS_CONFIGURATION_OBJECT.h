typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_CONFIGURATION_OBJECT
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* NdisHandle;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} NDIS_CONFIGURATION_OBJECT, *PNDIS_CONFIGURATION_OBJECT; /* size: 0x0018 */

