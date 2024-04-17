typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_GENERIC_TABLE
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* TableRoot;
  /* 0x0004 */ struct _LIST_ENTRY InsertOrderList;
  /* 0x000c */ struct _LIST_ENTRY* OrderedPointer;
  /* 0x0010 */ unsigned long WhichOrderedElement;
  /* 0x0014 */ unsigned long NumberGenericTableElements;
  /* 0x0018 */ void* CompareRoutine /* function */;
  /* 0x001c */ void* AllocateRoutine /* function */;
  /* 0x0020 */ void* FreeRoutine /* function */;
  /* 0x0024 */ void* TableContext;
} RTL_GENERIC_TABLE, *PRTL_GENERIC_TABLE; /* size: 0x0028 */

