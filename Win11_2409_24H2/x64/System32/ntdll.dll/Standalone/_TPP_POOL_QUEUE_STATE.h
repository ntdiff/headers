typedef union _TPP_POOL_QUEUE_STATE
{
  union
  {
    /* 0x0000 */ __int64 Exchange;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ long RunningThreadGoal : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned long PendingReleaseCount : 16; /* bit position: 16 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long QueueLength;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} TPP_POOL_QUEUE_STATE, *PTPP_POOL_QUEUE_STATE; /* size: 0x0008 */

