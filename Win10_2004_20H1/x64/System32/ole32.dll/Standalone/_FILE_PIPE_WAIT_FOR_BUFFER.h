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

typedef struct _FILE_PIPE_WAIT_FOR_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER Timeout;
  /* 0x0008 */ unsigned long NameLength;
  /* 0x000c */ unsigned char TimeoutSpecified;
  /* 0x000e */ wchar_t Name[1];
} FILE_PIPE_WAIT_FOR_BUFFER, *PFILE_PIPE_WAIT_FOR_BUFFER; /* size: 0x0010 */

