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

typedef struct _DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long QueryFlags;
  /* 0x0008 */ unsigned long HashAlgorithm;
  /* 0x0010 */ union _LARGE_INTEGER RangeOffsetInFile;
  /* 0x0018 */ union _LARGE_INTEGER RangeLength;
} DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER, *PDEDUP_QUERY_FILE_HASHES_INPUT_BUFFER; /* size: 0x0020 */

