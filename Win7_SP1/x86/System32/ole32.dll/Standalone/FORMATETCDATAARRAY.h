struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0004 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0008 */ unsigned long dwAspect;
  /* 0x000c */ long lindex;
  /* 0x0010 */ unsigned long tymed;
}; /* size: 0x0014 */

struct FORMATETCDATA
{
  /* 0x0000 */ struct tagFORMATETC _FormatEtc;
  /* 0x0014 */ int fSaveOnFlush;
  /* 0x0018 */ unsigned long dwReserved1;
  /* 0x001c */ unsigned long dwReserved2;
}; /* size: 0x0020 */

struct FORMATETCDATAARRAY
{
  /* 0x0000 */ unsigned long _dwSig;
  /* 0x0004 */ unsigned long _dwSize;
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x000c */ unsigned long _cFormats;
  /* 0x0010 */ unsigned long _dwMiscArrayFlags;
  /* 0x0014 */ int _fIs64BitArray;
  /* 0x0018 */ struct FORMATETCDATA _FormatEtcData[1];
}; /* size: 0x0038 */

