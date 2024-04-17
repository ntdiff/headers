typedef struct _OPEN_PRINTER_PROPS_INFOW
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ wchar_t* pszSheetName;
  /* 0x0008 */ unsigned int uSheetIndex;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ int bModal;
} OPEN_PRINTER_PROPS_INFOW, *POPEN_PRINTER_PROPS_INFOW; /* size: 0x0014 */

