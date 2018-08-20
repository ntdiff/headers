typedef enum _PS_WAKE_REASON
{
  PsWakeReasonUser = 0,
  PsWakeReasonExecutionRequired = 1,
  PsWakeReasonKernel = 2,
  PsWakeReasonInstrumentation = 3,
  PsWakeReasonPreserveProcess = 4,
  PsMaxWakeReasons = 5,
} PS_WAKE_REASON, *PPS_WAKE_REASON;

