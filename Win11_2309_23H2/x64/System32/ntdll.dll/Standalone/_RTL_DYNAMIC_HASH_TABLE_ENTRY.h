typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Linkage;
  /* 0x0010 */ unsigned __int64 Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY; /* size: 0x0018 */

