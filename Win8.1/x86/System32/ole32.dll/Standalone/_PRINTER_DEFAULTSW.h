typedef struct _PRINTER_DEFAULTSW
{
  /* 0x0000 */ wchar_t* pDatatype;
  /* 0x0004 */ struct _devicemodeW* pDevMode;
  /* 0x0008 */ unsigned long DesiredAccess;
} PRINTER_DEFAULTSW, *PPRINTER_DEFAULTSW; /* size: 0x000c */

