typedef struct _PORT_INFO_3A
{
  /* 0x0000 */ unsigned long dwStatus;
  /* 0x0008 */ char* pszStatus;
  /* 0x0010 */ unsigned long dwSeverity;
  /* 0x0014 */ long __PADDING__[1];
} PORT_INFO_3A, *PPORT_INFO_3A; /* size: 0x0018 */

