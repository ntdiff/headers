typedef enum _TRANSACTION_INFORMATION_CLASS
{
  TransactionBasicInformation = 0,
  TransactionPropertiesInformation = 1,
  TransactionEnlistmentInformation = 2,
  TransactionSuperiorEnlistmentInformation = 3,
  TransactionBindInformation = 4,
  TransactionDTCPrivateInformation = 5,
} TRANSACTION_INFORMATION_CLASS, *PTRANSACTION_INFORMATION_CLASS;

