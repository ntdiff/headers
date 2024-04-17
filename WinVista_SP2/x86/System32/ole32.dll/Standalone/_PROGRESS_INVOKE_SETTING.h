typedef enum _PROGRESS_INVOKE_SETTING
{
  ProgressInvokeNever = 1,
  ProgressInvokeEveryObject = 2,
  ProgressInvokeOnError = 3,
  ProgressCancelOperation = 4,
  ProgressRetryOperation = 5,
  ProgressInvokePrePostError = 6,
} PROGRESS_INVOKE_SETTING, *PPROGRESS_INVOKE_SETTING;

