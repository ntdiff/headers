struct tagBIND_OPTS3
{
  /* 0x0028 */ struct HWND__* hwnd;
}; /* size: 0x0030 */

class CLUAMoniker
{
  /* 0x0038 */ unsigned long m_runLevel;
  /* 0x003c */ int m_bHaveBindOpts;
  /* 0x0040 */ struct tagBIND_OPTS3 m_bindopts3;
}; /* size: 0x0070 */

