typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CALL_HASH_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* CallersAddress;
  /* 0x0018 */ void* CallersCaller;
  /* 0x0020 */ unsigned long CallCount;
  /* 0x0024 */ long __PADDING__[1];
} CALL_HASH_ENTRY, *PCALL_HASH_ENTRY; /* size: 0x0028 */

