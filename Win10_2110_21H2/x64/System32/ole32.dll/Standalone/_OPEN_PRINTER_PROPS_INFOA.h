typedef struct _OPEN_PRINTER_PROPS_INFOA
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0008 */ char* pszSheetName;
  /* 0x0010 */ unsigned int uSheetIndex;
  /* 0x0014 */ unsigned long dwFlags;
  /* 0x0018 */ int bModal;
  /* 0x001c */ long __PADDING__[1];
} OPEN_PRINTER_PROPS_INFOA, *POPEN_PRINTER_PROPS_INFOA; /* size: 0x0020 */

