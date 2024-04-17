typedef struct _PERIODIC_CAPTURE_STATE_GUIDS
{
  /* 0x0000 */ unsigned short ProviderCount;
  /* 0x0004 */ struct _GUID* Providers;
} PERIODIC_CAPTURE_STATE_GUIDS, *PPERIODIC_CAPTURE_STATE_GUIDS; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef enum _ETW_PERIODIC_TIMER_STATE
{
  EtwpPeriodicTimerUnset = 0,
  EtwpPeriodicTimerSet = 1,
} ETW_PERIODIC_TIMER_STATE, *PETW_PERIODIC_TIMER_STATE;

struct PERIODIC_CAPTURE_STATE_CONTEXT
{
  /* 0x0000 */ __int64 RelativeTimerDueTime;
  /* 0x0008 */ struct _EX_TIMER* Timer;
  /* 0x000c */ struct _PERIODIC_CAPTURE_STATE_GUIDS Guids;
  /* 0x0014 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0024 */ enum _ETW_PERIODIC_TIMER_STATE TimerState;
}; /* size: 0x0028 */

