typedef struct _PRINTER_INFO_2W
{
  /* 0x0000 */ wchar_t* pServerName;
  /* 0x0008 */ wchar_t* pPrinterName;
  /* 0x0010 */ wchar_t* pShareName;
  /* 0x0018 */ wchar_t* pPortName;
  /* 0x0020 */ wchar_t* pDriverName;
  /* 0x0028 */ wchar_t* pComment;
  /* 0x0030 */ wchar_t* pLocation;
  /* 0x0038 */ struct _devicemodeW* pDevMode;
  /* 0x0040 */ wchar_t* pSepFile;
  /* 0x0048 */ wchar_t* pPrintProcessor;
  /* 0x0050 */ wchar_t* pDatatype;
  /* 0x0058 */ wchar_t* pParameters;
  /* 0x0060 */ void* pSecurityDescriptor;
  /* 0x0068 */ unsigned long Attributes;
  /* 0x006c */ unsigned long Priority;
  /* 0x0070 */ unsigned long DefaultPriority;
  /* 0x0074 */ unsigned long StartTime;
  /* 0x0078 */ unsigned long UntilTime;
  /* 0x007c */ unsigned long Status;
  /* 0x0080 */ unsigned long cJobs;
  /* 0x0084 */ unsigned long AveragePPM;
} PRINTER_INFO_2W, *PPRINTER_INFO_2W; /* size: 0x0088 */

