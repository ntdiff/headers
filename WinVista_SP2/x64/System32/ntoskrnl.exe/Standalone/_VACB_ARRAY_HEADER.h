typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _VACB_ARRAY_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ unsigned long MappingCount;
  /* 0x0014 */ unsigned long Reserved;
} VACB_ARRAY_HEADER, *PVACB_ARRAY_HEADER; /* size: 0x0018 */

