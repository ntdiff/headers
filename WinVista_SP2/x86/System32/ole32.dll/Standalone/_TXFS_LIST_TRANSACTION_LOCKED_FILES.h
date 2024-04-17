typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES
{
  /* 0x0000 */ struct _GUID KtmTransaction;
  /* 0x0010 */ unsigned __int64 NumberOfFiles;
  /* 0x0018 */ unsigned __int64 BufferSizeRequired;
  /* 0x0020 */ unsigned __int64 Offset;
} TXFS_LIST_TRANSACTION_LOCKED_FILES, *PTXFS_LIST_TRANSACTION_LOCKED_FILES; /* size: 0x0028 */

