typedef union _TPP_WORK_STATE
{
  union
  {
    /* 0x0000 */ long Exchange;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Insertable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingCallbackCount : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} TPP_WORK_STATE, *PTPP_WORK_STATE; /* size: 0x0004 */

