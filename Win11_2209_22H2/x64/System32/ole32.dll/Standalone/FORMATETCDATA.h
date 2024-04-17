struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0008 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0010 */ unsigned long dwAspect;
  /* 0x0014 */ long lindex;
  /* 0x0018 */ unsigned long tymed;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

struct FORMATETCDATA
{
  /* 0x0000 */ struct tagFORMATETC _FormatEtc;
  /* 0x0020 */ int fSaveOnFlush;
  /* 0x0024 */ unsigned long dwReserved1;
  /* 0x0028 */ unsigned long dwReserved2;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

