typedef struct _PRINTER_INFO_4A
{
  /* 0x0000 */ char* pPrinterName;
  /* 0x0008 */ char* pServerName;
  /* 0x0010 */ unsigned long Attributes;
  /* 0x0014 */ long __PADDING__[1];
} PRINTER_INFO_4A, *PPRINTER_INFO_4A; /* size: 0x0018 */

