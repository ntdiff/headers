typedef struct _PRINTER_INFO_5A
{
  /* 0x0000 */ char* pPrinterName;
  /* 0x0004 */ char* pPortName;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ unsigned long DeviceNotSelectedTimeout;
  /* 0x0010 */ unsigned long TransmissionRetryTimeout;
} PRINTER_INFO_5A, *PPRINTER_INFO_5A; /* size: 0x0014 */

