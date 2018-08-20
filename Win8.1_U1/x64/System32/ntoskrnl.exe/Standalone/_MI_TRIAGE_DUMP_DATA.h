typedef struct _MI_TRIAGE_DUMP_DATA
{
  /* 0x0000 */ unsigned __int64 BadPageCount;
  /* 0x0008 */ long BadPagesDetected;
  /* 0x000c */ long ZeroedPageSingleBitErrorsDetected;
  /* 0x0010 */ long ScrubPasses;
  /* 0x0014 */ long ScrubBadPagesFound;
  /* 0x0018 */ unsigned __int64 FeatureBits;
  /* 0x0020 */ unsigned long TimeZoneId;
  /* 0x0024 */ long __PADDING__[1];
} MI_TRIAGE_DUMP_DATA, *PMI_TRIAGE_DUMP_DATA; /* size: 0x0028 */

