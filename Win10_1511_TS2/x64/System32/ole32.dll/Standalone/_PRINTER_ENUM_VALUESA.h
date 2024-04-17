typedef struct _PRINTER_ENUM_VALUESA
{
  /* 0x0000 */ char* pValueName;
  /* 0x0008 */ unsigned long cbValueName;
  /* 0x000c */ unsigned long dwType;
  /* 0x0010 */ unsigned char* pData;
  /* 0x0018 */ unsigned long cbData;
  /* 0x001c */ long __PADDING__[1];
} PRINTER_ENUM_VALUESA, *PPRINTER_ENUM_VALUESA; /* size: 0x0020 */

