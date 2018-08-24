typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long filler0 : 8; /* bit position: 2 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long filler1 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long NextEntry : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0004 */

