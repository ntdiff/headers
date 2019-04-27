typedef struct _HEAP_LFH_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Target;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long RefCount : 12; /* bit position: 0 */
  }; /* size: 0x0004 */
} HEAP_LFH_FAST_REF, *PHEAP_LFH_FAST_REF; /* size: 0x0004 */

