typedef struct _PRINTER_ENUM_VALUESA
{
  /* 0x0000 */ char* pValueName;
  /* 0x0004 */ unsigned long cbValueName;
  /* 0x0008 */ unsigned long dwType;
  /* 0x000c */ unsigned char* pData;
  /* 0x0010 */ unsigned long cbData;
} PRINTER_ENUM_VALUESA, *PPRINTER_ENUM_VALUESA; /* size: 0x0014 */

