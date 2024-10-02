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

typedef struct _FILE_NOTIFY_FULL_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long Action;
  /* 0x0008 */ union _LARGE_INTEGER CreationTime;
  /* 0x0010 */ union _LARGE_INTEGER LastModificationTime;
  /* 0x0018 */ union _LARGE_INTEGER LastChangeTime;
  /* 0x0020 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0028 */ union _LARGE_INTEGER AllocatedLength;
  /* 0x0030 */ union _LARGE_INTEGER FileSize;
  /* 0x0038 */ unsigned long FileAttributes;
  union
  {
    /* 0x003c */ unsigned long ReparsePointTag;
    /* 0x003c */ unsigned long EaSize;
  }; /* size: 0x0004 */
  /* 0x0040 */ union _LARGE_INTEGER FileId;
  /* 0x0048 */ union _LARGE_INTEGER ParentFileId;
  /* 0x0050 */ unsigned short FileNameLength;
  /* 0x0052 */ unsigned char FileNameFlags;
  /* 0x0053 */ unsigned char Reserved;
  /* 0x0054 */ wchar_t FileName[1];
  /* 0x0056 */ char __PADDING__[2];
} FILE_NOTIFY_FULL_INFORMATION, *PFILE_NOTIFY_FULL_INFORMATION; /* size: 0x0058 */

