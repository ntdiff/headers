typedef struct _SYSTEMTIME
{
  /* 0x0000 */ unsigned short wYear;
  /* 0x0002 */ unsigned short wMonth;
  /* 0x0004 */ unsigned short wDayOfWeek;
  /* 0x0006 */ unsigned short wDay;
  /* 0x0008 */ unsigned short wHour;
  /* 0x000a */ unsigned short wMinute;
  /* 0x000c */ unsigned short wSecond;
  /* 0x000e */ unsigned short wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME; /* size: 0x0010 */

typedef struct _JOB_INFO_1A
{
  /* 0x0000 */ unsigned long JobId;
  /* 0x0004 */ char* pPrinterName;
  /* 0x0008 */ char* pMachineName;
  /* 0x000c */ char* pUserName;
  /* 0x0010 */ char* pDocument;
  /* 0x0014 */ char* pDatatype;
  /* 0x0018 */ char* pStatus;
  /* 0x001c */ unsigned long Status;
  /* 0x0020 */ unsigned long Priority;
  /* 0x0024 */ unsigned long Position;
  /* 0x0028 */ unsigned long TotalPages;
  /* 0x002c */ unsigned long PagesPrinted;
  /* 0x0030 */ struct _SYSTEMTIME Submitted;
} JOB_INFO_1A, *PJOB_INFO_1A; /* size: 0x0040 */

