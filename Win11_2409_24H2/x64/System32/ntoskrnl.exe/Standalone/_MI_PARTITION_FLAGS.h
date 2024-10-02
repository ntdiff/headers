typedef struct _MI_PARTITION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PageListsInitialized : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long StoreReservedPagesCharged : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UseProtectedSlabAllocators : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PureHolding : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ZeroPagesOptional : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long BackgroundZeroingDisabled : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long SpecialPurposeMemory : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ long EntireField;
  }; /* size: 0x0004 */
} MI_PARTITION_FLAGS, *PMI_PARTITION_FLAGS; /* size: 0x0004 */

