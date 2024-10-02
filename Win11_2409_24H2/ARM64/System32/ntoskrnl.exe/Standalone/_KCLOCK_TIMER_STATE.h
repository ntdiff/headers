typedef enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
  KClockTimerOneShotUnarmed = 0,
  KClockTimerOneShotArmed = 1,
  KClockTimerOneShotRearmRequired = 2,
  KClockTimerOneShotInvalid = 3,
} KCLOCK_TIMER_ONE_SHOT_STATE, *PKCLOCK_TIMER_ONE_SHOT_STATE;

typedef enum _KCLOCK_TIMER_DEADLINE_TYPE
{
  KClockTimerKTimerExpirationNonHr = 0,
  KClockTimerKTimerExpirationPseudoHr = 1,
  KClockTimerKTimer2ExpirationHr = 2,
  KClockTimerKTimersMax = 2,
  KClockTimerQuantumEnd = 3,
  KClockTimerGroupSchedulingGenerationEnd = 4,
  KClockTimerIdlePromotion = 5,
  KClockTimerBamQosHysteresisEnd = 6,
  KClockTimerMax = 7,
} KCLOCK_TIMER_DEADLINE_TYPE, *PKCLOCK_TIMER_DEADLINE_TYPE;

typedef struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
  /* 0x0000 */ unsigned __int64 DueTime;
  /* 0x0008 */ unsigned long TolerableDelay;
  union
  {
    /* 0x000c */ unsigned char TypeFlags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char Valid : 1; /* bit position: 0 */
      /* 0x000c */ unsigned char NoWake : 1; /* bit position: 1 */
      /* 0x000c */ unsigned char Unused : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x000d */ char __PADDING__[3];
} KCLOCK_TIMER_DEADLINE_ENTRY, *PKCLOCK_TIMER_DEADLINE_ENTRY; /* size: 0x0010 */

typedef struct _KCLOCK_TICK_TRACE
{
  /* 0x0000 */ unsigned __int64 PerformanceCounter;
  /* 0x0008 */ unsigned __int64 PreInterruptTime;
  /* 0x0010 */ unsigned __int64 PostInterruptTime;
  /* 0x0018 */ unsigned __int64 TimeStampCounter;
  /* 0x0020 */ unsigned char IsClockOwner;
  /* 0x0021 */ char __PADDING__[7];
} KCLOCK_TICK_TRACE, *PKCLOCK_TICK_TRACE; /* size: 0x0028 */

typedef struct _KCLOCK_INCREMENT_TRACE
{
  /* 0x0000 */ unsigned long ActualIncrement;
  /* 0x0004 */ unsigned long RequestedIncrement;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 PerformanceCounter;
  /* 0x0018 */ unsigned char OneShot;
  /* 0x0019 */ char __PADDING__[7];
} KCLOCK_INCREMENT_TRACE, *PKCLOCK_INCREMENT_TRACE; /* size: 0x0020 */

typedef struct _KCLOCK_TIMER_STATE
{
  /* 0x0000 */ unsigned __int64 NextTickDueTime;
  /* 0x0008 */ unsigned long TimeIncrement;
  /* 0x000c */ unsigned long LastRequestedTimeIncrement;
  /* 0x0010 */ enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;
  /* 0x0014 */ enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;
  /* 0x0018 */ struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];
  /* 0x0088 */ unsigned char ClockActive;
  /* 0x0089 */ unsigned char ClockArmedForIdle;
  /* 0x008c */ unsigned long ClockTickTraceIndex;
  /* 0x0090 */ unsigned long ClockIncrementTraceIndex;
  /* 0x0098 */ struct _KCLOCK_TICK_TRACE ClockTickTraces[16];
  /* 0x0318 */ struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];
} KCLOCK_TIMER_STATE, *PKCLOCK_TIMER_STATE; /* size: 0x0518 */

