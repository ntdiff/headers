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

typedef struct _JOB_INFO_2W
{
  /* 0x0000 */ unsigned long JobId;
  /* 0x0004 */ wchar_t* pPrinterName;
  /* 0x0008 */ wchar_t* pMachineName;
  /* 0x000c */ wchar_t* pUserName;
  /* 0x0010 */ wchar_t* pDocument;
  /* 0x0014 */ wchar_t* pNotifyName;
  /* 0x0018 */ wchar_t* pDatatype;
  /* 0x001c */ wchar_t* pPrintProcessor;
  /* 0x0020 */ wchar_t* pParameters;
  /* 0x0024 */ wchar_t* pDriverName;
  /* 0x0028 */ struct _devicemodeW* pDevMode;
  /* 0x002c */ wchar_t* pStatus;
  /* 0x0030 */ void* pSecurityDescriptor;
  /* 0x0034 */ unsigned long Status;
  /* 0x0038 */ unsigned long Priority;
  /* 0x003c */ unsigned long Position;
  /* 0x0040 */ unsigned long StartTime;
  /* 0x0044 */ unsigned long UntilTime;
  /* 0x0048 */ unsigned long TotalPages;
  /* 0x004c */ unsigned long Size;
  /* 0x0050 */ struct _SYSTEMTIME Submitted;
  /* 0x0060 */ unsigned long Time;
  /* 0x0064 */ unsigned long PagesPrinted;
} JOB_INFO_2W, *PJOB_INFO_2W; /* size: 0x0068 */

