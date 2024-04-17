struct tagFORMATETC64
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0008 */ unsigned __int64 ptd;
  /* 0x0010 */ unsigned long dwAspect;
  /* 0x0014 */ long lindex;
  /* 0x0018 */ unsigned long tymed;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

struct FORMATETCDATA64
{
  /* 0x0000 */ struct tagFORMATETC64 _FormatEtc;
  /* 0x0020 */ int fSaveOnFlush;
  /* 0x0024 */ unsigned long dwReserved1;
  /* 0x0028 */ unsigned long dwReserved2;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

struct FORMATETCDATAARRAY64
{
  /* 0x0000 */ unsigned long _dwSig;
  /* 0x0004 */ unsigned long _dwSize;
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x000c */ unsigned long _cFormats;
  /* 0x0010 */ unsigned long _dwMiscArrayFlags;
  /* 0x0014 */ int _fIs64BitArray;
  /* 0x0018 */ struct FORMATETCDATA64 _FormatEtcData[1];
}; /* size: 0x0048 */

