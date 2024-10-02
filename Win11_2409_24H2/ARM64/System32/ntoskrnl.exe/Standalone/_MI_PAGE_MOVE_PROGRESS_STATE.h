typedef union _MI_PAGE_MOVE_PROGRESS_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 InProgressProcessors : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 SequenceNumber : 48; /* bit position: 16 */
    }; /* bitfield */
    /* 0x0000 */ __int64 EntireValue;
  }; /* size: 0x0008 */
} MI_PAGE_MOVE_PROGRESS_STATE, *PMI_PAGE_MOVE_PROGRESS_STATE; /* size: 0x0008 */

