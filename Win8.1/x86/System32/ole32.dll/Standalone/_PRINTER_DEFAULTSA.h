typedef struct _PRINTER_DEFAULTSA
{
  /* 0x0000 */ char* pDatatype;
  /* 0x0004 */ struct _devicemodeA* pDevMode;
  /* 0x0008 */ unsigned long DesiredAccess;
} PRINTER_DEFAULTSA, *PPRINTER_DEFAULTSA; /* size: 0x000c */

