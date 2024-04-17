typedef struct _PRINTER_INFO_1W
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ wchar_t* pDescription;
  /* 0x0008 */ wchar_t* pName;
  /* 0x000c */ wchar_t* pComment;
} PRINTER_INFO_1W, *PPRINTER_INFO_1W; /* size: 0x0010 */

