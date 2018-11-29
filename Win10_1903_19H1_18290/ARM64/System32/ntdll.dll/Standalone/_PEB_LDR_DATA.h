typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PEB_LDR_DATA
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned char Initialized;
  /* 0x0008 */ void* SsHandle;
  /* 0x0010 */ struct _LIST_ENTRY InLoadOrderModuleList;
  /* 0x0020 */ struct _LIST_ENTRY InMemoryOrderModuleList;
  /* 0x0030 */ struct _LIST_ENTRY InInitializationOrderModuleList;
  /* 0x0040 */ void* EntryInProgress;
  /* 0x0048 */ unsigned char ShutdownInProgress;
  /* 0x0050 */ void* ShutdownThreadId;
} PEB_LDR_DATA, *PPEB_LDR_DATA; /* size: 0x0058 */

