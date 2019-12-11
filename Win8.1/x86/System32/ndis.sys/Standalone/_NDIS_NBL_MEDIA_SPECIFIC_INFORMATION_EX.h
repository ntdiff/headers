typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX* NextEntry;
  /* 0x0008 */ unsigned long Tag;
  /* 0x000c */ void* Data;
} NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX, *PNDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX; /* size: 0x0010 */

