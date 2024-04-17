typedef enum _WORKER_FACTORY_CALLBACK_CLASS
{
  WorkerFactoryCallbackNormal = 0,
  WorkerFactoryCallbackLongRunning = 1,
  WorkerFactoryCallbackIndependent = 2,
  WorkerFactoryCallbackDetectedUnrecoverableError = 3,
} WORKER_FACTORY_CALLBACK_CLASS, *PWORKER_FACTORY_CALLBACK_CLASS;

