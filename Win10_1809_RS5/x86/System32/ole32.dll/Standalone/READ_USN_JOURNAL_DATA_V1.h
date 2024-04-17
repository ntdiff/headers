struct READ_USN_JOURNAL_DATA_V1
{
  /* 0x0000 */ __int64 StartUsn;
  /* 0x0008 */ unsigned long ReasonMask;
  /* 0x000c */ unsigned long ReturnOnlyOnClose;
  /* 0x0010 */ unsigned __int64 Timeout;
  /* 0x0018 */ unsigned __int64 BytesToWaitFor;
  /* 0x0020 */ unsigned __int64 UsnJournalID;
  /* 0x0028 */ unsigned short MinMajorVersion;
  /* 0x002a */ unsigned short MaxMajorVersion;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

