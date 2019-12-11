typedef struct _NDIS_SS_IDLE_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long TimerRunning : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long IdleWorkItemScheduled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long IdleRequestSubmitted : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SuspendPowerIrpRequested : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long DeviceSuspended : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ResumePowerIrpRequested : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long CancelWorkItemScheduled : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long IdleRequestCanceled : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long ForceIdleTransition : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long Stopped : 1; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_SS_IDLE_FLAGS, *PNDIS_SS_IDLE_FLAGS; /* size: 0x0004 */

