struct USN_JOURNAL_DATA_V0
{
  /* 0x0000 */ unsigned __int64 UsnJournalID;
  /* 0x0008 */ __int64 FirstUsn;
  /* 0x0010 */ __int64 NextUsn;
  /* 0x0018 */ __int64 LowestValidUsn;
  /* 0x0020 */ __int64 MaxUsn;
  /* 0x0028 */ unsigned __int64 MaximumSize;
  /* 0x0030 */ unsigned __int64 AllocationDelta;
}; /* size: 0x0038 */

