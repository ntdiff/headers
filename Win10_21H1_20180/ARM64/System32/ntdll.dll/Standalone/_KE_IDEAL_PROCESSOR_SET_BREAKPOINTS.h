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

