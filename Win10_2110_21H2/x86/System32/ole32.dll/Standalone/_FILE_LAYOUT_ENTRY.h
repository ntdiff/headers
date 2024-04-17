typedef struct _FILE_LAYOUT_ENTRY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long NextFileOffset;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long FileAttributes;
  /* 0x0010 */ unsigned __int64 FileReferenceNumber;
  /* 0x0018 */ unsigned long FirstNameOffset;
  /* 0x001c */ unsigned long FirstStreamOffset;
  /* 0x0020 */ unsigned long ExtraInfoOffset;
  /* 0x0024 */ unsigned long ExtraInfoLength;
} FILE_LAYOUT_ENTRY, *PFILE_LAYOUT_ENTRY; /* size: 0x0028 */

