typedef struct _MMINPAGE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char InjectRetry : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char CrossThreadPadding : 7; /* bit position: 1 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char PrefetchSystemVmType : 2; /* bit position: 0 */
    /* 0x0001 */ unsigned char VaPrefetchReadBlock : 1; /* bit position: 2 */
    /* 0x0001 */ unsigned char CollidedFlowThrough : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char ForceCollisions : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char InPageExpanded : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char IssuedAtLowPriority : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char FaultFromStore : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned char PagePriority : 3; /* bit position: 0 */
    /* 0x0002 */ unsigned char PerformRelocations : 1; /* bit position: 3 */
    /* 0x0002 */ unsigned char ClusteredPagePriority : 3; /* bit position: 4 */
    /* 0x0002 */ unsigned char MakeClusterValid : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char ZeroLastPage : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char UserFault : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char BoostedPriority : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char StandbyProtectionNeeded : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char PteChanged : 1; /* bit position: 4 */
    /* 0x0003 */ unsigned char PageFileFault : 1; /* bit position: 5 */
    /* 0x0003 */ unsigned char PageFilePageHashActive : 1; /* bit position: 6 */
    /* 0x0003 */ unsigned char Spare1 : 1; /* bit position: 7 */
  }; /* bitfield */
} MMINPAGE_FLAGS, *PMMINPAGE_FLAGS; /* size: 0x0004 */

