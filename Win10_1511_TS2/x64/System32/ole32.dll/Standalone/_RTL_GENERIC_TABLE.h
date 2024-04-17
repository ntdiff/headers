typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_GENERIC_TABLE
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* TableRoot;
  /* 0x0008 */ struct _LIST_ENTRY InsertOrderList;
  /* 0x0018 */ struct _LIST_ENTRY* OrderedPointer;
  /* 0x0020 */ unsigned long WhichOrderedElement;
  /* 0x0024 */ unsigned long NumberGenericTableElements;
  /* 0x0028 */ void* CompareRoutine /* function */;
  /* 0x0030 */ void* AllocateRoutine /* function */;
  /* 0x0038 */ void* FreeRoutine /* function */;
  /* 0x0040 */ void* TableContext;
} RTL_GENERIC_TABLE, *PRTL_GENERIC_TABLE; /* size: 0x0048 */

