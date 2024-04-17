struct USN_JOURNAL_DATA_V1
{
  /* 0x0000 */ unsigned __int64 UsnJournalID;
  /* 0x0008 */ __int64 FirstUsn;
  /* 0x0010 */ __int64 NextUsn;
  /* 0x0018 */ __int64 LowestValidUsn;
  /* 0x0020 */ __int64 MaxUsn;
  /* 0x0028 */ unsigned __int64 MaximumSize;
  /* 0x0030 */ unsigned __int64 AllocationDelta;
  /* 0x0038 */ unsigned short MinSupportedMajorVersion;
  /* 0x003a */ unsigned short MaxSupportedMajorVersion;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

