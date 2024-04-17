typedef struct _PROCESS_UPTIME_INFORMATION
{
  /* 0x0000 */ unsigned __int64 QueryInterruptTime;
  /* 0x0008 */ unsigned __int64 QueryUnbiasedTime;
  /* 0x0010 */ unsigned __int64 EndInterruptTime;
  /* 0x0018 */ unsigned __int64 TimeSinceCreation;
  /* 0x0020 */ unsigned __int64 Uptime;
  /* 0x0028 */ unsigned __int64 SuspendedTime;
  struct /* bitfield */
  {
    /* 0x0030 */ unsigned long HangCount : 4; /* bit position: 0 */
    /* 0x0030 */ unsigned long GhostCount : 4; /* bit position: 4 */
    /* 0x0030 */ unsigned long Crashed : 1; /* bit position: 8 */
    /* 0x0030 */ unsigned long Terminated : 1; /* bit position: 9 */
  }; /* bitfield */
  /* 0x0034 */ long __PADDING__[1];
} PROCESS_UPTIME_INFORMATION, *PPROCESS_UPTIME_INFORMATION; /* size: 0x0038 */

