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
      /* 0x0004 */ void* Event;
      /* 0x0008 */ unsigned long Reserved[2];
    } /* size: 0x000c */ EventHandle;
    struct
    {
      /* 0x0004 */ void* Semaphore;
      /* 0x0008 */ unsigned long Reserved;
      /* 0x000c */ long Adjustment;
    } /* size: 0x000c */ SemaphoreHandle;
    struct
    {
      /* 0x0004 */ void* Event;
      /* 0x0008 */ long Increment;
      /* 0x000c */ unsigned long Reserved;
    } /* size: 0x000c */ EventObject;
    struct
    {
      /* 0x0004 */ void* Semaphore;
      /* 0x0008 */ long Increment;
      /* 0x000c */ long Adjustment;
    } /* size: 0x000c */ SemaphoreObject;
    struct
    {
      /* 0x0004 */ struct _KDPC* Dpc;
      /* 0x0008 */ unsigned long ReferenceCount;
      /* 0x000c */ unsigned long Reserved;
    } /* size: 0x000c */ Dpc;
    struct
    {
      /* 0x0004 */ struct _WORK_QUEUE_ITEM* WorkQueueItem;
      /* 0x0008 */ enum _WORK_QUEUE_TYPE WorkQueueType;
      /* 0x000c */ unsigned long Reserved;
    } /* size: 0x000c */ WorkItem;
    struct
    {
      /* 0x0004 */ struct _WORK_QUEUE_ITEM* WorkQueueItem;
      /* 0x0008 */ void* KsWorkerObject;
      /* 0x000c */ unsigned long Reserved;
    } /* size: 0x000c */ KsWorkItem;
    struct
    {
      /* 0x0004 */ struct _KSFILTER* Filter;
      /* 0x0008 */ unsigned long Reserved[2];
    } /* size: 0x000c */ KsFilterProcessing;
    struct
    {
      /* 0x0004 */ struct _KSPIN* Pin;
      /* 0x0008 */ unsigned long Reserved[2];
    } /* size: 0x000c */ KsPinProcessing;
    struct
    {
      /* 0x0004 */ void* Unused;
      /* 0x0008 */ long Alignment[2];
    } /* size: 0x000c */ Alignment;
  }; /* size: 0x000c */
}; /* size: 0x0010 */

