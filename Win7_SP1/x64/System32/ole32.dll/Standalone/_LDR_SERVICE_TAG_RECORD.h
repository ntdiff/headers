typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _LDR_SERVICE_TAG_RECORD
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ unsigned long ServiceTag;
  /* 0x0014 */ unsigned long Count;
} LDR_SERVICE_TAG_RECORD, *PLDR_SERVICE_TAG_RECORD; /* size: 0x0018 */

