typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PD_QUEUE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ const struct _NDIS_PD_QUEUE_DISPATCH* Dispatch;
  /* 0x0010 */ void* PDPlatformReserved[2];
  /* 0x0020 */ void* PDClientReserved[2];
} NDIS_PD_QUEUE, *PNDIS_PD_QUEUE; /* size: 0x0030 */

