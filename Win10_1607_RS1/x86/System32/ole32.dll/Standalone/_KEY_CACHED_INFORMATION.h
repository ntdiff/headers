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

typedef struct _KEY_CACHED_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0008 */ unsigned long TitleIndex;
  /* 0x000c */ unsigned long SubKeys;
  /* 0x0010 */ unsigned long MaxNameLen;
  /* 0x0014 */ unsigned long Values;
  /* 0x0018 */ unsigned long MaxValueNameLen;
  /* 0x001c */ unsigned long MaxValueDataLen;
  /* 0x0020 */ unsigned long NameLength;
  /* 0x0024 */ long __PADDING__[1];
} KEY_CACHED_INFORMATION, *PKEY_CACHED_INFORMATION; /* size: 0x0028 */

