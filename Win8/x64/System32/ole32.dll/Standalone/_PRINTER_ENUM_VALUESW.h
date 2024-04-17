typedef struct _PRINTER_ENUM_VALUESW
{
  /* 0x0000 */ wchar_t* pValueName;
  /* 0x0008 */ unsigned long cbValueName;
  /* 0x000c */ unsigned long dwType;
  /* 0x0010 */ unsigned char* pData;
  /* 0x0018 */ unsigned long cbData;
  /* 0x001c */ long __PADDING__[1];
} PRINTER_ENUM_VALUESW, *PPRINTER_ENUM_VALUESW; /* size: 0x0020 */

