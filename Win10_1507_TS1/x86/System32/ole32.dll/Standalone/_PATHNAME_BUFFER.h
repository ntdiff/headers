typedef struct _PATHNAME_BUFFER
{
  /* 0x0000 */ unsigned long PathNameLength;
  /* 0x0004 */ wchar_t Name[1];
  /* 0x0006 */ char __PADDING__[2];
} PATHNAME_BUFFER, *PPATHNAME_BUFFER; /* size: 0x0008 */

