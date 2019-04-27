typedef struct _HEAP_GLOBAL_APPCOMPAT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long SafeInputValidation : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Padding : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long CommitLFHSubsegments : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long AllocateHeapFromEnv : 1; /* bit position: 3 */
  }; /* bitfield */
} HEAP_GLOBAL_APPCOMPAT_FLAGS, *PHEAP_GLOBAL_APPCOMPAT_FLAGS; /* size: 0x0004 */

