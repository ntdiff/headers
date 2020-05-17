typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Linkage;
  /* 0x0008 */ unsigned long Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY; /* size: 0x000c */

typedef struct _SEP_LUID_TO_INDEX_MAP_ENTRY
{
  /* 0x0000 */ struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
  /* 0x000c */ long ReferenceCount;
  /* 0x0010 */ unsigned __int64 Luid;
  /* 0x0018 */ unsigned __int64 IndexIntoGlobalSingletonTable;
  /* 0x0020 */ unsigned char MarkedForDeletion;
  /* 0x0021 */ char __PADDING__[7];
} SEP_LUID_TO_INDEX_MAP_ENTRY, *PSEP_LUID_TO_INDEX_MAP_ENTRY; /* size: 0x0028 */

