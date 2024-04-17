typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagFORMATETC
{
  /* 0x0000 */ unsigned short cfFormat;
  /* 0x0008 */ struct tagDVTARGETDEVICE* ptd;
  /* 0x0010 */ unsigned long dwAspect;
  /* 0x0014 */ long lindex;
  /* 0x0018 */ unsigned long tymed;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

class CCacheNode
{
  /* 0x0000 */ struct _GUID m_clsid;
  /* 0x0010 */ struct tagFORMATETC m_foretc;
  /* 0x0030 */ unsigned long m_advf;
  /* 0x0034 */ long m_lWidth;
  /* 0x0038 */ long m_lHeight;
  /* 0x003c */ unsigned long m_dwFlags;
  /* 0x0040 */ struct IStorage* m_pStg;
  /* 0x0048 */ int m_iStreamNum;
  /* 0x004c */ unsigned long m_dwPresBitsPos;
  /* 0x0050 */ unsigned long m_dwSavedPresBitsPos;
  /* 0x0054 */ int m_fConvert;
  /* 0x0058 */ struct IOlePresObj* m_pPresObj;
  /* 0x0060 */ struct IOlePresObj* m_pPresObjAfterFreeze;
  /* 0x0068 */ struct IDataObject* m_pDataObject;
  /* 0x0070 */ unsigned long m_dwAdvConnId;
}; /* size: 0x0078 */

