union RTLP_HP_LFH_PERF_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long HotspotDetection : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long HotspotFullCommit : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ActiveSubsegment : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SmallerSubsegment : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long SingleAffinitySlot : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ApplyLfhDecommitPolicy : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long EnableGarbageCollection : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long LargePagePreCommit : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long OpportunisticLargePreCommit : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long LfhForcedAffinity : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long LfhCachelinePadding : 1; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFlags;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

