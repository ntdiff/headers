typedef enum _KE_WAKE_SOURCE_TYPE
{
  KeWakeSourceTypeSpuriousWake = 0,
  KeWakeSourceTypeSpuriousClock = 1,
  KeWakeSourceTypeSpuriousInterrupt = 2,
  KeWakeSourceTypeQueryFailure = 3,
  KeWakeSourceTypeAccountingFailure = 4,
  KeWakeSourceTypeNonIrTimer = 5,
  KeWakeSourceTypeDebugPoll = 6,
  KeWakeSourceTypeClockWatchdog = 7,
  KeWakeSourceTypeClockInternal = 8,
  KeWakeSourceTypeClockNotOwner = 9,
  KeWakeSourceTypeClockNotArmed = 10,
  KeWakeSourceTypeExTimer = 11,
  KeWakeSourceTypeStaticSourceMax = 11,
  KeWakeSourceTypeInterrupt = 128,
  KeWakeSourceTypeIRTimer = 129,
  KeWakeSourceTypeMax = 130,
} KE_WAKE_SOURCE_TYPE, *PKE_WAKE_SOURCE_TYPE;

