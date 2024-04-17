struct tagBIND_OPTS3
{
  /* 0x0028 */ struct HWND__* hwnd;
}; /* size: 0x0030 */

class CBindCtx
{
  /* 0x0008 */ unsigned long m_refs;
  /* 0x0010 */ struct tagBIND_OPTS3 m_bindopts;
  /* 0x0040 */ class CBindCtx::CObjList* m_pFirstObj;
  /* 0x0048 */ class CMapStringToPtr* m_pMap;
}; /* size: 0x0050 */

