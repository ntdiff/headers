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

typedef struct _FILE_STREAM_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long StreamNameLength;
  /* 0x0008 */ union _LARGE_INTEGER StreamSize;
  /* 0x0010 */ union _LARGE_INTEGER StreamAllocationSize;
  /* 0x0018 */ wchar_t StreamName[1];
  /* 0x001a */ char __PADDING__[6];
} FILE_STREAM_INFORMATION, *PFILE_STREAM_INFORMATION; /* size: 0x0020 */

