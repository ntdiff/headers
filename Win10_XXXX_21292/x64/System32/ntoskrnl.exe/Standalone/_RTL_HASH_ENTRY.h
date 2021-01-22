typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_HASH_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY BucketLink;
  /* 0x0008 */ unsigned __int64 Key;
} RTL_HASH_ENTRY, *PRTL_HASH_ENTRY; /* size: 0x0010 */

