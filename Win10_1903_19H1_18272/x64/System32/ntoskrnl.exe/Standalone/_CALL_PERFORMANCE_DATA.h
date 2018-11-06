typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CALL_PERFORMANCE_DATA
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ struct _LIST_ENTRY HashTable[64];
} CALL_PERFORMANCE_DATA, *PCALL_PERFORMANCE_DATA; /* size: 0x0408 */

