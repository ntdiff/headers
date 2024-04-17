typedef struct _PRINTER_DEFAULTSW
{
  /* 0x0000 */ wchar_t* pDatatype;
  /* 0x0008 */ struct _devicemodeW* pDevMode;
  /* 0x0010 */ unsigned long DesiredAccess;
  /* 0x0014 */ long __PADDING__[1];
} PRINTER_DEFAULTSW, *PPRINTER_DEFAULTSW; /* size: 0x0018 */

