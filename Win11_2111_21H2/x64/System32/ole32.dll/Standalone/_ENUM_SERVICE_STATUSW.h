typedef struct _SERVICE_STATUS
{
  /* 0x0000 */ unsigned long dwServiceType;
  /* 0x0004 */ unsigned long dwCurrentState;
  /* 0x0008 */ unsigned long dwControlsAccepted;
  /* 0x000c */ unsigned long dwWin32ExitCode;
  /* 0x0010 */ unsigned long dwServiceSpecificExitCode;
  /* 0x0014 */ unsigned long dwCheckPoint;
  /* 0x0018 */ unsigned long dwWaitHint;
} SERVICE_STATUS, *PSERVICE_STATUS; /* size: 0x001c */

typedef struct _ENUM_SERVICE_STATUSW
{
  /* 0x0000 */ wchar_t* lpServiceName;
  /* 0x0008 */ wchar_t* lpDisplayName;
  /* 0x0010 */ struct _SERVICE_STATUS ServiceStatus;
  /* 0x002c */ long __PADDING__[1];
} ENUM_SERVICE_STATUSW, *PENUM_SERVICE_STATUSW; /* size: 0x0030 */

