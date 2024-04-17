typedef union _PROCESS_AFFINITY_UPDATE_MODE
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableAutoUpdate : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Permanent : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_AFFINITY_UPDATE_MODE, *PPROCESS_AFFINITY_UPDATE_MODE; /* size: 0x0004 */

