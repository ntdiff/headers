typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SYSPTES_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ unsigned long NumberOfEntries;
  /* 0x0010 */ unsigned long NumberOfEntriesPeak;
} SYSPTES_HEADER, *PSYSPTES_HEADER; /* size: 0x0014 */

