typedef struct _PRINTER_INFO_4W
{
  /* 0x0000 */ wchar_t* pPrinterName;
  /* 0x0008 */ wchar_t* pServerName;
  /* 0x0010 */ unsigned long Attributes;
  /* 0x0014 */ long __PADDING__[1];
} PRINTER_INFO_4W, *PPRINTER_INFO_4W; /* size: 0x0018 */

