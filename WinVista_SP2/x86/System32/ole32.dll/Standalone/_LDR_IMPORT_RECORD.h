typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _LDR_IMPORT_RECORD
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0008 */ struct _LDR_DATA_TABLE_ENTRY* Entry;
  /* 0x000c */ unsigned long Count;
} LDR_IMPORT_RECORD, *PLDR_IMPORT_RECORD; /* size: 0x0010 */

