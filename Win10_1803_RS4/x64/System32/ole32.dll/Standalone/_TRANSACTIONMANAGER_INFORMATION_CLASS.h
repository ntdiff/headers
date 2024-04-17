typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS
{
  TransactionManagerBasicInformation = 0,
  TransactionManagerLogInformation = 1,
  TransactionManagerLogPathInformation = 2,
  TransactionManagerRecoveryInformation = 4,
  TransactionManagerOnlineProbeInformation = 3,
  TransactionManagerOldestTransactionInformation = 5,
} TRANSACTIONMANAGER_INFORMATION_CLASS, *PTRANSACTIONMANAGER_INFORMATION_CLASS;

