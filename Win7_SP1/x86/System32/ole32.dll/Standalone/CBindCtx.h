struct tagBIND_OPTS3
{
  /* 0x0020 */ struct HWND__* hwnd;
}; /* size: 0x0024 */

class CBindCtx
{
  /* 0x0004 */ unsigned long m_refs;
  /* 0x0008 */ struct tagBIND_OPTS3 m_bindopts;
  /* 0x002c */ class CBindCtx::CObjList* m_pFirstObj;
  /* 0x0030 */ class CMapStringToPtr* m_pMap;
}; /* size: 0x0034 */

