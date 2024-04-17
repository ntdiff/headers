struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0008 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0010 */ unsigned long dwAspect;
  /* 0x0014 */ long lindex;
  /* 0x0018 */ unsigned long tymed;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

class CStatData
{
  /* 0x0000 */ unsigned long m_ulFlags;
  /* 0x0008 */ struct tagFORMATETC m_foretc;
  /* 0x0028 */ unsigned long m_dwAdvf;
  /* 0x0030 */ struct IAdviseSink* m_pAdvSink;
  /* 0x0038 */ unsigned long m_dwConnID;
}; /* size: 0x0040 */

