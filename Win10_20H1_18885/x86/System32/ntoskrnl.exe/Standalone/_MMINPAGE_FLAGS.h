typedef struct _MMINPAGE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long GetExtents : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PrefetchSystemVmType : 2; /* bit position: 1 */
    /* 0x0000 */ unsigned long VaPrefetchReadBlock : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CollidedFlowThrough : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long ForceCollisions : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long InPageExpanded : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long IssuedAtLowPriority : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long FaultFromStore : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long PagePriority : 3; /* bit position: 9 */
    /* 0x0000 */ unsigned long ClusteredPagePriority : 3; /* bit position: 12 */
    /* 0x0000 */ unsigned long MakeClusterValid : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long PerformRelocations : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long ZeroLastPage : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long UserFault : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned long StandbyProtectionNeeded : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long PteChanged : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long PageFileFault : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long PageFilePageHashActive : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long CoalescedIo : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long VmLockNotNeeded : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long Spare0 : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long Spare1 : 6; /* bit position: 26 */
  }; /* bitfield */
} MMINPAGE_FLAGS, *PMMINPAGE_FLAGS; /* size: 0x0004 */

