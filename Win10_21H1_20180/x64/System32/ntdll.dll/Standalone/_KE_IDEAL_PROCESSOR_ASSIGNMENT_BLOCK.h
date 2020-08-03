typedef union _KE_PROCESS_CONCURRENCY_COUNT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Fraction : 20; /* bit position: 0 */
      /* 0x0000 */ unsigned long Count : 12; /* bit position: 20 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} KE_PROCESS_CONCURRENCY_COUNT, *PKE_PROCESS_CONCURRENCY_COUNT; /* size: 0x0004 */

typedef struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS
{
  /* 0x0000 */ union _KE_PROCESS_CONCURRENCY_COUNT Low;
  /* 0x0004 */ union _KE_PROCESS_CONCURRENCY_COUNT High;
} KE_IDEAL_PROCESSOR_SET_BREAKPOINTS, *PKE_IDEAL_PROCESSOR_SET_BREAKPOINTS; /* size: 0x0008 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
{
  /* 0x0000 */ union _KE_PROCESS_CONCURRENCY_COUNT ExpectedConcurrencyCount;
  /* 0x0004 */ struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS Breakpoints;
  union
  {
    union
    {
      /* 0x000c */ unsigned long ConcurrencyCountFixed : 1; /* bit position: 0 */
      /* 0x000c */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ AssignmentFlags;
  /* 0x0010 */ struct _KAFFINITY_EX IdealProcessorSets;
} KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK, *PKE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK; /* size: 0x00b8 */

