union RTLP_HP_LFH_PERF_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long HotspotDetection : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LfhSubsegmentPrefetch : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ThreadPrivateSlot : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long EnableGarbageCollection : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long OpportunisticLargePreCommit : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long LfhForcedAffinity : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long LfhConservativeAffinity : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long LfhCachelinePadding : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long LfhSubsegmentHeat : 2; /* bit position: 8 */
      /* 0x0000 */ unsigned long SegCachedCommitLimitRatio : 2; /* bit position: 10 */
      /* 0x0000 */ unsigned long HotSubsegmentSizeShift : 2; /* bit position: 12 */
      /* 0x0000 */ unsigned long HotThresholdHighShift : 2; /* bit position: 14 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFlags;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

