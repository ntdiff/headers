typedef union _HEAP_LFH_COMMIT_UNIT_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char CommitUnitShift;
      /* 0x0001 */ unsigned char CommitUnitCount;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short UShort;
  }; /* size: 0x0002 */
} HEAP_LFH_COMMIT_UNIT_INFO, *PHEAP_LFH_COMMIT_UNIT_INFO; /* size: 0x0002 */

