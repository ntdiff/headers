typedef struct _PRINTER_INFO_4W
{
  /* 0x0000 */ wchar_t* pPrinterName;
  /* 0x0004 */ wchar_t* pServerName;
  /* 0x0008 */ unsigned long Attributes;
} PRINTER_INFO_4W, *PPRINTER_INFO_4W; /* size: 0x000c */

