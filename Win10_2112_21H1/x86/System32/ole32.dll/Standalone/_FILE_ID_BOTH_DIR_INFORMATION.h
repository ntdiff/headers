typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _FILE_ID_BOTH_DIR_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long FileIndex;
  /* 0x0008 */ union _LARGE_INTEGER CreationTime;
  /* 0x0010 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0018 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0020 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0028 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0030 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0038 */ unsigned long FileAttributes;
  /* 0x003c */ unsigned long FileNameLength;
  /* 0x0040 */ unsigned long EaSize;
  /* 0x0044 */ char ShortNameLength;
  /* 0x0046 */ wchar_t ShortName[12];
  /* 0x0060 */ union _LARGE_INTEGER FileId;
  /* 0x0068 */ wchar_t FileName[1];
  /* 0x006a */ char __PADDING__[6];
} FILE_ID_BOTH_DIR_INFORMATION, *PFILE_ID_BOTH_DIR_INFORMATION; /* size: 0x0070 */

