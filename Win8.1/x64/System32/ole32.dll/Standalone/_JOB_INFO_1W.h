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

typedef struct _JOB_INFO_1W
{
  /* 0x0000 */ unsigned long JobId;
  /* 0x0008 */ wchar_t* pPrinterName;
  /* 0x0010 */ wchar_t* pMachineName;
  /* 0x0018 */ wchar_t* pUserName;
  /* 0x0020 */ wchar_t* pDocument;
  /* 0x0028 */ wchar_t* pDatatype;
  /* 0x0030 */ wchar_t* pStatus;
  /* 0x0038 */ unsigned long Status;
  /* 0x003c */ unsigned long Priority;
  /* 0x0040 */ unsigned long Position;
  /* 0x0044 */ unsigned long TotalPages;
  /* 0x0048 */ unsigned long PagesPrinted;
  /* 0x004c */ struct _SYSTEMTIME Submitted;
  /* 0x005c */ long __PADDING__[1];
} JOB_INFO_1W, *PJOB_INFO_1W; /* size: 0x0060 */

