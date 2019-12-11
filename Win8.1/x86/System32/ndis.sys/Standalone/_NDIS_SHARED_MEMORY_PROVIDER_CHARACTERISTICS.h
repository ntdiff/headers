typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* ProviderContext;
  /* 0x000c */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0010 */ void* FreeSharedMemoryHandler /* function */;
} NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS, *PNDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS; /* size: 0x0014 */

