typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PEB_LDR_DATA
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned char Initialized;
  /* 0x0008 */ void* SsHandle;
  /* 0x000c */ struct _LIST_ENTRY InLoadOrderModuleList;
  /* 0x0014 */ struct _LIST_ENTRY InMemoryOrderModuleList;
  /* 0x001c */ struct _LIST_ENTRY InInitializationOrderModuleList;
  /* 0x0024 */ void* EntryInProgress;
  /* 0x0028 */ unsigned char ShutdownInProgress;
  /* 0x002c */ void* ShutdownThreadId;
} PEB_LDR_DATA, *PPEB_LDR_DATA; /* size: 0x0030 */

