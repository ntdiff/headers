typedef enum _EVENT_TYPE
{
  NotificationEvent = 0,
  SynchronizationEvent = 1,
} EVENT_TYPE, *PEVENT_TYPE;

typedef struct _EVENT_BASIC_INFORMATION
{
  /* 0x0000 */ enum _EVENT_TYPE EventType;
  /* 0x0004 */ long EventState;
} EVENT_BASIC_INFORMATION, *PEVENT_BASIC_INFORMATION; /* size: 0x0008 */

