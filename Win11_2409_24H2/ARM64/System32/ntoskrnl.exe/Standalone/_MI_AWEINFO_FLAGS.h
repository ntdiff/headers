typedef struct _MI_AWEINFO_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ProcessDefault : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PagesLockInitialized : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ZeroPagesOptional : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long IoSpace : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long LazyTbFlush : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long Unused : 27; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllBits;
  }; /* size: 0x0004 */
} MI_AWEINFO_FLAGS, *PMI_AWEINFO_FLAGS; /* size: 0x0004 */

