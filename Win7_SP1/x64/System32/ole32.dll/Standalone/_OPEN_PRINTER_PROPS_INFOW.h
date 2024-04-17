typedef struct _OPEN_PRINTER_PROPS_INFOW
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0008 */ wchar_t* pszSheetName;
  /* 0x0010 */ unsigned int uSheetIndex;
  /* 0x0014 */ unsigned long dwFlags;
  /* 0x0018 */ int bModal;
  /* 0x001c */ long __PADDING__[1];
} OPEN_PRINTER_PROPS_INFOW, *POPEN_PRINTER_PROPS_INFOW; /* size: 0x0020 */

