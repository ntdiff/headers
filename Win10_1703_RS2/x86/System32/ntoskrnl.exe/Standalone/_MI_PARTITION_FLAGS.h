typedef struct _MI_PARTITION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ObjectInitialized : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long PageListsInitialized : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long StoreReservedPagesCharged : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long PureHoldingPartition : 1; /* bit position: 4 */
  }; /* bitfield */
} MI_PARTITION_FLAGS, *PMI_PARTITION_FLAGS; /* size: 0x0004 */

