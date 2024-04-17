struct tagBIND_OPTS2
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long grfFlags;
  /* 0x0008 */ unsigned long grfMode;
  /* 0x000c */ unsigned long dwTickCountDeadline;
  /* 0x0010 */ unsigned long dwTrackFlags;
  /* 0x0014 */ unsigned long dwClassContext;
  /* 0x0018 */ unsigned long locale;
  /* 0x0020 */ struct _COSERVERINFO* pServerInfo;
}; /* size: 0x0028 */

class CSessionMoniker
{
  /* 0x0030 */ unsigned long m_sessionid;
  /* 0x0034 */ int m_bUseConsoleSession;
  /* 0x0038 */ int m_bHaveBindOpts;
  /* 0x0040 */ struct tagBIND_OPTS2 m_bindopts2;
}; /* size: 0x0068 */

