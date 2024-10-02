typedef enum _KTHREAD_CORE_ISOLATION_REASON
{
  KThreadCoreIsolationReasonSimulation = 0,
  KThreadCoreIsolationReasonMitigationPolicy = 1,
  KThreadCoreIsolationReasonSecureCall = 2,
  KThreadCoreIsolationReasonMax = 3,
} KTHREAD_CORE_ISOLATION_REASON, *PKTHREAD_CORE_ISOLATION_REASON;

