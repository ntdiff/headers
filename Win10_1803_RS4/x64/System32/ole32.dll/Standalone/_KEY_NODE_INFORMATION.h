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

typedef struct _KEY_NODE_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0008 */ unsigned long TitleIndex;
  /* 0x000c */ unsigned long ClassOffset;
  /* 0x0010 */ unsigned long ClassLength;
  /* 0x0014 */ unsigned long NameLength;
  /* 0x0018 */ wchar_t Name[1];
  /* 0x001a */ char __PADDING__[6];
} KEY_NODE_INFORMATION, *PKEY_NODE_INFORMATION; /* size: 0x0020 */

