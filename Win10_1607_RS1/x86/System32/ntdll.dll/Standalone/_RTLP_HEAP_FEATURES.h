typedef struct _RTLP_HEAP_FEATURES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char UseSegmentHeap : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char EnableTagging : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char EnableStackTracking : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char DisableDbgBreakOnCorruption : 1; /* bit position: 3 */
  }; /* bitfield */
} RTLP_HEAP_FEATURES, *PRTLP_HEAP_FEATURES; /* size: 0x0001 */

