typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PEB_LDR_DATA
{
  /* 0x0000 */ unsigned char Reserved1[8];
  /* 0x0008 */ void* Reserved2[3];
  /* 0x0020 */ struct _LIST_ENTRY InMemoryOrderModuleList;
} PEB_LDR_DATA, *PPEB_LDR_DATA; /* size: 0x0030 */

