typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 3; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 40; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 12; /* bit position: 52 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

