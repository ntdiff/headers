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

typedef struct _WIN32_FIND_STREAM_DATA
{
  /* 0x0000 */ union _LARGE_INTEGER StreamSize;
  /* 0x0008 */ wchar_t cStreamName[296];
} WIN32_FIND_STREAM_DATA, *PWIN32_FIND_STREAM_DATA; /* size: 0x0258 */

