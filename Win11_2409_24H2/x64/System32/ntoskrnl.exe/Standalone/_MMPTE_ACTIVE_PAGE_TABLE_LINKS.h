typedef struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Flink : 40; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 BlinkHigh : 24; /* bit position: 40 */
  }; /* bitfield */
} MMPTE_ACTIVE_PAGE_TABLE_LINKS, *PMMPTE_ACTIVE_PAGE_TABLE_LINKS; /* size: 0x0008 */

