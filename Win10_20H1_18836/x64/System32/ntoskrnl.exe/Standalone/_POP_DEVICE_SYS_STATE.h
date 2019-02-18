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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PO_NOTIFY_ORDER_LEVEL
{
  /* 0x0000 */ unsigned long DeviceCount;
  /* 0x0004 */ unsigned long ActiveCount;
  /* 0x0008 */ struct _LIST_ENTRY WaitSleep;
  /* 0x0018 */ struct _LIST_ENTRY ReadySleep;
  /* 0x0028 */ struct _LIST_ENTRY ReadyS0;
  /* 0x0038 */ struct _LIST_ENTRY WaitS0;
} PO_NOTIFY_ORDER_LEVEL, *PPO_NOTIFY_ORDER_LEVEL; /* size: 0x0048 */

typedef struct _PO_DEVICE_NOTIFY_ORDER
{
  /* 0x0000 */ unsigned char Locked;
  /* 0x0008 */ struct _DEVICE_OBJECT** WarmEjectPdoPointer;
  /* 0x0010 */ struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5];
  /* 0x0178 */ unsigned long Flags;
  /* 0x017c */ long __PADDING__[1];
} PO_DEVICE_NOTIFY_ORDER, *PPO_DEVICE_NOTIFY_ORDER; /* size: 0x0180 */

typedef struct _POP_DEVICE_SYS_STATE
{
  /* 0x0000 */ unsigned char IrpMinor;
  /* 0x0004 */ enum _SYSTEM_POWER_STATE SystemState;
  /* 0x0008 */ unsigned __int64 SpinLock;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0018 */ struct _KEVENT* AbortEvent;
  /* 0x0020 */ struct _KSEMAPHORE* ReadySemaphore;
  /* 0x0028 */ struct _KSEMAPHORE* FinishedSemaphore;
  /* 0x0030 */ struct _PO_DEVICE_NOTIFY_ORDER Order;
  /* 0x01b0 */ struct _LIST_ENTRY Pending;
  /* 0x01c0 */ long Status;
  /* 0x01c8 */ struct _DEVICE_OBJECT* FailedDevice;
  /* 0x01d0 */ unsigned char Waking;
  /* 0x01d1 */ unsigned char Cancelled;
  /* 0x01d2 */ unsigned char IgnoreErrors;
  /* 0x01d3 */ unsigned char IgnoreNotImplemented;
  /* 0x01d4 */ unsigned char TimeRefreshLockAcquired;
  /* 0x01d5 */ char __PADDING__[3];
} POP_DEVICE_SYS_STATE, *PPOP_DEVICE_SYS_STATE; /* size: 0x01d8 */

