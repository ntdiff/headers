typedef struct _PRINTER_NOTIFY_OPTIONS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _PRINTER_NOTIFY_OPTIONS_TYPE* pTypes;
} PRINTER_NOTIFY_OPTIONS, *PPRINTER_NOTIFY_OPTIONS; /* size: 0x0010 */

