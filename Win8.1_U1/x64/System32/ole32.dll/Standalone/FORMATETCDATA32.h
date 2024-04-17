struct tagFORMATETC32
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0004 */ unsigned long ptd;
  /* 0x0008 */ unsigned long dwAspect;
  /* 0x000c */ long lindex;
  /* 0x0010 */ unsigned long tymed;
}; /* size: 0x0014 */

struct FORMATETCDATA32
{
  /* 0x0000 */ struct tagFORMATETC32 _FormatEtc;
  /* 0x0014 */ int fSaveOnFlush;
  /* 0x0018 */ unsigned long dwReserved1;
  /* 0x001c */ unsigned long dwReserved2;
}; /* size: 0x0020 */

