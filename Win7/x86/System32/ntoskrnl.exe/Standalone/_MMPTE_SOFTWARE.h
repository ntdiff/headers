typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFileHigh : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0004 */

