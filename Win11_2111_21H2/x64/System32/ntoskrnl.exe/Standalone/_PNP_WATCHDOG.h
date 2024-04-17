typedef enum _PNP_WATCHDOG_TYPE
{
  PNP_EVENT_WORKER_WATCHDOG = 1,
  PNP_DEVICE_COMPLETION_QUEUE_WATCHDOG = 2,
  PNP_DELAYED_REMOVE_WORKER_WATCHDOG = 3,
  PNP_ADD_DEVICE_WATCHDOG = 4,
  PNP_DRIVER_ENTRY_WATCHDOG = 5,
} PNP_WATCHDOG_TYPE, *PPNP_WATCHDOG_TYPE;

typedef struct _PNP_WATCHDOG
{
  /* 0x0000 */ unsigned __int64 WatchdogStart;
  /* 0x0008 */ struct _WDT_HANDLE* WatchdogTimer;
  /* 0x0010 */ enum _PNP_WATCHDOG_TYPE WatchdogContextType;
  /* 0x0018 */ void* WatchdogContext;
  /* 0x0020 */ unsigned char TriggerEventLogged;
  /* 0x0021 */ char __PADDING__[7];
} PNP_WATCHDOG, *PPNP_WATCHDOG; /* size: 0x0028 */

