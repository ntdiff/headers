typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_ATOM_TABLE_REFERENCE
{
  /* 0x0000 */ struct _LIST_ENTRY LowBoxList;
  /* 0x0010 */ unsigned long LowBoxID;
  /* 0x0014 */ unsigned short ReferenceCount;
  /* 0x0016 */ unsigned short Flags;
} RTL_ATOM_TABLE_REFERENCE, *PRTL_ATOM_TABLE_REFERENCE; /* size: 0x0018 */

