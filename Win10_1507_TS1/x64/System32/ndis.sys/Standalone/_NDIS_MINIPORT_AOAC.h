typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _NDIS_TMP_REF_REASON
{
  NdisAoAcTempRefNone = 0,
  NdisAoAcTempRefInit = 1,
  NdisAoAcTempRefPmInit = 2,
  NdisAoAcTempRefWake = 3,
  NdisAoAcTempRefLastDeref = 4,
  NdisAoAcTempRefClearStop = 5,
} NDIS_TMP_REF_REASON, *PNDIS_TMP_REF_REASON;

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
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

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
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned long Processor;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _NDIS_TIMER
{
  /* 0x0000 */ struct _KTIMER Timer;
  /* 0x0040 */ struct _KDPC Dpc;
} NDIS_TIMER, *PNDIS_TIMER; /* size: 0x0080 */

typedef struct _NDIS_WORK_ITEM
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ void* Routine /* function */;
  /* 0x0010 */ unsigned char WrapperReserved[64];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM; /* size: 0x0050 */

typedef enum _NDIS_MINIPORT_EVENT
{
  NdisMEvent_Unknown = 0,
  NdisMEventDx_SystemSleep = 1,
  NdisMEventDx_NicQuiet = 2,
  NdisMEventDx_SSIdle = 3,
  NdisMEventDx_D3DTimeout = 4,
  NdisMEventD0_SystemResume = 5,
  NdisMEventD0_NicActive = 6,
  NdisMEventD0_AoAcWake = 7,
  NdisMEventD0_SSResume = 8,
  NdisMEventD0_D3DCancel = 9,
  NdisMEventD0_D3DWake = 10,
  NdisMEventD0_D3DResume = 11,
  NdisMEventD0_Complete = 12,
  NdisMEventD0_SSComplete = 13,
  NdisMEventDx_Complete = 14,
  NdisMEventDx_SSComplete = 15,
  NdisMEventD0_AoAcSurpriseWake = 20,
  NdisMEvent_DeviceAdded = 31,
  NdisMEvent_DeviceStart = 32,
  NdisMEvent_DeviceQueryRemove = 33,
  NdisMEvent_DeviceCancelRemove = 34,
  NdisMEvent_DeviceRemove = 35,
  NdisMEvent_DeviceSurpriseRemoval = 36,
  NdisMEvent_DeviceQueryStop = 37,
  NdisMEvent_DeviceCancelStop = 38,
  NdisMEvent_DeviceStop = 39,
  NdisMEvent_MiniportInitialized = 51,
  NdisMEvent_MiniportHalted = 52,
  NdisMEvent_MiniportPaused = 53,
  NdisMEvent_MiniportRestarted = 54,
  NdisMEvent_MiniportPmInitialized = 55,
  NdisMEventErr_Min = 70,
  NdisMEventErr_UserRequested = 70,
  NdisMEventErr_MiniportRequested = 71,
  NdisMEventErr_FailedIMInitDevice = 72,
  NdisMEventErr_FailedRestart = 73,
  NdisMEventErr_FailedPowerD0 = 74,
  NdisMEventErr_FailedPowerDx = 75,
  NdisMEventErr_UninstalledByUsermode = 76,
  NdisMEventErr_Max = 76,
} NDIS_MINIPORT_EVENT, *PNDIS_MINIPORT_EVENT;

typedef enum _NDIS_NIC_ACTIVE_STATE
{
  NdisNicActive = 0,
  NdisNicSuspending = 1,
  NdisNicQuiet = 2,
  NdisNicResuming = 3,
  NdisNicError = 4,
} NDIS_NIC_ACTIVE_STATE, *PNDIS_NIC_ACTIVE_STATE;

typedef struct _NDIS_SS_STOP_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long QueryRemove : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long DeviceRemove : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long SurpriseRemove : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long QueryStop : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long DeviceStop : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long SystemPower : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long NicQuiet : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long PnPOp : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long NotStarted : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long MiniportFatalError : 1; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_SS_STOP_FLAGS, *PNDIS_SS_STOP_FLAGS; /* size: 0x0004 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _NDIS_AOAC_COMPONENT_REF_TIME
{
  /* 0x0000 */ unsigned __int64 TotalRefTime;
  /* 0x0008 */ unsigned __int64 CurrentRefStartTime;
} NDIS_AOAC_COMPONENT_REF_TIME, *PNDIS_AOAC_COMPONENT_REF_TIME; /* size: 0x0010 */

