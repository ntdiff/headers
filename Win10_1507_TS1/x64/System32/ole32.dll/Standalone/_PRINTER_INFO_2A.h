typedef struct _PRINTER_INFO_2A
{
  /* 0x0000 */ char* pServerName;
  /* 0x0008 */ char* pPrinterName;
  /* 0x0010 */ char* pShareName;
  /* 0x0018 */ char* pPortName;
  /* 0x0020 */ char* pDriverName;
  /* 0x0028 */ char* pComment;
  /* 0x0030 */ char* pLocation;
  /* 0x0038 */ struct _devicemodeA* pDevMode;
  /* 0x0040 */ char* pSepFile;
  /* 0x0048 */ char* pPrintProcessor;
  /* 0x0050 */ char* pDatatype;
  /* 0x0058 */ char* pParameters;
  /* 0x0060 */ void* pSecurityDescriptor;
  /* 0x0068 */ unsigned long Attributes;
  /* 0x006c */ unsigned long Priority;
  /* 0x0070 */ unsigned long DefaultPriority;
  /* 0x0074 */ unsigned long StartTime;
  /* 0x0078 */ unsigned long UntilTime;
  /* 0x007c */ unsigned long Status;
  /* 0x0080 */ unsigned long cJobs;
  /* 0x0084 */ unsigned long AveragePPM;
} PRINTER_INFO_2A, *PPRINTER_INFO_2A; /* size: 0x0088 */

