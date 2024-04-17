typedef struct _PRINTER_INFO_5W
{
  /* 0x0000 */ wchar_t* pPrinterName;
  /* 0x0008 */ wchar_t* pPortName;
  /* 0x0010 */ unsigned long Attributes;
  /* 0x0014 */ unsigned long DeviceNotSelectedTimeout;
  /* 0x0018 */ unsigned long TransmissionRetryTimeout;
  /* 0x001c */ long __PADDING__[1];
} PRINTER_INFO_5W, *PPRINTER_INFO_5W; /* size: 0x0020 */

