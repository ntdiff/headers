typedef struct _RTL_HASH_TABLE_ITERATOR
{
  /* 0x0000 */ struct _RTL_HASH_TABLE* Hash;
  /* 0x0008 */ struct _RTL_HASH_ENTRY* HashEntry;
  /* 0x0010 */ struct _SINGLE_LIST_ENTRY* Bucket;
} RTL_HASH_TABLE_ITERATOR, *PRTL_HASH_TABLE_ITERATOR; /* size: 0x0018 */

