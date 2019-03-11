enum POWER_ACTION
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8,
};

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
  PolicyImmediateDozeS4Predicted = 11,
  PolicyImmediateDozeS4PredictedNoWake = 12,
  PolicyImmediateDozeS4AdaptiveBudget = 13,
  PolicyImmediateDozeS4AdaptiveReserveNoWake = 14,
  PolicySystemInitiatedShutdown = 15,
  PolicyDeviceMax = 16,
};

enum SYSTEM_POWER_CONDITION
{
  PoAc = 0,
  PoDc = 1,
  PoHot = 2,
  PoConditionMaximum = 3,
};

struct BATTERY_REPORTING_SCALE
{
  /* 0x0000 */ unsigned long Granularity;
  /* 0x0004 */ unsigned long Capacity;
}; /* size: 0x0008 */

struct SYSTEM_POWER_CAPABILITIES
{
  /* 0x0000 */ unsigned char PowerButtonPresent;
  /* 0x0001 */ unsigned char SleepButtonPresent;
  /* 0x0002 */ unsigned char LidPresent;
  /* 0x0003 */ unsigned char SystemS1;
  /* 0x0004 */ unsigned char SystemS2;
  /* 0x0005 */ unsigned char SystemS3;
  /* 0x0006 */ unsigned char SystemS4;
  /* 0x0007 */ unsigned char SystemS5;
  /* 0x0008 */ unsigned char HiberFilePresent;
  /* 0x0009 */ unsigned char FullWake;
  /* 0x000a */ unsigned char VideoDimPresent;
  /* 0x000b */ unsigned char ApmPresent;
  /* 0x000c */ unsigned char UpsPresent;
  /* 0x000d */ unsigned char ThermalControl;
  /* 0x000e */ unsigned char ProcessorThrottle;
  /* 0x000f */ unsigned char ProcessorMinThrottle;
  /* 0x0010 */ unsigned char ProcessorMaxThrottle;
  /* 0x0011 */ unsigned char FastSystemS4;
  /* 0x0012 */ unsigned char Hiberboot;
  /* 0x0013 */ unsigned char WakeAlarmPresent;
  /* 0x0014 */ unsigned char AoAc;
  /* 0x0015 */ unsigned char DiskSpinDown;
  /* 0x0016 */ unsigned char HiberFileType;
  /* 0x0017 */ unsigned char AoAcConnectivitySupported;
  /* 0x0018 */ unsigned char spare3[6];
  /* 0x001e */ unsigned char SystemBatteriesPresent;
  /* 0x001f */ unsigned char BatteriesAreShortTerm;
  /* 0x0020 */ struct BATTERY_REPORTING_SCALE BatteryScale[3];
  /* 0x0038 */ enum _SYSTEM_POWER_STATE AcOnLineWake;
  /* 0x003c */ enum _SYSTEM_POWER_STATE SoftLidWake;
  /* 0x0040 */ enum _SYSTEM_POWER_STATE RtcWake;
  /* 0x0044 */ enum _SYSTEM_POWER_STATE MinDeviceWakeState;
  /* 0x0048 */ enum _SYSTEM_POWER_STATE DefaultLowLatencyWake;
}; /* size: 0x004c */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
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
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
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
    struct
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

typedef enum _POP_POWER_ACTION_WATCHDOG_STATE
{
  PopPowerActionWatchdogStateDisabled = 0,
  PopPowerActionWatchdogStateTransitioning = 1,
  PopPowerActionWatchdogStateResuming = 2,
  PopPowerActionWatchdogStateMax = 3,
} POP_POWER_ACTION_WATCHDOG_STATE, *PPOP_POWER_ACTION_WATCHDOG_STATE;

typedef struct _POP_POWER_ACTION
{
  /* 0x0000 */ unsigned char Updates;
  /* 0x0001 */ unsigned char State;
  /* 0x0002 */ unsigned char Shutdown;
  /* 0x0004 */ enum POWER_ACTION Action;
  /* 0x0008 */ enum _SYSTEM_POWER_STATE LightestState;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ long Status;
  /* 0x0014 */ enum POWER_POLICY_DEVICE_TYPE DeviceType;
  /* 0x0018 */ unsigned long DeviceTypeFlags;
  /* 0x001c */ unsigned char IrpMinor;
  /* 0x001d */ unsigned char Waking;
  /* 0x0020 */ enum _SYSTEM_POWER_STATE SystemState;
  /* 0x0024 */ enum _SYSTEM_POWER_STATE NextSystemState;
  /* 0x0028 */ enum _SYSTEM_POWER_STATE EffectiveSystemState;
  /* 0x002c */ enum _SYSTEM_POWER_STATE CurrentSystemState;
  /* 0x0030 */ struct _POP_SHUTDOWN_BUG_CHECK* ShutdownBugCode;
  /* 0x0034 */ struct _POP_DEVICE_SYS_STATE* DevState;
  /* 0x0038 */ struct _POP_HIBER_CONTEXT* HiberContext;
  /* 0x0040 */ unsigned __int64 WakeTime;
  /* 0x0048 */ unsigned __int64 SleepTime;
  /* 0x0050 */ unsigned __int64 WakeFirstUnattendedTime;
  /* 0x0058 */ enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;
  /* 0x0060 */ struct
  {
    /* 0x0060 */ unsigned __int64 RequestedTime;
    /* 0x0068 */ unsigned __int64 ProgrammedTime;
    /* 0x0070 */ struct _DIAGNOSTIC_BUFFER* TimerInfo;
    /* 0x0074 */ long __PADDING__[1];
  } /* size: 0x0018 */ WakeAlarm[3];
  /* 0x00a8 */ unsigned char WakeAlarmPaused;
  /* 0x00b0 */ unsigned __int64 WakeAlarmLastTime;
  /* 0x00b8 */ unsigned __int64 DozeDeferralStartTime;
  /* 0x00c0 */ struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities;
  /* 0x010c */ struct _KDPC WatchdogDpc;
  /* 0x0130 */ struct _KTIMER WatchdogTimer;
  /* 0x0158 */ unsigned char WatchdogInitialized;
  /* 0x015c */ enum _POP_POWER_ACTION_WATCHDOG_STATE WatchdogState;
  /* 0x0160 */ unsigned __int64 WatchdogStartTime;
  /* 0x0168 */ struct _KTHREAD* ActionWorkerThread;
  /* 0x016c */ struct _KTHREAD* PromoteActionWorkerThread;
  /* 0x0170 */ struct _KTHREAD* UnlockAfterSleepWorkerThread;
  /* 0x0174 */ long __PADDING__[1];
} POP_POWER_ACTION, *PPOP_POWER_ACTION; /* size: 0x0178 */

