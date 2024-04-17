typedef enum _JOURNAL_CHANGE_INFORMATION_CLASS
{
  JournalCreateKey = 0,
  JournalDeleteKey = 1,
  JournalRenameKey = 2,
  JournalSetValue = 3,
  JournalDeleteValue = 4,
  JournalSetKeySecurity = 5,
  JournalSetKeyUserFlags = 6,
  JournalSetLastWriteTime = 7,
  JournalBeginTransaction = 8,
  JournalCommitTransaction = 9,
  JournalAbortTransaction = 10,
  MaxJournalChangeAction = 11,
} JOURNAL_CHANGE_INFORMATION_CLASS, *PJOURNAL_CHANGE_INFORMATION_CLASS;

