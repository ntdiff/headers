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

typedef struct _JOB_INFO_2A
{
  /* 0x0000 */ unsigned long JobId;
  /* 0x0008 */ char* pPrinterName;
  /* 0x0010 */ char* pMachineName;
  /* 0x0018 */ char* pUserName;
  /* 0x0020 */ char* pDocument;
  /* 0x0028 */ char* pNotifyName;
  /* 0x0030 */ char* pDatatype;
  /* 0x0038 */ char* pPrintProcessor;
  /* 0x0040 */ char* pParameters;
  /* 0x0048 */ char* pDriverName;
  /* 0x0050 */ struct _devicemodeA* pDevMode;
  /* 0x0058 */ char* pStatus;
  /* 0x0060 */ void* pSecurityDescriptor;
  /* 0x0068 */ unsigned long Status;
  /* 0x006c */ unsigned long Priority;
  /* 0x0070 */ unsigned long Position;
  /* 0x0074 */ unsigned long StartTime;
  /* 0x0078 */ unsigned long UntilTime;
  /* 0x007c */ unsigned long TotalPages;
  /* 0x0080 */ unsigned long Size;
  /* 0x0084 */ struct _SYSTEMTIME Submitted;
  /* 0x0094 */ unsigned long Time;
  /* 0x0098 */ unsigned long PagesPrinted;
  /* 0x009c */ long __PADDING__[1];
} JOB_INFO_2A, *PJOB_INFO_2A; /* size: 0x00a0 */

