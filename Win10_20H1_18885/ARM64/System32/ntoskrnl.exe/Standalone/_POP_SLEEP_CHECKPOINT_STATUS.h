typedef enum _POP_SLEEP_CHECKPOINT_STATUS
{
  PopSleepCheckpointStatusDisabled = 0,
  PopSleepCheckpointStatusEnabledDueToDirtyShutdown = 1,
  PopSleepCheckpointStatusEnabledManually = 4,
  PopSleepCheckpointStatusEnabledExperiment = 4,
  PopSleepCheckpointStatusEnabledMax = 7,
  PopSleepCheckpointStatusFailedNotEfiSystem = 8,
  PopSleepCheckpointStatusFailedInsufficientSpace = 9,
  PopSleepCheckpointStatusFailedTooSlow = 10,
  PopSleepCheckpointStatusFailedOtherError = 15,
  PopSleepCheckpointStatusMax = 15,
} POP_SLEEP_CHECKPOINT_STATUS, *PPOP_SLEEP_CHECKPOINT_STATUS;

