typedef struct _FILE_LAYOUT_NAME_ENTRY
{
  /* 0x0000 */ unsigned long NextNameOffset;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 ParentFileReferenceNumber;
  /* 0x0010 */ unsigned long FileNameLength;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ wchar_t FileName[1];
  /* 0x001a */ char __PADDING__[6];
} FILE_LAYOUT_NAME_ENTRY, *PFILE_LAYOUT_NAME_ENTRY; /* size: 0x0020 */

