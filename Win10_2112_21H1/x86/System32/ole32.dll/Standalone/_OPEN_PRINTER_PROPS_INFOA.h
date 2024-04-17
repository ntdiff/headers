typedef struct _OPEN_PRINTER_PROPS_INFOA
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ char* pszSheetName;
  /* 0x0008 */ unsigned int uSheetIndex;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ int bModal;
} OPEN_PRINTER_PROPS_INFOA, *POPEN_PRINTER_PROPS_INFOA; /* size: 0x0014 */

