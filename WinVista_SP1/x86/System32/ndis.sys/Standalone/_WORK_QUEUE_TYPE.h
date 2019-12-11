typedef enum _WORK_QUEUE_TYPE
{
  CriticalWorkQueue = 0,
  DelayedWorkQueue = 1,
  HyperCriticalWorkQueue = 2,
  MaximumWorkQueue = 3,
} WORK_QUEUE_TYPE, *PWORK_QUEUE_TYPE;

