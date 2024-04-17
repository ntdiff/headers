typedef enum _KTHREAD_CORE_ISOLATION_REASON
{
  KThreadCoreIsolationReasonSimulation = 0,
  KThreadCoreIsolationReasonMitigationPolicy = 1,
  KThreadCoreIsolationReasonMax = 2,
} KTHREAD_CORE_ISOLATION_REASON, *PKTHREAD_CORE_ISOLATION_REASON;

