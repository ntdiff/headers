typedef struct _FS_BPIO_RESULTS
{
  /* 0x0000 */ long OpStatus;
  /* 0x0004 */ unsigned short FailingDriverNameLen;
  /* 0x0006 */ wchar_t FailingDriverName[32];
  /* 0x0046 */ unsigned short FailureReasonLen;
  /* 0x0048 */ wchar_t FailureReason[128];
} FS_BPIO_RESULTS, *PFS_BPIO_RESULTS; /* size: 0x0148 */

