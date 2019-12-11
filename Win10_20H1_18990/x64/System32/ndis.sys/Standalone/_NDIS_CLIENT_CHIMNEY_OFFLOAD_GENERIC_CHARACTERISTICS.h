typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0010 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0018 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0020 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0028 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0030 */ void* IndicateOffloadEventHandler /* function */;
} NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS, *PNDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS; /* size: 0x0038 */

