struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0004 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0008 */ unsigned long dwAspect;
  /* 0x000c */ long lindex;
  /* 0x0010 */ unsigned long tymed;
}; /* size: 0x0014 */

class CStatData
{
  /* 0x0000 */ unsigned long m_ulFlags;
  /* 0x0004 */ struct tagFORMATETC m_foretc;
  /* 0x0018 */ unsigned long m_dwAdvf;
  /* 0x001c */ struct IAdviseSink* m_pAdvSink;
  /* 0x0020 */ unsigned long m_dwConnID;
}; /* size: 0x0024 */

