typedef enum _PEP_WORK_TYPE
{
  PepWorkActiveComplete = 0,
  PepWorkRequestIdleState = 1,
  PepWorkDevicePower = 2,
  PepWorkRequestPowerControl = 3,
  PepWorkDeviceIdle = 4,
  PepWorkCompleteIdleState = 5,
  PepWorkCompletePerfState = 6,
  PepWorkAcpiNotify = 7,
  PepWorkAcpiEvaluateControlMethodComplete = 8,
  PepWorkMax = 9,
} PEP_WORK_TYPE, *PPEP_WORK_TYPE;

typedef struct _PEP_WORK_ACTIVE_COMPLETE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long Component;
} PEP_WORK_ACTIVE_COMPLETE, *PPEP_WORK_ACTIVE_COMPLETE; /* size: 0x0008 */

typedef struct _PEP_WORK_IDLE_STATE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long Component;
  /* 0x0008 */ unsigned long State;
} PEP_WORK_IDLE_STATE, *PPEP_WORK_IDLE_STATE; /* size: 0x000c */

typedef struct _PEP_WORK_DEVICE_POWER
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned char PowerRequired;
  /* 0x0005 */ char __PADDING__[3];
} PEP_WORK_DEVICE_POWER, *PPEP_WORK_DEVICE_POWER; /* size: 0x0008 */

typedef struct _PEP_WORK_POWER_CONTROL
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ const struct _GUID* PowerControlCode;
  /* 0x0008 */ void* RequestContext;
  /* 0x000c */ void* InBuffer;
  /* 0x0010 */ unsigned long InBufferSize;
  /* 0x0014 */ void* OutBuffer;
  /* 0x0018 */ unsigned long OutBufferSize;
} PEP_WORK_POWER_CONTROL, *PPEP_WORK_POWER_CONTROL; /* size: 0x001c */

typedef struct _PEP_WORK_DEVICE_IDLE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned char IgnoreIdleTimeout;
  /* 0x0005 */ char __PADDING__[3];
} PEP_WORK_DEVICE_IDLE, *PPEP_WORK_DEVICE_IDLE; /* size: 0x0008 */

typedef struct _PEP_WORK_COMPLETE_IDLE_STATE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long Component;
} PEP_WORK_COMPLETE_IDLE_STATE, *PPEP_WORK_COMPLETE_IDLE_STATE; /* size: 0x0008 */

typedef struct _PEP_WORK_COMPLETE_PERF_STATE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long Component;
  /* 0x0008 */ unsigned char Succeeded;
  /* 0x0009 */ char __PADDING__[3];
} PEP_WORK_COMPLETE_PERF_STATE, *PPEP_WORK_COMPLETE_PERF_STATE; /* size: 0x000c */

typedef struct _PEP_WORK_ACPI_NOTIFY
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long NotifyCode;
} PEP_WORK_ACPI_NOTIFY, *PPEP_WORK_ACPI_NOTIFY; /* size: 0x0008 */

typedef struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long CompletionFlags;
  /* 0x0008 */ long MethodStatus;
  /* 0x000c */ void* CompletionContext;
  /* 0x0010 */ unsigned long OutputArgumentSize;
  /* 0x0014 */ struct _ACPI_METHOD_ARGUMENT_V1* OutputArguments;
} PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE, *PPEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE; /* size: 0x0018 */

typedef struct _PEP_WORK_INFORMATION
{
  /* 0x0000 */ enum _PEP_WORK_TYPE WorkType;
  union
  {
    /* 0x0004 */ struct _PEP_WORK_ACTIVE_COMPLETE ActiveComplete;
    /* 0x0004 */ struct _PEP_WORK_IDLE_STATE IdleState;
    /* 0x0004 */ struct _PEP_WORK_DEVICE_POWER DevicePower;
    /* 0x0004 */ struct _PEP_WORK_POWER_CONTROL PowerControl;
    /* 0x0004 */ struct _PEP_WORK_DEVICE_IDLE DeviceIdle;
    /* 0x0004 */ struct _PEP_WORK_COMPLETE_IDLE_STATE CompleteIdleState;
    /* 0x0004 */ struct _PEP_WORK_COMPLETE_PERF_STATE CompletePerfState;
    /* 0x0004 */ struct _PEP_WORK_ACPI_NOTIFY AcpiNotify;
    struct
    {
      /* 0x0004 */ struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE ControlMethodComplete;
      /* 0x001c */ long __PADDING__[1];
    }; /* size: 0x001c */
  }; /* size: 0x001c */
} PEP_WORK_INFORMATION, *PPEP_WORK_INFORMATION; /* size: 0x0020 */

