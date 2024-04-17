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

typedef struct _REPAIR_COPIES_INPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _LARGE_INTEGER FileOffset;
  /* 0x0010 */ unsigned long Length;
  /* 0x0014 */ unsigned long SourceCopy;
  /* 0x0018 */ unsigned long NumberOfRepairCopies;
  /* 0x001c */ unsigned long RepairCopies[1];
} REPAIR_COPIES_INPUT, *PREPAIR_COPIES_INPUT; /* size: 0x0020 */

