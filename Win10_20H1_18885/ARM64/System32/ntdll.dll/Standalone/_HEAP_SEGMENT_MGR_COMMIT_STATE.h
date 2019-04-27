typedef union _HEAP_SEGMENT_MGR_COMMIT_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short CommittedPageCount : 11; /* bit position: 0 */
      /* 0x0000 */ unsigned short Spare : 3; /* bit position: 11 */
      /* 0x0000 */ unsigned short LargePageOperationInProgress : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned short LargePageCommit : 1; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0000 */ volatile unsigned short EntireUShortV;
    /* 0x0000 */ unsigned short EntireUShort;
  }; /* size: 0x0002 */
} HEAP_SEGMENT_MGR_COMMIT_STATE, *PHEAP_SEGMENT_MGR_COMMIT_STATE; /* size: 0x0002 */

