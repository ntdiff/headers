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

typedef struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE
{
  /* 0x0000 */ union _LARGE_INTEGER FileOffset;
  /* 0x0008 */ union _LARGE_INTEGER ByteCount;
} FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE, *PFSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE; /* size: 0x0010 */

