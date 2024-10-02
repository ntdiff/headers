typedef enum _PNP_WATCHDOG_TYPE
{
  PNP_WATCHDOG_NONE = 0,
  PNP_EVENT_WORKER_WATCHDOG = 1,
  PNP_DEVICE_COMPLETION_QUEUE_WATCHDOG = 2,
  PNP_DELAYED_REMOVE_WORKER_WATCHDOG = 3,
  PNP_ADD_DEVICE_WATCHDOG = 4,
  PNP_DRIVER_ENTRY_WATCHDOG = 5,
} PNP_WATCHDOG_TYPE, *PPNP_WATCHDOG_TYPE;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PNP_WATCHDOG
{
  /* 0x0000 */ unsigned __int64 WatchdogStart;
  /* 0x0008 */ struct _WDT_HANDLE* WatchdogTimer;
  /* 0x0010 */ enum _PNP_WATCHDOG_TYPE WatchdogContextType;
  /* 0x0018 */ void* WatchdogContext;
  /* 0x0020 */ unsigned char FirstChanceTriggered;
  /* 0x0021 */ unsigned char TelemetryGenerated;
  /* 0x0028 */ struct _UNICODE_STRING DriverToBlame;
  /* 0x0038 */ wchar_t DriverToBlameBuffer[1];
  /* 0x003a */ char __PADDING__[6];
} PNP_WATCHDOG, *PPNP_WATCHDOG; /* size: 0x0040 */

