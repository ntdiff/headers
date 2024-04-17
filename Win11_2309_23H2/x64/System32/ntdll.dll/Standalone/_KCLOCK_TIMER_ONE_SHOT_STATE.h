typedef enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
  KClockTimerOneShotUnarmed = 0,
  KClockTimerOneShotArmed = 1,
  KClockTimerOneShotRearmRequired = 2,
  KClockTimerOneShotInvalid = 3,
} KCLOCK_TIMER_ONE_SHOT_STATE, *PKCLOCK_TIMER_ONE_SHOT_STATE;

