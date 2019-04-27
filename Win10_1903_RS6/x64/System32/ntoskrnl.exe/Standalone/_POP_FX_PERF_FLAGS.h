typedef union _POP_FX_PERF_FLAGS
{
  union
  {
    /* 0x0000 */ long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Progress : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 24; /* bit position: 3 */
      /* 0x0000 */ unsigned long Synchronicity : 2; /* bit position: 27 */
      /* 0x0000 */ unsigned long RequestPepCompleted : 1; /* bit position: 29 */
      /* 0x0000 */ unsigned long RequestSucceeded : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long NestedCallback : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} POP_FX_PERF_FLAGS, *PPOP_FX_PERF_FLAGS; /* size: 0x0004 */

