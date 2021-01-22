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

