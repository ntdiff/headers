typedef enum _TRANSACTION_STATE
{
  TransactionStateNormal = 1,
  TransactionStateIndoubt = 2,
  TransactionStateCommittedNotify = 3,
} TRANSACTION_STATE, *PTRANSACTION_STATE;

