typedef enum _WORKERFACTORYINFOCLASS
{
  WorkerFactoryTimeout = 0,
  WorkerFactoryRetryTimeout = 1,
  WorkerFactoryIdleTimeout = 2,
  WorkerFactoryBindingCount = 3,
  WorkerFactoryThreadMinimum = 4,
  WorkerFactoryThreadMaximum = 5,
  WorkerFactoryPaused = 6,
  WorkerFactoryBasicInformation = 7,
  WorkerFactoryAdjustThreadGoal = 8,
  WorkerFactoryCallbackType = 9,
  WorkerFactoryStackInformation = 10,
  WorkerFactoryThreadBasePriority = 11,
  WorkerFactoryTimeoutWaiters = 12,
  MaxWorkerFactoryInfoClass = 13,
} WORKERFACTORYINFOCLASS, *PWORKERFACTORYINFOCLASS;

