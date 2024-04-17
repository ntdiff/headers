typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

typedef enum _TAG_UNNAMED_157
{
  TIMEOUT_INACTIVE = 0,
  TIMEOUT_PENDING = 1,
  TIMEOUT_SUSPENDED = 2,
  TIMEOUT_HAPPENING = 3,
  TIMEOUT_FORCED_SHUTDOWN = 4,
} TAG_UNNAMED_157, *PTAG_UNNAMED_157;

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

class CSurrogateProcessActivator
{
  /* 0x0028 */ long m_lRC;
  /* 0x002c */ void* m_hInitThread;
  /* 0x0030 */ void* m_hStopPingingSCM;
  union
  {
    struct
    {
      /* 0x0000 */ const int PING_INTERVAL;
      /* 0x0034 */ struct IComProcessInfo* m_pIComProcessInfo;
      /* 0x0038 */ struct IProcessServerInfo* m_pIProcessServerInfo;
      /* 0x003c */ class CStdIdentity* m_pStdID;
      /* 0x0040 */ struct ISurrogate* m_pISurrogate;
      /* 0x0044 */ struct HINSTANCE__* m_hCOMSVCS;
      /* 0x0048 */ struct IServicesSink* m_pServices;
      /* 0x004c */ void* m_hInitCompleted;
      /* 0x0050 */ void* m_hFusionContext;
      /* 0x0054 */ unsigned long m_ulServicesPing;
      /* 0x0058 */ unsigned long m_ulInitTimeout;
    }; /* size: 0x002c */
    struct
    {
      /* 0x0000 */ const int TIMEOUT_SERVICES;
      /* 0x005c */ long m_lProcessRefCount;
      /* 0x0060 */ struct _RTL_CRITICAL_SECTION m_timeoutLock;
      /* 0x0078 */ int m_bLockValid;
      /* 0x007c */ void* m_hTimeoutEvent;
      /* 0x0080 */ enum _TAG_UNNAMED_157 m_timeoutState;
      /* 0x0084 */ unsigned long m_cActivations;
      /* 0x0088 */ unsigned long m_cMillisecondsTilDeath;
      /* 0x008c */ unsigned long m_cTimeoutPeriod;
      /* 0x0090 */ int m_bPaused;
    }; /* size: 0x003c */
    struct
    {
      /* 0x0000 */ const int TIMEOUT_SPINLOCK;
      /* 0x0094 */ int m_bInitNotified;
    }; /* size: 0x0008 */
    /* 0x0000 */ const int MAX_SRV_NAME_LEN;
  }; /* size: 0x003c */
  /* 0x0098 */ void* m_hNTServiceThread;
  /* 0x009c */ void* m_hServiceStarted;
  /* 0x00a0 */ struct SERVICE_STATUS_HANDLE__* m_hNTServiceHandle;
  /* 0x00a4 */ struct _SERVICE_STATUS m_NTServiceStatus;
  /* 0x00c0 */ struct _RTL_CRITICAL_SECTION m_serviceStatusLock;
  /* 0x00d8 */ int m_fServiceStatusLockValid;
  /* 0x00dc */ wchar_t m_NTServiceName[256];
}; /* size: 0x02dc */

