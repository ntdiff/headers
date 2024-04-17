typedef struct _PORT_INFO_3W
{
  /* 0x0000 */ unsigned long dwStatus;
  /* 0x0008 */ wchar_t* pszStatus;
  /* 0x0010 */ unsigned long dwSeverity;
  /* 0x0014 */ long __PADDING__[1];
} PORT_INFO_3W, *PPORT_INFO_3W; /* size: 0x0018 */

