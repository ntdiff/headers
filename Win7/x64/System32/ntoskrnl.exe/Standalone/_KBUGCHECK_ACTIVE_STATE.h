typedef union _KBUGCHECK_ACTIVE_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BugCheckState : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long RecursionCount : 2; /* bit position: 2 */
      /* 0x0000 */ unsigned long BugCheckOwner : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ volatile long Value;
  }; /* size: 0x0004 */
} KBUGCHECK_ACTIVE_STATE, *PKBUGCHECK_ACTIVE_STATE; /* size: 0x0004 */

