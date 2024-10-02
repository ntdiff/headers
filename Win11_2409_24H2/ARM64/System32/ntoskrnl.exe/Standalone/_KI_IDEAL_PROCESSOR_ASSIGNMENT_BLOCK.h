typedef union _KI_PROCESS_CONCURRENCY_COUNT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Fraction : 18; /* bit position: 0 */
      /* 0x0000 */ unsigned long Count : 14; /* bit position: 18 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} KI_PROCESS_CONCURRENCY_COUNT, *PKI_PROCESS_CONCURRENCY_COUNT; /* size: 0x0004 */

typedef struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS
{
  /* 0x0000 */ union _KI_PROCESS_CONCURRENCY_COUNT Low;
  /* 0x0004 */ union _KI_PROCESS_CONCURRENCY_COUNT High;
} KI_IDEAL_PROCESSOR_SET_BREAKPOINTS, *PKI_IDEAL_PROCESSOR_SET_BREAKPOINTS; /* size: 0x0008 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
{
  /* 0x0000 */ union _KI_PROCESS_CONCURRENCY_COUNT ExpectedConcurrencyCount;
  /* 0x0004 */ struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS Breakpoints;
  union
  {
    union
    {
      /* 0x000c */ unsigned long ConcurrencyCountFixed : 1; /* bit position: 0 */
      /* 0x000c */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ AssignmentFlags;
  /* 0x0010 */ unsigned short ThreadSeed[32];
  /* 0x0050 */ unsigned short IdealProcessor[32];
  /* 0x0090 */ unsigned short IdealNode[32];
  /* 0x00d0 */ struct _KAFFINITY_EX IdealProcessorSets;
} KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK, *PKI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK; /* size: 0x01d8 */

