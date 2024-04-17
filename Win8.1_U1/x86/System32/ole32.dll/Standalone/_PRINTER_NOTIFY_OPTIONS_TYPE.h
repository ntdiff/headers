typedef struct _PRINTER_NOTIFY_OPTIONS_TYPE
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short Reserved0;
  /* 0x0004 */ unsigned long Reserved1;
  /* 0x0008 */ unsigned long Reserved2;
  /* 0x000c */ unsigned long Count;
  /* 0x0010 */ unsigned short* pFields;
} PRINTER_NOTIFY_OPTIONS_TYPE, *PPRINTER_NOTIFY_OPTIONS_TYPE; /* size: 0x0014 */

