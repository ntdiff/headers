struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0004 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0008 */ unsigned long dwAspect;
  /* 0x000c */ long lindex;
  /* 0x0010 */ unsigned long tymed;
}; /* size: 0x0014 */

struct FMTCACHE
{
  /* 0x0000 */ struct tagFORMATETC fmt;
  /* 0x0014 */ unsigned long dwAspects;
  /* 0x0018 */ int fUseMe;
}; /* size: 0x001c */

