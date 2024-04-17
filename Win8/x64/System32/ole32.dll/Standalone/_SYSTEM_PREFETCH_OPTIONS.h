typedef struct _SYSTEM_PREFETCH_OPTIONS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long LowerPriority : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long VirtualOffsets : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long TrickleIOs : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long SkipInStorePages : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long PrefetchFilesByVa : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Spare : 3; /* bit position: 5 */
    /* 0x0000 */ unsigned long ScenarioType : 8; /* bit position: 8 */
  }; /* bitfield */
} SYSTEM_PREFETCH_OPTIONS, *PSYSTEM_PREFETCH_OPTIONS; /* size: 0x0004 */

