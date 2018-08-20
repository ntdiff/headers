typedef struct _MI_TRIAGE_DUMP_DATA
{
  /* 0x0000 */ unsigned __int64 BadPageCount;
  /* 0x0008 */ long BadPagesDetected;
  /* 0x000c */ long ZeroedPageSingleBitErrorsDetected;
  /* 0x0010 */ long ScrubPasses;
  /* 0x0014 */ long ScrubBadPagesFound;
  /* 0x0018 */ unsigned long FeatureBits;
  /* 0x001c */ unsigned long TimeZoneId;
} MI_TRIAGE_DUMP_DATA, *PMI_TRIAGE_DUMP_DATA; /* size: 0x0020 */

