typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DMA_COMMON_BUFFER_VECTOR
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned __int64 SizeOfEntries;
  /* 0x0010 */ unsigned long NumberOfEntries;
  /* 0x0014 */ struct _HALP_DMA_DOMAIN_OBJECT* Domain;
  /* 0x0018 */ struct _MDL* Mdl;
  /* 0x001c */ void* BaseAddress;
  /* 0x0020 */ unsigned __int64 BaseLogicalAddress;
  /* 0x0028 */ struct _DMA_COMMON_BUFFER_ENTRY* Entries;
  /* 0x002c */ long __PADDING__[1];
} DMA_COMMON_BUFFER_VECTOR, *PDMA_COMMON_BUFFER_VECTOR; /* size: 0x0030 */

