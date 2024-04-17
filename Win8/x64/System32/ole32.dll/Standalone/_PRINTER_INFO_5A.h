typedef struct _PRINTER_INFO_5A
{
  /* 0x0000 */ char* pPrinterName;
  /* 0x0008 */ char* pPortName;
  /* 0x0010 */ unsigned long Attributes;
  /* 0x0014 */ unsigned long DeviceNotSelectedTimeout;
  /* 0x0018 */ unsigned long TransmissionRetryTimeout;
  /* 0x001c */ long __PADDING__[1];
} PRINTER_INFO_5A, *PPRINTER_INFO_5A; /* size: 0x0020 */

