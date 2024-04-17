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

typedef struct _JOB_INFO_4A
{
  /* 0x0000 */ unsigned long JobId;
  /* 0x0004 */ char* pPrinterName;
  /* 0x0008 */ char* pMachineName;
  /* 0x000c */ char* pUserName;
  /* 0x0010 */ char* pDocument;
  /* 0x0014 */ char* pNotifyName;
  /* 0x0018 */ char* pDatatype;
  /* 0x001c */ char* pPrintProcessor;
  /* 0x0020 */ char* pParameters;
  /* 0x0024 */ char* pDriverName;
  /* 0x0028 */ struct _devicemodeA* pDevMode;
  /* 0x002c */ char* pStatus;
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
  /* 0x0068 */ long SizeHigh;
} JOB_INFO_4A, *PJOB_INFO_4A; /* size: 0x006c */

