typedef struct _MMINPAGE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long GetExtents : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long VmType : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned long VaPrefetchReadBlock : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long CollidedFlowThrough : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long ForceCollisions : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long InPageExpanded : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long IssuedAtLowPriority : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long FaultFromStore : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long PagePriority : 3; /* bit position: 11 */
    /* 0x0000 */ unsigned long ClusteredPagePriority : 3; /* bit position: 14 */
    /* 0x0000 */ unsigned long MakeClusterValid : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long ZeroLastPage : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned long UserFault : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long StandbyProtectionNeeded : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long PteChanged : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long PageFileFault : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long PageFilePageHashActive : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long CoalescedIo : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long VmLockNotNeeded : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long PartitionReferenced : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long NoICacheFlush : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned long Spare1 : 4; /* bit position: 28 */
  }; /* bitfield */
} MMINPAGE_FLAGS, *PMMINPAGE_FLAGS; /* size: 0x0004 */

