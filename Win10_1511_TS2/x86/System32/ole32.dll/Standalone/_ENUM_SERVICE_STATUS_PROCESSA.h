typedef struct _SERVICE_STATUS_PROCESS
{
  /* 0x0000 */ unsigned long dwServiceType;
  /* 0x0004 */ unsigned long dwCurrentState;
  /* 0x0008 */ unsigned long dwControlsAccepted;
  /* 0x000c */ unsigned long dwWin32ExitCode;
  /* 0x0010 */ unsigned long dwServiceSpecificExitCode;
  /* 0x0014 */ unsigned long dwCheckPoint;
  /* 0x0018 */ unsigned long dwWaitHint;
  /* 0x001c */ unsigned long dwProcessId;
  /* 0x0020 */ unsigned long dwServiceFlags;
} SERVICE_STATUS_PROCESS, *PSERVICE_STATUS_PROCESS; /* size: 0x0024 */

typedef struct _ENUM_SERVICE_STATUS_PROCESSA
{
  /* 0x0000 */ char* lpServiceName;
  /* 0x0004 */ char* lpDisplayName;
  /* 0x0008 */ struct _SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA, *PENUM_SERVICE_STATUS_PROCESSA; /* size: 0x002c */

