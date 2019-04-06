typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _CALL_HASH_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ void* CallersAddress;
  /* 0x000c */ void* CallersCaller;
  /* 0x0010 */ unsigned long CallCount;
} CALL_HASH_ENTRY, *PCALL_HASH_ENTRY; /* size: 0x0014 */

