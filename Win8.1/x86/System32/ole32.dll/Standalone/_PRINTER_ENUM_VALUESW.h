typedef struct _PRINTER_ENUM_VALUESW
{
  /* 0x0000 */ wchar_t* pValueName;
  /* 0x0004 */ unsigned long cbValueName;
  /* 0x0008 */ unsigned long dwType;
  /* 0x000c */ unsigned char* pData;
  /* 0x0010 */ unsigned long cbData;
} PRINTER_ENUM_VALUESW, *PPRINTER_ENUM_VALUESW; /* size: 0x0014 */

