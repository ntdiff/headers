typedef struct _HEAP_LFH_MEM_POLICIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DisableAffinity : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long SlowSubsegmentGrowth : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Spare : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllPolicies;
  }; /* size: 0x0004 */
} HEAP_LFH_MEM_POLICIES, *PHEAP_LFH_MEM_POLICIES; /* size: 0x0004 */

