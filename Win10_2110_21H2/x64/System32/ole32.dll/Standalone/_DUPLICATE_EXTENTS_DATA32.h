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

typedef struct _DUPLICATE_EXTENTS_DATA32
{
  /* 0x0000 */ unsigned int FileHandle;
  /* 0x0008 */ union _LARGE_INTEGER SourceFileOffset;
  /* 0x0010 */ union _LARGE_INTEGER TargetFileOffset;
  /* 0x0018 */ union _LARGE_INTEGER ByteCount;
} DUPLICATE_EXTENTS_DATA32, *PDUPLICATE_EXTENTS_DATA32; /* size: 0x0020 */

