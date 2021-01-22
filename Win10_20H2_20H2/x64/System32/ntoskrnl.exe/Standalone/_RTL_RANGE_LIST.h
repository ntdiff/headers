typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_RANGE_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long Count;
  /* 0x0018 */ unsigned long Stamp;
  /* 0x001c */ long __PADDING__[1];
} RTL_RANGE_LIST, *PRTL_RANGE_LIST; /* size: 0x0020 */

