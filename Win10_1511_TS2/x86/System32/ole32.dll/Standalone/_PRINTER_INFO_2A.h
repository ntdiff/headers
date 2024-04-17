typedef struct _PRINTER_INFO_2A
{
  /* 0x0000 */ char* pServerName;
  /* 0x0004 */ char* pPrinterName;
  /* 0x0008 */ char* pShareName;
  /* 0x000c */ char* pPortName;
  /* 0x0010 */ char* pDriverName;
  /* 0x0014 */ char* pComment;
  /* 0x0018 */ char* pLocation;
  /* 0x001c */ struct _devicemodeA* pDevMode;
  /* 0x0020 */ char* pSepFile;
  /* 0x0024 */ char* pPrintProcessor;
  /* 0x0028 */ char* pDatatype;
  /* 0x002c */ char* pParameters;
  /* 0x0030 */ void* pSecurityDescriptor;
  /* 0x0034 */ unsigned long Attributes;
  /* 0x0038 */ unsigned long Priority;
  /* 0x003c */ unsigned long DefaultPriority;
  /* 0x0040 */ unsigned long StartTime;
  /* 0x0044 */ unsigned long UntilTime;
  /* 0x0048 */ unsigned long Status;
  /* 0x004c */ unsigned long cJobs;
  /* 0x0050 */ unsigned long AveragePPM;
} PRINTER_INFO_2A, *PPRINTER_INFO_2A; /* size: 0x0054 */

