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

typedef struct _DUPLICATE_CLUSTER_DATA
{
  /* 0x0000 */ __int64 SourceLcn;
  /* 0x0008 */ __int64 TargetLcn;
  /* 0x0010 */ union _LARGE_INTEGER TargetFileOffset;
  /* 0x0018 */ unsigned long DuplicationLimit;
  /* 0x001c */ unsigned long Reserved;
} DUPLICATE_CLUSTER_DATA, *PDUPLICATE_CLUSTER_DATA; /* size: 0x0020 */

