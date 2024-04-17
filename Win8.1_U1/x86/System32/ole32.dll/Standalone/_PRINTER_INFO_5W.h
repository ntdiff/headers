typedef struct _PRINTER_INFO_5W
{
  /* 0x0000 */ wchar_t* pPrinterName;
  /* 0x0004 */ wchar_t* pPortName;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ unsigned long DeviceNotSelectedTimeout;
  /* 0x0010 */ unsigned long TransmissionRetryTimeout;
} PRINTER_INFO_5W, *PPRINTER_INFO_5W; /* size: 0x0014 */

