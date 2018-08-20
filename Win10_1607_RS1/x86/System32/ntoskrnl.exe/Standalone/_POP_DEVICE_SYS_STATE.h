typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PO_NOTIFY_ORDER_LEVEL
{
  /* 0x0000 */ unsigned long DeviceCount;
  /* 0x0004 */ unsigned long ActiveCount;
  /* 0x0008 */ struct _LIST_ENTRY WaitSleep;
  /* 0x0010 */ struct _LIST_ENTRY ReadySleep;
  /* 0x0018 */ struct _LIST_ENTRY ReadyS0;
  /* 0x0020 */ struct _LIST_ENTRY WaitS0;
} PO_NOTIFY_ORDER_LEVEL, *PPO_NOTIFY_ORDER_LEVEL; /* size: 0x0028 */

typedef struct _PO_DEVICE_NOTIFY_ORDER
{
  /* 0x0000 */ unsigned char Locked;
  /* 0x0004 */ struct _DEVICE_OBJECT** WarmEjectPdoPointer;
  /* 0x0008 */ struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5];
} PO_DEVICE_NOTIFY_ORDER, *PPO_DEVICE_NOTIFY_ORDER; /* size: 0x00d0 */

typedef struct _POP_DEVICE_SYS_STATE
{
  /* 0x0000 */ unsigned char IrpMinor;
  /* 0x0004 */ enum _SYSTEM_POWER_STATE SystemState;
  /* 0x0008 */ unsigned long SpinLock;
  /* 0x000c */ struct _KTHREAD* Thread;
  /* 0x0010 */ struct _KEVENT* AbortEvent;
  /* 0x0014 */ struct _KSEMAPHORE* ReadySemaphore;
  /* 0x0018 */ struct _KSEMAPHORE* FinishedSemaphore;
  /* 0x001c */ struct _PO_DEVICE_NOTIFY_ORDER Order;
  /* 0x00ec */ struct _LIST_ENTRY Pending;
  /* 0x00f4 */ long Status;
  /* 0x00f8 */ struct _DEVICE_OBJECT* FailedDevice;
  /* 0x00fc */ unsigned char Waking;
  /* 0x00fd */ unsigned char Cancelled;
  /* 0x00fe */ unsigned char IgnoreErrors;
  /* 0x00ff */ unsigned char IgnoreNotImplemented;
  /* 0x0100 */ unsigned char TimeRefreshLockAcquired;
  /* 0x0101 */ char __PADDING__[3];
} POP_DEVICE_SYS_STATE, *PPOP_DEVICE_SYS_STATE; /* size: 0x0104 */

