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

typedef struct _SEP_LOWBOX_NUMBER_ENTRY
{
  /* 0x0000 */ struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
  /* 0x0018 */ __int64 ReferenceCount;
  /* 0x0020 */ void* PackageSid;
  /* 0x0028 */ unsigned long LowboxNumber;
  /* 0x0030 */ void* AtomTable;
} SEP_LOWBOX_NUMBER_ENTRY, *PSEP_LOWBOX_NUMBER_ENTRY; /* size: 0x0038 */

