typedef struct _MI_TRIAGE_DUMP_DATA
{
  /* 0x0000 */ unsigned long BadPageCount;
  /* 0x0004 */ long BadPagesDetected;
  /* 0x0008 */ long ZeroedPageSingleBitErrorsDetected;
  /* 0x000c */ long ScrubPasses;
  /* 0x0010 */ long ScrubBadPagesFound;
  /* 0x0014 */ unsigned long FeatureBits;
  /* 0x0018 */ unsigned long TimeZoneId;
} MI_TRIAGE_DUMP_DATA, *PMI_TRIAGE_DUMP_DATA; /* size: 0x001c */

