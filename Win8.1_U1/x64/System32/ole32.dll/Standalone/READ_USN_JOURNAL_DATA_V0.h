struct READ_USN_JOURNAL_DATA_V0
{
  /* 0x0000 */ __int64 StartUsn;
  /* 0x0008 */ unsigned long ReasonMask;
  /* 0x000c */ unsigned long ReturnOnlyOnClose;
  /* 0x0010 */ unsigned __int64 Timeout;
  /* 0x0018 */ unsigned __int64 BytesToWaitFor;
  /* 0x0020 */ unsigned __int64 UsnJournalID;
}; /* size: 0x0028 */

