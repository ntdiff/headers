typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_IF_PROVIDER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* QueryObjectHandler /* function */;
  /* 0x0008 */ void* SetObjectHandler /* function */;
  /* 0x000c */ void* Reserved1;
  /* 0x0010 */ void* Reserved2;
} NDIS_IF_PROVIDER_CHARACTERISTICS, *PNDIS_IF_PROVIDER_CHARACTERISTICS; /* size: 0x0014 */

typedef struct _NDIS_IF_PROVIDER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _LIST_ENTRY Link;
  /* 0x000c */ struct _LIST_ENTRY IfList;
  /* 0x0014 */ void* IfProviderContext;
  /* 0x0018 */ struct _NDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics;
} NDIS_IF_PROVIDER_BLOCK, *PNDIS_IF_PROVIDER_BLOCK; /* size: 0x002c */

