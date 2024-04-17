struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0004 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0008 */ unsigned long dwAspect;
  /* 0x000c */ long lindex;
  /* 0x0010 */ unsigned long tymed;
}; /* size: 0x0014 */

struct tagSTATDATA
{
  /* 0x0000 */ struct tagFORMATETC formatetc;
  /* 0x0014 */ unsigned long advf;
  /* 0x0018 */ struct IAdviseSink* pAdvSink;
  /* 0x001c */ unsigned long dwConnection;
}; /* size: 0x0020 */

