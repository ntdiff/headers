typedef enum _KE_WAKE_SOURCE_TYPE
{
  KeWakeSourceTypeSpuriousWake = 0,
  KeWakeSourceTypeSpuriousClock = 1,
  KeWakeSourceTypeSpuriousInterrupt = 2,
  KeWakeSourceTypeQueryFailure = 3,
  KeWakeSourceTypeAccountingFailure = 4,
  KeWakeSourceTypeStaticSourceMax = 4,
  KeWakeSourceTypeInterrupt = 5,
  KeWakeSourceTypeIRTimer = 6,
  KeWakeSourceTypeMax = 7,
} KE_WAKE_SOURCE_TYPE, *PKE_WAKE_SOURCE_TYPE;

