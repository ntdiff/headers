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

