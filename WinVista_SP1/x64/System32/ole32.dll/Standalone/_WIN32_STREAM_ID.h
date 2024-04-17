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

typedef struct _WIN32_STREAM_ID
{
  /* 0x0000 */ unsigned long dwStreamId;
  /* 0x0004 */ unsigned long dwStreamAttributes;
  /* 0x0008 */ union _LARGE_INTEGER Size;
  /* 0x0010 */ unsigned long dwStreamNameSize;
  /* 0x0014 */ wchar_t cStreamName[1];
  /* 0x0016 */ char __PADDING__[2];
} WIN32_STREAM_ID, *PWIN32_STREAM_ID; /* size: 0x0018 */

