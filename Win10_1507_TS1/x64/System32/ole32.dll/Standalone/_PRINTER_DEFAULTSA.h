typedef struct _PRINTER_DEFAULTSA
{
  /* 0x0000 */ char* pDatatype;
  /* 0x0008 */ struct _devicemodeA* pDevMode;
  /* 0x0010 */ unsigned long DesiredAccess;
  /* 0x0014 */ long __PADDING__[1];
} PRINTER_DEFAULTSA, *PPRINTER_DEFAULTSA; /* size: 0x0018 */

