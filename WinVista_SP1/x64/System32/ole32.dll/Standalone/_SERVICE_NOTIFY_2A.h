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

typedef struct _SERVICE_NOTIFY_2A
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ void* pfnNotifyCallback /* function */;
  /* 0x0010 */ void* pContext;
  /* 0x0018 */ unsigned long dwNotificationStatus;
  /* 0x001c */ struct _SERVICE_STATUS_PROCESS ServiceStatus;
  /* 0x0040 */ unsigned long dwNotificationTriggered;
  /* 0x0048 */ char* pszServiceNames;
} SERVICE_NOTIFY_2A, *PSERVICE_NOTIFY_2A; /* size: 0x0050 */

