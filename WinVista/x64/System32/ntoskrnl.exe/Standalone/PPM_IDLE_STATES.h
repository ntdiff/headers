struct PPM_IDLE_STATE
{
  /* 0x0000 */ void* IdleHandler /* function */;
  /* 0x0008 */ unsigned __int64 Context;
  /* 0x0010 */ unsigned long Latency;
  /* 0x0014 */ unsigned long Power;
  /* 0x0018 */ unsigned long TimeCheck;
  /* 0x001c */ unsigned long StateFlags;
  /* 0x0020 */ unsigned char PromotePercent;
  /* 0x0021 */ unsigned char DemotePercent;
  /* 0x0022 */ unsigned char PromotePercentBase;
  /* 0x0023 */ unsigned char DemotePercentBase;
  /* 0x0024 */ unsigned char StateType;
  /* 0x0025 */ char __PADDING__[3];
}; /* size: 0x0028 */

struct PPM_IDLE_STATES
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long Count;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long AsULONG;
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned long AllowScaling : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned long Disabled : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x000c */ unsigned long TargetState;
  /* 0x0010 */ unsigned long ActualState;
  /* 0x0014 */ unsigned long OldState;
  /* 0x0018 */ unsigned __int64 TargetProcessors;
  /* 0x0020 */ struct PPM_IDLE_STATE State[1];
}; /* size: 0x0048 */

