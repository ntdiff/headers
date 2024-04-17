struct tagBIND_OPTS3
{
  /* 0x0020 */ struct HWND__* hwnd;
}; /* size: 0x0024 */

class CLUAMoniker
{
  /* 0x001c */ unsigned long m_runLevel;
  /* 0x0020 */ int m_bHaveBindOpts;
  /* 0x0024 */ struct tagBIND_OPTS3 m_bindopts3;
}; /* size: 0x0048 */

