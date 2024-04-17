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

typedef struct _ENUM_SERVICE_STATUSA
{
  /* 0x0000 */ char* lpServiceName;
  /* 0x0004 */ char* lpDisplayName;
  /* 0x0008 */ struct _SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSA, *PENUM_SERVICE_STATUSA; /* size: 0x0024 */

