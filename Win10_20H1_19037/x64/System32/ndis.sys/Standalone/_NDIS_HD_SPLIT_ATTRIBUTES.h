typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_HD_SPLIT_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long HardwareCapabilities;
  /* 0x0008 */ unsigned long CurrentCapabilities;
  /* 0x000c */ unsigned long HDSplitFlags;
  /* 0x0010 */ unsigned long BackfillSize;
  /* 0x0014 */ unsigned long MaxHeaderSize;
} NDIS_HD_SPLIT_ATTRIBUTES, *PNDIS_HD_SPLIT_ATTRIBUTES; /* size: 0x0018 */

