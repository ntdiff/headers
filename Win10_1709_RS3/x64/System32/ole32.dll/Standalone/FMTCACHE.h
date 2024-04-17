struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0008 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0010 */ unsigned long dwAspect;
  /* 0x0014 */ long lindex;
  /* 0x0018 */ unsigned long tymed;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

struct FMTCACHE
{
  /* 0x0000 */ struct tagFORMATETC fmt;
  /* 0x0020 */ unsigned long dwAspects;
  /* 0x0024 */ int fUseMe;
}; /* size: 0x0028 */

