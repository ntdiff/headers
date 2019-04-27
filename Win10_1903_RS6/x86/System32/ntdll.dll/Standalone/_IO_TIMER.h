typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _IO_TIMER
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short TimerFlag;
  /* 0x0004 */ struct _LIST_ENTRY TimerList;
  /* 0x000c */ void* TimerRoutine /* function */;
  /* 0x0010 */ void* Context;
  /* 0x0014 */ struct _DEVICE_OBJECT* DeviceObject;
} IO_TIMER, *PIO_TIMER; /* size: 0x0018 */

