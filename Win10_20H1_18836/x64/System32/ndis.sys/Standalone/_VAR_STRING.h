typedef struct _VAR_STRING
{
  /* 0x0000 */ unsigned long ulTotalSize;
  /* 0x0004 */ unsigned long ulNeededSize;
  /* 0x0008 */ unsigned long ulUsedSize;
  /* 0x000c */ unsigned long ulStringFormat;
  /* 0x0010 */ unsigned long ulStringSize;
  /* 0x0014 */ unsigned long ulStringOffset;
} VAR_STRING, *PVAR_STRING; /* size: 0x0018 */

