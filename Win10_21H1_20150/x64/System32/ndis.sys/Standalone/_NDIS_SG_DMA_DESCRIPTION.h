typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_SG_DMA_DESCRIPTION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long MaximumPhysicalMapping;
  /* 0x0010 */ void* ProcessSGListHandler /* function */;
  /* 0x0018 */ void* SharedMemAllocateCompleteHandler /* function */;
  /* 0x0020 */ unsigned long ScatterGatherListSize;
  /* 0x0024 */ long __PADDING__[1];
} NDIS_SG_DMA_DESCRIPTION, *PNDIS_SG_DMA_DESCRIPTION; /* size: 0x0028 */

