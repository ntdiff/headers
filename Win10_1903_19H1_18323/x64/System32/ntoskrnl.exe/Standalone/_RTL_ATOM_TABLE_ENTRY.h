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

typedef struct _RTL_ATOM_TABLE_ENTRY
{
  /* 0x0000 */ struct _RTL_ATOM_TABLE_ENTRY* HashLink;
  /* 0x0008 */ unsigned short HandleIndex;
  /* 0x000a */ unsigned short Atom;
  /* 0x0010 */ struct _RTL_ATOM_TABLE_REFERENCE Reference;
  /* 0x0028 */ unsigned char NameLength;
  /* 0x002a */ wchar_t Name[1];
  /* 0x002c */ long __PADDING__[1];
} RTL_ATOM_TABLE_ENTRY, *PRTL_ATOM_TABLE_ENTRY; /* size: 0x0030 */

