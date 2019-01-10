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

typedef struct _FILE_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ unsigned long FileAttributes;
  /* 0x0024 */ long __PADDING__[1];
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION; /* size: 0x0028 */

