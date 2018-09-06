typedef enum _KTRANSACTION_OUTCOME
{
  KTxOutcomeUninitialized = 0,
  KTxOutcomeUndetermined = 1,
  KTxOutcomeCommitted = 2,
  KTxOutcomeAborted = 3,
  KTxOutcomeUnavailable = 4,
} KTRANSACTION_OUTCOME, *PKTRANSACTION_OUTCOME;

