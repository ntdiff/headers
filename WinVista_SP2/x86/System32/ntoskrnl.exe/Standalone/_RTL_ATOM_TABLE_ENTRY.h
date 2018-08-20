typedef struct _RTL_ATOM_TABLE_ENTRY
{
  /* 0x0000 */ struct _RTL_ATOM_TABLE_ENTRY* HashLink;
  /* 0x0004 */ unsigned short HandleIndex;
  /* 0x0006 */ unsigned short Atom;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Flags;
  /* 0x000b */ unsigned char NameLength;
  /* 0x000c */ wchar_t Name[1];
  /* 0x000e */ char __PADDING__[2];
} RTL_ATOM_TABLE_ENTRY, *PRTL_ATOM_TABLE_ENTRY; /* size: 0x0010 */

