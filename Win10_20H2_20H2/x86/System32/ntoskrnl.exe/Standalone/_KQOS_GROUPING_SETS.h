typedef union _KQOS_GROUPING_SETS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long SingleCoreSet;
      /* 0x0004 */ unsigned long SmtSet;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 QosGroupingMasks;
  }; /* size: 0x0008 */
} KQOS_GROUPING_SETS, *PKQOS_GROUPING_SETS; /* size: 0x0008 */

