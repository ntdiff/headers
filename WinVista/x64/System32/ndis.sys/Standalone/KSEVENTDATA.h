typedef enum _WORK_QUEUE_TYPE
{
  CriticalWorkQueue = 0,
  DelayedWorkQueue = 1,
  HyperCriticalWorkQueue = 2,
  MaximumWorkQueue = 3,
} WORK_QUEUE_TYPE, *PWORK_QUEUE_TYPE;

struct KSEVENTDATA
{
  /* 0x0000 */ unsigned long NotificationType;
  union
  {
    struct
    {
      /* 0x0008 */ void* Event;
      /* 0x0010 */ unsigned __int64 Reserved[2];
    } /* size: 0x0018 */ EventHandle;
    struct
    {
      /* 0x0008 */ void* Semaphore;
      /* 0x0010 */ unsigned long Reserved;
      /* 0x0014 */ long Adjustment;
    } /* size: 0x0010 */ SemaphoreHandle;
    struct
    {
      /* 0x0008 */ void* Event;
      /* 0x0010 */ long Increment;
      /* 0x0018 */ unsigned __int64 Reserved;
    } /* size: 0x0018 */ EventObject;
    struct
    {
      /* 0x0008 */ void* Semaphore;
      /* 0x0010 */ long Increment;
      /* 0x0014 */ long Adjustment;
    } /* size: 0x0010 */ SemaphoreObject;
    struct
    {
      /* 0x0008 */ struct _KDPC* Dpc;
      /* 0x0010 */ unsigned long ReferenceCount;
      /* 0x0018 */ unsigned __int64 Reserved;
    } /* size: 0x0018 */ Dpc;
    struct
    {
      /* 0x0008 */ struct _WORK_QUEUE_ITEM* WorkQueueItem;
      /* 0x0010 */ enum _WORK_QUEUE_TYPE WorkQueueType;
      /* 0x0018 */ unsigned __int64 Reserved;
    } /* size: 0x0018 */ WorkItem;
    struct
    {
      /* 0x0008 */ struct _WORK_QUEUE_ITEM* WorkQueueItem;
      /* 0x0010 */ void* KsWorkerObject;
      /* 0x0018 */ unsigned __int64 Reserved;
    } /* size: 0x0018 */ KsWorkItem;
    struct
    {
      /* 0x0008 */ struct _KSFILTER* Filter;
      /* 0x0010 */ unsigned __int64 Reserved[2];
    } /* size: 0x0018 */ KsFilterProcessing;
    struct
    {
      /* 0x0008 */ struct _KSPIN* Pin;
      /* 0x0010 */ unsigned __int64 Reserved[2];
    } /* size: 0x0018 */ KsPinProcessing;
    struct
    {
      /* 0x0008 */ void* Unused;
      /* 0x0010 */ __int64 Alignment[2];
    } /* size: 0x0018 */ Alignment;
  }; /* size: 0x0018 */
}; /* size: 0x0020 */

