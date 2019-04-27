typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DMA_COMMON_BUFFER_VECTOR
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 SizeOfEntries;
  /* 0x0018 */ unsigned long NumberOfEntries;
  /* 0x0020 */ struct _HALP_DMA_DOMAIN_OBJECT* Domain;
  /* 0x0028 */ struct _MDL* Mdl;
  /* 0x0030 */ void* BaseAddress;
  /* 0x0038 */ unsigned __int64 BaseLogicalAddress;
  /* 0x0040 */ struct _DMA_COMMON_BUFFER_ENTRY* Entries;
} DMA_COMMON_BUFFER_VECTOR, *PDMA_COMMON_BUFFER_VECTOR; /* size: 0x0048 */

