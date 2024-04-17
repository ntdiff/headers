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
  WorkerFactoryLongRunningSwitch = 9,
  WorkerFactoryStackInformation = 10,
  MaxWorkerFactoryInfoClass = 11,
} WORKERFACTORYINFOCLASS, *PWORKERFACTORYINFOCLASS;

