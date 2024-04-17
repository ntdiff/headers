typedef struct _QUERY_PERFORMANCE_COUNTER_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long KernelTransition : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ul;
  }; /* size: 0x0004 */
} QUERY_PERFORMANCE_COUNTER_FLAGS, *PQUERY_PERFORMANCE_COUNTER_FLAGS; /* size: 0x0004 */

