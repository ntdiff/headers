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

typedef struct _FILE_END_OF_FILE_INFORMATION_EX
{
  /* 0x0000 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0008 */ union _LARGE_INTEGER PagingFileSizeInMM;
  /* 0x0010 */ union _LARGE_INTEGER PagingFileMaxSize;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ long __PADDING__[1];
} FILE_END_OF_FILE_INFORMATION_EX, *PFILE_END_OF_FILE_INFORMATION_EX; /* size: 0x0020 */