typedef struct _NDIS_MINIPORT_CS_TRAFFIC_STATS
{
  /* 0x0000 */ unsigned __int64 IfInUnicastPackets;
  /* 0x0008 */ unsigned __int64 IfOutUnicastPackets;
  /* 0x0010 */ unsigned __int64 IfInMulticastPackets;
  /* 0x0018 */ unsigned __int64 IfOutMulticastPackets;
  /* 0x0020 */ unsigned __int64 IfInBroadcastPackets;
  /* 0x0028 */ unsigned __int64 IfOutBroadcastPackets;
} NDIS_MINIPORT_CS_TRAFFIC_STATS, *PNDIS_MINIPORT_CS_TRAFFIC_STATS; /* size: 0x0030 */

typedef struct _NDIS_MINIPORT_AOAC
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ struct _LIST_ENTRY HandleList;
  /* 0x0018 */ long HandleListCount;
  /* 0x0020 */ struct _LIST_ENTRY PendingIrpList;
  /* 0x0030 */ long PendingIrpListCount;
  /* 0x0034 */ long ActiveRef;
  /* 0x0038 */ enum _NDIS_TMP_REF_REASON TempRefReason;
  /* 0x0040 */ struct _NDIS_TIMER TempRefTimer;
  /* 0x00c0 */ struct _NDIS_WORK_ITEM TempRefWorkItem;
  /* 0x0110 */ unsigned char TempDerefInProgress;
  /* 0x0114 */ unsigned long DerefTimeoutMilliseconds;
  /* 0x0118 */ unsigned char WakeWorkItemScheduled;
  /* 0x011a */ enum _NDIS_MINIPORT_EVENT WakeWorkItemWakeReason;
  /* 0x0120 */ struct _NDIS_WORK_ITEM WakeWorkItem;
  /* 0x0170 */ enum _NDIS_NIC_ACTIVE_STATE ActiveState;
  /* 0x0174 */ struct _NDIS_SS_STOP_FLAGS StopFlags;
  /* 0x0178 */ unsigned char SSIdleConfirmed;
  /* 0x0179 */ unsigned char SSIdleConfirmInProgress;
  /* 0x017a */ unsigned char RemoteWakeEnabled;
  /* 0x017b */ unsigned char DeviceGone;
  /* 0x0180 */ struct _KEVENT PowerSuspendCompleteEvent;
  /* 0x0198 */ struct _KEVENT NicQuietCheckCompleteEvent;
  /* 0x01b0 */ unsigned __int64 StartTime;
  /* 0x01b8 */ unsigned short LastUnexpectedFailureLine[2];
  /* 0x01bc */ unsigned char TakeStartToRefTime;
  /* 0x01c0 */ union _LARGE_INTEGER LastWakeTime;
  /* 0x01c8 */ unsigned char TakeWakeToRefTime;
  /* 0x01cc */ long ComponentRefCounts[14];
  /* 0x0208 */ struct _NDIS_AOAC_COMPONENT_REF_TIME CsRefTimes[14];
  /* 0x02e8 */ long CsPowerTransitions;
  /* 0x02f0 */ unsigned __int64 TotalCsActiveTime;
  /* 0x02f8 */ unsigned __int64 TotalCsResiliencyTime;
  /* 0x0300 */ unsigned __int64 CurrentActiveStartTime;
  /* 0x0308 */ unsigned long CsSurpriseWakes;
  /* 0x030c */ unsigned long CsSpuriousWakes;
  /* 0x0310 */ struct _NDIS_MINIPORT_CS_TRAFFIC_STATS CsTrafficStats[3];
} NDIS_MINIPORT_AOAC, *PNDIS_MINIPORT_AOAC; /* size: 0x03a0 */

