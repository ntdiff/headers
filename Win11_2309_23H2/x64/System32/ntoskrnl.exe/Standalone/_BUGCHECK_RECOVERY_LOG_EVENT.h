typedef enum _BUGCHECK_RECOVERY_LOG_EVENT
{
  RecoveryEventStart = 0,
  RecoveryEventPhase1Status = 1,
  RecoveryEventPhase2Status = 2,
  RecoveryEventMultipleBugcheckStatus = 3,
  RecoveryEventMax = 4,
} BUGCHECK_RECOVERY_LOG_EVENT, *PBUGCHECK_RECOVERY_LOG_EVENT;

