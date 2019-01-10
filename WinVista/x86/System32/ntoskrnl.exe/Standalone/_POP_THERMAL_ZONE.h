typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
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
  /* 0x0024 */ long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

enum POP_POLICY_DEVICE_TYPE
{
  PolicyDeviceSystemButton = 0,
  PolicyDeviceThermalZone = 1,
  PolicyDeviceBattery = 2,
  PolicyDeviceMemory = 3,
  PolicyInitiatePowerActionAPI = 4,
  PolicySetPowerStateAPI = 5,
  PolicyImmediateDozeS4 = 6,
  PolicySystemIdle = 7,
  PolicyDeviceMax = 8,
};

typedef struct _POP_ACTION_TRIGGER
{
  /* 0x0000 */ enum POP_POLICY_DEVICE_TYPE Type;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _POP_TRIGGER_WAIT* Wait;
  union
  {
    struct
    {
      /* 0x000c */ unsigned long Level;
    } /* size: 0x0004 */ Battery;
    struct
    {
      /* 0x000c */ unsigned long Type;
    } /* size: 0x0004 */ Button;
  }; /* size: 0x0004 */
} POP_ACTION_TRIGGER, *PPOP_ACTION_TRIGGER; /* size: 0x0010 */

typedef struct _THERMAL_INFORMATION_EX
{
  /* 0x0000 */ unsigned long ThermalStamp;
  /* 0x0004 */ unsigned long ThermalConstant1;
  /* 0x0008 */ unsigned long ThermalConstant2;
  /* 0x000c */ unsigned long Processors;
  /* 0x0010 */ unsigned long SamplingPeriod;
  /* 0x0014 */ unsigned long CurrentTemperature;
  /* 0x0018 */ unsigned long PassiveTripPoint;
  /* 0x001c */ unsigned long CriticalTripPoint;
  /* 0x0020 */ unsigned char ActiveTripPointCount;
  /* 0x0024 */ unsigned long ActiveTripPoint[10];
  /* 0x004c */ unsigned long S4TransitionTripPoint;
} THERMAL_INFORMATION_EX, *PTHERMAL_INFORMATION_EX; /* size: 0x0050 */

typedef struct _POP_THERMAL_ZONE
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ unsigned char State;
  /* 0x0009 */ unsigned char Flags;
  /* 0x000a */ unsigned char Mode;
  /* 0x000b */ unsigned char PendingMode;
  /* 0x000c */ unsigned char ActivePoint;
  /* 0x000d */ unsigned char PendingActivePoint;
  /* 0x0010 */ long Throttle;
  /* 0x0018 */ unsigned __int64 LastTime;
  /* 0x0020 */ unsigned long SampleRate;
  /* 0x0024 */ unsigned long LastTemp;
  /* 0x0028 */ struct _KTIMER PassiveTimer;
  /* 0x0050 */ struct _KDPC PassiveDpc;
  /* 0x0070 */ struct _POP_ACTION_TRIGGER OverThrottled;
  /* 0x0080 */ struct _IRP* Irp;
  /* 0x0084 */ struct _THERMAL_INFORMATION_EX Info;
  /* 0x00d4 */ long __PADDING__[1];
} POP_THERMAL_ZONE, *PPOP_THERMAL_ZONE; /* size: 0x00d8 */

