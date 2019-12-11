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

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
{
  union
  {
    /* 0x0000 */ struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    /* 0x0000 */ struct _LIST_ENTRY* CurEntry;
  }; /* size: 0x0018 */
  /* 0x0018 */ struct _LIST_ENTRY* ChainHead;
  /* 0x0020 */ unsigned long BucketIndex;
  /* 0x0024 */ long __PADDING__[1];
} RTL_DYNAMIC_HASH_TABLE_ENUMERATOR, *PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR; /* size: 0x0028 */

