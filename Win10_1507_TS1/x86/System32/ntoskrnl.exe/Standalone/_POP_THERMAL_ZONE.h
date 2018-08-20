typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

enum POWER_POLICY_DEVICE_TYPE
{
  PolicyDeviceSystemButton = 0,
  PolicyDeviceThermalZone = 1,
  PolicyDeviceBattery = 2,
  PolicyDeviceMemory = 3,
  PolicyInitiatePowerActionAPI = 4,
  PolicySetPowerStateAPI = 5,
  PolicyImmediateDozeS4 = 6,
  PolicySystemIdle = 7,
  PolicyDeviceWakeAlarm = 8,
  PolicyDeviceFan = 9,
  PolicyCsBatterySaver = 10,
  PolicyDeviceMax = 11,
};

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _POP_POLICY_DEVICE
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ enum POWER_POLICY_DEVICE_TYPE DeviceType;
  /* 0x000c */ void* Notification;
  /* 0x0010 */ struct _UNICODE_STRING Name;
  /* 0x0018 */ struct _DEVICE_OBJECT* Device;
  /* 0x001c */ struct _IRP* Irp;
} POP_POLICY_DEVICE, *PPOP_POLICY_DEVICE; /* size: 0x0020 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _THERMAL_INFORMATION_EX
{
  /* 0x0000 */ unsigned long ThermalStamp;
  /* 0x0004 */ unsigned long ThermalConstant1;
  /* 0x0008 */ unsigned long ThermalConstant2;
  /* 0x000c */ unsigned long SamplingPeriod;
  /* 0x0010 */ unsigned long CurrentTemperature;
  /* 0x0014 */ unsigned long PassiveTripPoint;
  /* 0x0018 */ unsigned long ThermalStandbyTripPoint;
  /* 0x001c */ unsigned long CriticalTripPoint;
  /* 0x0020 */ unsigned char ActiveTripPointCount;
  /* 0x0024 */ unsigned long ActiveTripPoint[10];
  /* 0x004c */ unsigned long S4TransitionTripPoint;
  /* 0x0050 */ unsigned long MinimumThrottle;
  /* 0x0054 */ unsigned long OverThrottleThreshold;
} THERMAL_INFORMATION_EX, *PTHERMAL_INFORMATION_EX; /* size: 0x0058 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _THERMAL_POLICY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char WaitForUpdate;
  /* 0x0005 */ unsigned char Hibernate;
  /* 0x0006 */ unsigned char Critical;
  /* 0x0007 */ unsigned char ThermalStandby;
  /* 0x0008 */ unsigned long ActivationReasons;
  /* 0x000c */ unsigned long PassiveLimit;
  /* 0x0010 */ unsigned long ActiveLevel;
  /* 0x0014 */ unsigned char OverThrottled;
  /* 0x0015 */ char __PADDING__[3];
} THERMAL_POLICY, *PTHERMAL_POLICY; /* size: 0x0018 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _POP_RW_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _KTHREAD* Thread;
} POP_RW_LOCK, *PPOP_RW_LOCK; /* size: 0x0008 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _POP_THERMAL_TELEMETRY_TRACKER
{
  /* 0x0000 */ unsigned char AccountingDisabled;
  /* 0x0008 */ unsigned __int64 LastPassiveUpdateTime;
  /* 0x0010 */ unsigned __int64 TotalPassiveTime[20];
  /* 0x00b0 */ unsigned __int64 PassiveTimeSnap[20];
} POP_THERMAL_TELEMETRY_TRACKER, *PPOP_THERMAL_TELEMETRY_TRACKER; /* size: 0x0150 */

typedef struct _POP_THERMAL_ZONE
{
  union
  {
    /* 0x0000 */ struct _POP_POLICY_DEVICE PolicyDevice;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY Link;
      /* 0x0008 */ enum POWER_POLICY_DEVICE_TYPE DeviceType;
      /* 0x000c */ void* Notification;
      /* 0x0010 */ struct _UNICODE_STRING Name;
      /* 0x0018 */ struct _DEVICE_OBJECT* Device;
      /* 0x001c */ struct _IRP* Irp;
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
  /* 0x0020 */ unsigned char State;
  /* 0x0021 */ unsigned char Flags;
  /* 0x0022 */ unsigned char Removing;
  /* 0x0023 */ unsigned char Mode;
  /* 0x0024 */ unsigned char PendingMode;
  /* 0x0025 */ unsigned char ActivePoint;
  /* 0x0026 */ unsigned char PendingActivePoint;
  /* 0x0027 */ unsigned char Critical;
  /* 0x0028 */ unsigned char ThermalStandby;
  /* 0x0029 */ unsigned char OverThrottled;
  /* 0x002c */ long HighPrecisionThrottle;
  /* 0x0030 */ long Throttle;
  /* 0x0034 */ long PendingThrottle;
  /* 0x0038 */ unsigned long ThrottleReasons;
  /* 0x0040 */ unsigned __int64 LastTime;
  /* 0x0048 */ unsigned long SampleRate;
  /* 0x004c */ unsigned long LastTemp;
  /* 0x0050 */ struct _KTIMER PassiveTimer;
  /* 0x0078 */ struct _KDPC PassiveDpc;
  /* 0x0098 */ struct _THERMAL_INFORMATION_EX Info;
  /* 0x00f0 */ union _LARGE_INTEGER InfoLastUpdateTime;
  /* 0x00f8 */ struct _THERMAL_POLICY Policy;
  /* 0x0110 */ unsigned char PolicyDriver;
  /* 0x0118 */ unsigned __int64 LastActiveStartTime;
  /* 0x0120 */ unsigned __int64 LastPassiveStartTime;
  /* 0x0128 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0138 */ struct _POP_RW_LOCK Lock;
  /* 0x0140 */ struct _KEVENT ZoneStopped;
  /* 0x0150 */ struct _KEVENT TemperatureUpdated;
  /* 0x0160 */ unsigned long InstanceId;
  /* 0x0168 */ struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;
} POP_THERMAL_ZONE, *PPOP_THERMAL_ZONE; /* size: 0x02b8 */

