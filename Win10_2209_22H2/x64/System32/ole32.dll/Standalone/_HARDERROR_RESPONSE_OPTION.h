typedef enum _HARDERROR_RESPONSE_OPTION
{
  OptionAbortRetryIgnore = 0,
  OptionOk = 1,
  OptionOkCancel = 2,
  OptionRetryCancel = 3,
  OptionYesNo = 4,
  OptionYesNoCancel = 5,
  OptionShutdownSystem = 6,
  OptionOkNoWait = 7,
  OptionCancelTryContinue = 8,
} HARDERROR_RESPONSE_OPTION, *PHARDERROR_RESPONSE_OPTION;

