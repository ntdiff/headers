typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ unsigned long UsnReason;
  /* 0x0010 */ __int64 FileId;
  /* 0x0018 */ unsigned long Reserved1;
  /* 0x001c */ unsigned long Reserved2;
  /* 0x0020 */ __int64 Reserved3;
  /* 0x0028 */ wchar_t FileName[1];
  /* 0x002a */ char __PADDING__[6];
} TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY, *PTXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY; /* size: 0x0030 */

