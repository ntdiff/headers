typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* InitiateOffloadHandler /* function */;
  /* 0x000c */ void* TerminateOffloadHandler /* function */;
  /* 0x0010 */ void* UpdateOffloadHandler /* function */;
  /* 0x0014 */ void* InvalidateOffloadHandler /* function */;
  /* 0x0018 */ void* QueryOffloadHandler /* function */;
} NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS, *PNDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS; /* size: 0x001c */

