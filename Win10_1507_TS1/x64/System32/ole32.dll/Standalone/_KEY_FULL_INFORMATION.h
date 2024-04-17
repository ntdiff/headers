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

typedef struct _KEY_FULL_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0008 */ unsigned long TitleIndex;
  /* 0x000c */ unsigned long ClassOffset;
  /* 0x0010 */ unsigned long ClassLength;
  /* 0x0014 */ unsigned long SubKeys;
  /* 0x0018 */ unsigned long MaxNameLen;
  /* 0x001c */ unsigned long MaxClassLen;
  /* 0x0020 */ unsigned long Values;
  /* 0x0024 */ unsigned long MaxValueNameLen;
  /* 0x0028 */ unsigned long MaxValueDataLen;
  /* 0x002c */ wchar_t Class[1];
  /* 0x002e */ char __PADDING__[2];
} KEY_FULL_INFORMATION, *PKEY_FULL_INFORMATION; /* size: 0x0030 */

