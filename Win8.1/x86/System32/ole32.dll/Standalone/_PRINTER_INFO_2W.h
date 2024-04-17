typedef struct _PRINTER_INFO_2W
{
  /* 0x0000 */ wchar_t* pServerName;
  /* 0x0004 */ wchar_t* pPrinterName;
  /* 0x0008 */ wchar_t* pShareName;
  /* 0x000c */ wchar_t* pPortName;
  /* 0x0010 */ wchar_t* pDriverName;
  /* 0x0014 */ wchar_t* pComment;
  /* 0x0018 */ wchar_t* pLocation;
  /* 0x001c */ struct _devicemodeW* pDevMode;
  /* 0x0020 */ wchar_t* pSepFile;
  /* 0x0024 */ wchar_t* pPrintProcessor;
  /* 0x0028 */ wchar_t* pDatatype;
  /* 0x002c */ wchar_t* pParameters;
  /* 0x0030 */ void* pSecurityDescriptor;
  /* 0x0034 */ unsigned long Attributes;
  /* 0x0038 */ unsigned long Priority;
  /* 0x003c */ unsigned long DefaultPriority;
  /* 0x0040 */ unsigned long StartTime;
  /* 0x0044 */ unsigned long UntilTime;
  /* 0x0048 */ unsigned long Status;
  /* 0x004c */ unsigned long cJobs;
  /* 0x0050 */ unsigned long AveragePPM;
} PRINTER_INFO_2W, *PPRINTER_INFO_2W; /* size: 0x0054 */

