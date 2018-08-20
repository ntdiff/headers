typedef struct _EXCEPTION_REGISTRATION_RECORD
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Next;
  /* 0x0004 */ void* Handler /* function */;
} EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD; /* size: 0x0008 */

typedef struct _MI_TRIAGE_DUMP_DATA
{
  /* 0x0000 */ unsigned long BadPageCount;
  /* 0x0004 */ long BadPagesDetected;
  /* 0x0008 */ long ZeroedPageSingleBitErrorsDetected;
  /* 0x000c */ long ScrubPasses;
  /* 0x0010 */ long ScrubBadPagesFound;
  /* 0x0018 */ unsigned __int64 FeatureBits;
  /* 0x0020 */ unsigned long TimeZoneId;
  /* 0x0024 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionChainTerminator;
  /* 0x0028 */ struct _EXCEPTION_REGISTRATION_RECORD ExceptionChainTerminatorRecord;
} MI_TRIAGE_DUMP_DATA, *PMI_TRIAGE_DUMP_DATA; /* size: 0x0030 */

