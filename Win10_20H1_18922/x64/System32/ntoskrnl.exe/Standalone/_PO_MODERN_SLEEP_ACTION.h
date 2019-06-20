typedef enum _PO_MODERN_SLEEP_ACTION
{
  PoModernSleepActionGlobalActivatorsVeto = 0,
  PoModernSleepActionNonBlockingPhases = 1,
  PoModernSleepActionForceIdle = 2,
  PoModernSleepActionMinimalBlockingNotificationClients = 3,
  PoModernSleepActionMax = 4,
} PO_MODERN_SLEEP_ACTION, *PPO_MODERN_SLEEP_ACTION;

