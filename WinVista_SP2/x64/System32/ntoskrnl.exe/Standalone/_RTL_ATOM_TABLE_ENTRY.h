typedef struct _RTL_ATOM_TABLE_ENTRY
{
  /* 0x0000 */ struct _RTL_ATOM_TABLE_ENTRY* HashLink;
  /* 0x0008 */ unsigned short HandleIndex;
  /* 0x000a */ unsigned short Atom;
  /* 0x000c */ unsigned short ReferenceCount;
  /* 0x000e */ unsigned char Flags;
  /* 0x000f */ unsigned char NameLength;
  /* 0x0010 */ wchar_t Name[1];
  /* 0x0012 */ char __PADDING__[6];
} RTL_ATOM_TABLE_ENTRY, *PRTL_ATOM_TABLE_ENTRY; /* size: 0x0018 */

