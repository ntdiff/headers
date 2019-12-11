typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ char __PADDING__[5];
} REFERENCE, *PREFERENCE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
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

typedef enum _NET_IF_MEDIA_CONNECT_STATE
{
  MediaConnectStateUnknown = 0,
  MediaConnectStateConnected = 1,
  MediaConnectStateDisconnected = 2,
} NET_IF_MEDIA_CONNECT_STATE, *PNET_IF_MEDIA_CONNECT_STATE;

typedef enum _NET_IF_MEDIA_DUPLEX_STATE
{
  MediaDuplexStateUnknown = 0,
  MediaDuplexStateHalf = 1,
  MediaDuplexStateFull = 2,
} NET_IF_MEDIA_DUPLEX_STATE, *PNET_IF_MEDIA_DUPLEX_STATE;

typedef enum _NDIS_MEDIUM
{
  NdisMedium802_3 = 0,
  NdisMedium802_5 = 1,
  NdisMediumFddi = 2,
  NdisMediumWan = 3,
  NdisMediumLocalTalk = 4,
  NdisMediumDix = 5,
  NdisMediumArcnetRaw = 6,
  NdisMediumArcnet878_2 = 7,
  NdisMediumAtm = 8,
  NdisMediumWirelessWan = 9,
  NdisMediumIrda = 10,
  NdisMediumBpc = 11,
  NdisMediumCoWan = 12,
  NdisMedium1394 = 13,
  NdisMediumInfiniBand = 14,
  NdisMediumTunnel = 15,
  NdisMediumNative802_11 = 16,
  NdisMediumLoopback = 17,
  NdisMediumWiMAX = 18,
  NdisMediumIP = 19,
  NdisMediumMax = 20,
} NDIS_MEDIUM, *PNDIS_MEDIUM;

typedef enum _NDIS_INTERFACE_TYPE
{
  NdisInterfaceInternal = 0,
  NdisInterfaceIsa = 1,
  NdisInterfaceEisa = 2,
  NdisInterfaceMca = 3,
  NdisInterfaceTurboChannel = 4,
  NdisInterfacePci = 5,
  NdisInterfacePcMcia = 8,
  NdisInterfaceCBus = 9,
  NdisInterfaceMPIBus = 10,
  NdisInterfaceMPSABus = 11,
  NdisInterfaceProcessorInternal = 12,
  NdisInterfaceInternalPowerBus = 13,
  NdisInterfacePNPISABus = 14,
  NdisInterfacePNPBus = 15,
  NdisInterfaceUSB = 16,
  NdisInterfaceIrda = 17,
  NdisInterface1394 = 18,
  NdisMaximumInterfaceType = 19,
} NDIS_INTERFACE_TYPE, *PNDIS_INTERFACE_TYPE;

typedef enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
  NdisPauseFunctionsUnsupported = 0,
  NdisPauseFunctionsSendOnly = 1,
  NdisPauseFunctionsReceiveOnly = 2,
  NdisPauseFunctionsSendAndReceive = 3,
  NdisPauseFunctionsUnknown = 4,
} NDIS_SUPPORTED_PAUSE_FUNCTIONS, *PNDIS_SUPPORTED_PAUSE_FUNCTIONS;

typedef enum _NDIS_DEVICE_POWER_STATE
{
  NdisDeviceStateUnspecified = 0,
  NdisDeviceStateD0 = 1,
  NdisDeviceStateD1 = 2,
  NdisDeviceStateD2 = 3,
  NdisDeviceStateD3 = 4,
  NdisDeviceStateMaximum = 5,
} NDIS_DEVICE_POWER_STATE, *PNDIS_DEVICE_POWER_STATE;

typedef struct _NDIS_PM_WAKE_UP_CAPABILITIES
{
  /* 0x0000 */ enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;
  /* 0x0004 */ enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;
  /* 0x0008 */ enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;
} NDIS_PM_WAKE_UP_CAPABILITIES, *PNDIS_PM_WAKE_UP_CAPABILITIES; /* size: 0x000c */

typedef struct _NDIS_PNP_CAPABILITIES
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ struct _NDIS_PM_WAKE_UP_CAPABILITIES WakeUpCapabilities;
} NDIS_PNP_CAPABILITIES, *PNDIS_PNP_CAPABILITIES; /* size: 0x0010 */

typedef struct _NDIS_PM_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long SupportedWoLPacketPatterns;
  /* 0x000c */ unsigned long NumTotalWoLPatterns;
  /* 0x0010 */ unsigned long MaxWoLPatternSize;
  /* 0x0014 */ unsigned long MaxWoLPatternOffset;
  /* 0x0018 */ unsigned long MaxWoLPacketSaveBuffer;
  /* 0x001c */ unsigned long SupportedProtocolOffloads;
  /* 0x0020 */ unsigned long NumArpOffloadIPv4Addresses;
  /* 0x0024 */ unsigned long NumNSOffloadIPv6Addresses;
  /* 0x0028 */ enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;
  /* 0x002c */ enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;
  /* 0x0030 */ enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;
  /* 0x0034 */ unsigned long SupportedWakeUpEvents;
  /* 0x0038 */ unsigned long MediaSpecificWakeUpEvents;
} NDIS_PM_CAPABILITIES, *PNDIS_PM_CAPABILITIES; /* size: 0x003c */

typedef struct _NDIS_PM_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long EnabledWoLPacketPatterns;
  /* 0x0008 */ unsigned long EnabledProtocolOffloads;
  /* 0x000c */ unsigned long WakeUpFlags;
  /* 0x0010 */ unsigned long MediaSpecificWakeUpEvents;
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0014 */

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

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

typedef struct _DEVICE_CAPABILITIES
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long DeviceD1 : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long DeviceD2 : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long LockSupported : 1; /* bit position: 2 */
    /* 0x0004 */ unsigned long EjectSupported : 1; /* bit position: 3 */
    /* 0x0004 */ unsigned long Removable : 1; /* bit position: 4 */
    /* 0x0004 */ unsigned long DockDevice : 1; /* bit position: 5 */
    /* 0x0004 */ unsigned long UniqueID : 1; /* bit position: 6 */
    /* 0x0004 */ unsigned long SilentInstall : 1; /* bit position: 7 */
    /* 0x0004 */ unsigned long RawDeviceOK : 1; /* bit position: 8 */
    /* 0x0004 */ unsigned long SurpriseRemovalOK : 1; /* bit position: 9 */
    /* 0x0004 */ unsigned long WakeFromD0 : 1; /* bit position: 10 */
    /* 0x0004 */ unsigned long WakeFromD1 : 1; /* bit position: 11 */
    /* 0x0004 */ unsigned long WakeFromD2 : 1; /* bit position: 12 */
    /* 0x0004 */ unsigned long WakeFromD3 : 1; /* bit position: 13 */
    /* 0x0004 */ unsigned long HardwareDisabled : 1; /* bit position: 14 */
    /* 0x0004 */ unsigned long NonDynamic : 1; /* bit position: 15 */
    /* 0x0004 */ unsigned long WarmEjectSupported : 1; /* bit position: 16 */
    /* 0x0004 */ unsigned long NoDisplayInUI : 1; /* bit position: 17 */
    /* 0x0004 */ unsigned long Reserved1 : 1; /* bit position: 18 */
    /* 0x0004 */ unsigned long WakeFromInterrupt : 1; /* bit position: 19 */
    /* 0x0004 */ unsigned long SecureDevice : 1; /* bit position: 20 */
    /* 0x0004 */ unsigned long ChildOfVgaEnabledBridge : 1; /* bit position: 21 */
    /* 0x0004 */ unsigned long DecodeIoOnBoot : 1; /* bit position: 22 */
    /* 0x0004 */ unsigned long Reserved : 9; /* bit position: 23 */
  }; /* bitfield */
  /* 0x0008 */ unsigned long Address;
  /* 0x000c */ unsigned long UINumber;
  /* 0x0010 */ enum _DEVICE_POWER_STATE DeviceState[7];
  /* 0x002c */ enum _SYSTEM_POWER_STATE SystemWake;
  /* 0x0030 */ enum _DEVICE_POWER_STATE DeviceWake;
  /* 0x0034 */ unsigned long D1Latency;
  /* 0x0038 */ unsigned long D2Latency;
  /* 0x003c */ unsigned long D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES; /* size: 0x0040 */

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

typedef enum _NDIS_PNP_DEVICE_STATE
{
  NdisPnPDeviceAdded = 0,
  NdisPnPDeviceStarted = 1,
  NdisPnPDeviceQueryStopped = 2,
  NdisPnPDeviceStopped = 3,
  NdisPnPDeviceQueryRemoved = 4,
  NdisPnPDeviceRemoved = 5,
  NdisPnPDeviceSurpriseRemoved = 6,
} NDIS_PNP_DEVICE_STATE, *PNDIS_PNP_DEVICE_STATE;

typedef enum _NDIS_WORK_ITEM_TYPE
{
  NdisWorkItemRequest = 0,
  NdisWorkItemSend = 1,
  NdisWorkItemReturnPackets = 2,
  NdisWorkItemResetRequested = 3,
  NdisWorkItemResetInProgress = 4,
  NdisWorkItemReserved = 5,
  NdisWorkItemMiniportCallback = 6,
  NdisMaxWorkItems = 7,
} NDIS_WORK_ITEM_TYPE, *PNDIS_WORK_ITEM_TYPE;

typedef struct _NDIS_MINIPORT_WORK_ITEM
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Link;
  /* 0x0008 */ enum _NDIS_WORK_ITEM_TYPE WorkItemType;
  /* 0x0010 */ void* WorkItemContext;
} NDIS_MINIPORT_WORK_ITEM, *PNDIS_MINIPORT_WORK_ITEM; /* size: 0x0018 */

typedef enum _NDIS_PHYSICAL_MEDIUM
{
  NdisPhysicalMediumUnspecified = 0,
  NdisPhysicalMediumWirelessLan = 1,
  NdisPhysicalMediumCableModem = 2,
  NdisPhysicalMediumPhoneLine = 3,
  NdisPhysicalMediumPowerLine = 4,
  NdisPhysicalMediumDSL = 5,
  NdisPhysicalMediumFibreChannel = 6,
  NdisPhysicalMedium1394 = 7,
  NdisPhysicalMediumWirelessWan = 8,
  NdisPhysicalMediumNative802_11 = 9,
  NdisPhysicalMediumBluetooth = 10,
  NdisPhysicalMediumInfiniband = 11,
  NdisPhysicalMediumWiMax = 12,
  NdisPhysicalMediumUWB = 13,
  NdisPhysicalMedium802_3 = 14,
  NdisPhysicalMedium802_5 = 15,
  NdisPhysicalMediumIrda = 16,
  NdisPhysicalMediumWiredWAN = 17,
  NdisPhysicalMediumWiredCoWan = 18,
  NdisPhysicalMediumOther = 19,
  NdisPhysicalMediumNative802_15_4 = 20,
  NdisPhysicalMediumMax = 21,
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef enum _NDIS_MINIPORT_STATE
{
  NdisMiniportUndefinedState = 0,
  NdisMiniportHalted = 1,
  NdisMiniportInitializing = 2,
  NdisMiniportRestarting = 3,
  NdisMiniportRunning = 4,
  NdisMiniportPausing = 5,
  NdisMiniportPaused = 6,
} NDIS_MINIPORT_STATE, *PNDIS_MINIPORT_STATE;

typedef struct _KBUGCHECK_CALLBACK_RECORD
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ void* CallbackRoutine /* function */;
  /* 0x0018 */ void* Buffer;
  /* 0x0020 */ unsigned long Length;
  /* 0x0028 */ unsigned char* Component;
  /* 0x0030 */ unsigned __int64 Checksum;
  /* 0x0038 */ unsigned char State;
  /* 0x0039 */ char __PADDING__[7];
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD; /* size: 0x0040 */

typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0008 */ void* CancelSendContext;
  /* 0x0010 */ void* IndicateNetBufferListsContext;
  /* 0x0018 */ struct NDIS_NBL_TRACKER_HANDLE__* IndicateNetBufferListsTracker;
  /* 0x0020 */ struct _NDIS_OBJECT_HEADER* IndicateNetBufferListsObject;
  /* 0x0028 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0030 */ void* ReturnNetBufferListsContext;
  /* 0x0038 */ struct NDIS_NBL_TRACKER_HANDLE__* ReturnNetBufferListsTracker;
  /* 0x0040 */ struct _NDIS_OBJECT_HEADER* ReturnNetBufferListsObject;
  /* 0x0048 */ void* SendNetBufferListsContext;
  /* 0x0050 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsTracker;
  /* 0x0058 */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsObject;
  /* 0x0060 */ void* SendNetBufferListsCompleteContext;
  /* 0x0068 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsCompleteTracker;
  /* 0x0070 */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsCompleteObject;
  /* 0x0078 */ void* RequestHandle;
  union
  {
    /* 0x0080 */ void* CancelSendHandler /* function */;
    /* 0x0080 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0088 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0090 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x0098 */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x00a0 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x00a8 */ void* SendNetBufferListsHandler /* function */;
  /* 0x00b0 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x00b8 */

typedef enum _NDIS_SEND_PATH_TYPE
{
  NdisFilterSendPath = 0,
  NdisNoFilterSendPath = 1,
  Ndis5NoFilterSendPath = 2,
  NdisFakeSendPath = 3,
} NDIS_SEND_PATH_TYPE, *PNDIS_SEND_PATH_TYPE;

typedef struct _NDIS_RECEIVE_SCALE_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long CapabilitiesFlags;
  /* 0x0008 */ unsigned long NumberOfInterruptMessages;
  /* 0x000c */ unsigned long NumberOfReceiveQueues;
  /* 0x0010 */ unsigned short NumberOfIndirectionTableEntries;
  /* 0x0012 */ char __PADDING__[2];
} NDIS_RECEIVE_SCALE_CAPABILITIES, *PNDIS_RECEIVE_SCALE_CAPABILITIES; /* size: 0x0014 */

typedef struct _NDIS_WORK_ITEM
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ void* Routine /* function */;
  /* 0x0010 */ unsigned char WrapperReserved[64];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM; /* size: 0x0050 */

typedef enum _NET_IF_ACCESS_TYPE
{
  NET_IF_ACCESS_LOOPBACK = 1,
  NET_IF_ACCESS_BROADCAST = 2,
  NET_IF_ACCESS_POINT_TO_POINT = 3,
  NET_IF_ACCESS_POINT_TO_MULTI_POINT = 4,
  NET_IF_ACCESS_MAXIMUM = 5,
} NET_IF_ACCESS_TYPE, *PNET_IF_ACCESS_TYPE;

typedef enum _NET_IF_CONNECTION_TYPE
{
  NET_IF_CONNECTION_DEDICATED = 1,
  NET_IF_CONNECTION_PASSIVE = 2,
  NET_IF_CONNECTION_DEMAND = 3,
  NET_IF_CONNECTION_MAXIMUM = 4,
} NET_IF_CONNECTION_TYPE, *PNET_IF_CONNECTION_TYPE;

typedef struct _NDIS_RESTART_GENERAL_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long MtuSize;
  /* 0x0008 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0010 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x0018 */ unsigned long LookaheadSize;
  /* 0x001c */ unsigned long MacOptions;
  /* 0x0020 */ unsigned long SupportedPacketFilters;
  /* 0x0024 */ unsigned long MaxMulticastListSize;
  /* 0x0028 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES* RecvScaleCapabilities;
  /* 0x0030 */ enum _NET_IF_ACCESS_TYPE AccessType;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ enum _NET_IF_CONNECTION_TYPE ConnectionType;
  /* 0x003c */ unsigned long SupportedStatistics;
  /* 0x0040 */ unsigned long DataBackFillSize;
  /* 0x0044 */ unsigned long ContextBackFillSize;
  /* 0x0048 */ unsigned long* SupportedOidList;
  /* 0x0050 */ unsigned long SupportedOidListLength;
  /* 0x0054 */ unsigned long MaxLookaheadSizeAccessed;
} NDIS_RESTART_GENERAL_ATTRIBUTES, *PNDIS_RESTART_GENERAL_ATTRIBUTES; /* size: 0x0058 */

typedef enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
  PeriodicReceivesOff = 0,
  PeriodicReceivesOn = 1,
  PeriodicReceivesBlocked = 2,
} NDIS_M_PERIODIC_RECEIVE_STATE, *PNDIS_M_PERIODIC_RECEIVE_STATE;

typedef struct _NDIS_M_PERIODIC_RECEIVES
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* NextMiniportBlock;
  /* 0x0008 */ enum _NDIS_M_PERIODIC_RECEIVE_STATE State;
  /* 0x0010 */ unsigned __int64 SpinLock;
  /* 0x0018 */ void* LockThread;
  /* 0x0020 */ long NumMQueuedNbls;
  /* 0x0024 */ long NumNblsDequeued;
  /* 0x0028 */ struct _NET_BUFFER_LIST* QueuedHead;
  /* 0x0030 */ struct _NET_BUFFER_LIST* QueuedTail;
  /* 0x0038 */ unsigned long BoundToIP;
  /* 0x003c */ unsigned char Paused;
  /* 0x0040 */ long NblsAllocated;
  /* 0x0044 */ unsigned long TrackingQueued;
  /* 0x0048 */ unsigned long TrackingDequeued;
  /* 0x004c */ unsigned long TrackingResources;
  /* 0x0050 */ unsigned long TrackingPending;
  /* 0x0054 */ unsigned long TrackingIndicated;
  /* 0x0058 */ unsigned long TrackingEmptied;
  /* 0x0060 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0080 */ long WorkItemQueued;
  /* 0x0084 */ long __PADDING__[1];
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x0088 */

typedef enum _NDIS_PORT_CONTROL_STATE
{
  NdisPortControlStateUnknown = 0,
  NdisPortControlStateControlled = 1,
  NdisPortControlStateUncontrolled = 2,
} NDIS_PORT_CONTROL_STATE, *PNDIS_PORT_CONTROL_STATE;

typedef enum _NDIS_PORT_AUTHORIZATION_STATE
{
  NdisPortAuthorizationUnknown = 0,
  NdisPortAuthorized = 1,
  NdisPortUnauthorized = 2,
  NdisPortReauthorizing = 3,
} NDIS_PORT_AUTHORIZATION_STATE, *PNDIS_PORT_AUTHORIZATION_STATE;

typedef struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned int DeviceType;
  /* 0x0008 */ unsigned int CurrentSpeedAndMode;
  /* 0x000c */ unsigned int CurrentPayloadSize;
  /* 0x0010 */ unsigned int MaxPayloadSize;
  /* 0x0014 */ unsigned int MaxReadRequestSize;
  /* 0x0018 */ unsigned int CurrentLinkSpeed;
  /* 0x001c */ unsigned int CurrentLinkWidth;
  /* 0x0020 */ unsigned int MaxLinkSpeed;
  /* 0x0024 */ unsigned int MaxLinkWidth;
  /* 0x0028 */ unsigned int PciExpressVersion;
  /* 0x002c */ unsigned int InterruptType;
  /* 0x0030 */ unsigned int MaxInterruptMessages;
} NDIS_PCI_DEVICE_CUSTOM_PROPERTIES, *PNDIS_PCI_DEVICE_CUSTOM_PROPERTIES; /* size: 0x0034 */

typedef struct _PCI_CAPABILITIES_HEADER
{
  /* 0x0000 */ unsigned char CapabilityID;
  /* 0x0001 */ unsigned char Next;
} PCI_CAPABILITIES_HEADER, *PPCI_CAPABILITIES_HEADER; /* size: 0x0002 */

struct PCI_MSI_CAPABILITY::_PCI_MSI_MESSAGE_CONTROL
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short MSIEnable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short MultipleMessageCapable : 3; /* bit position: 1 */
    /* 0x0000 */ unsigned short MultipleMessageEnable : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned short CapableOf64Bits : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned short PerVectorMaskCapable : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned short Reserved : 7; /* bit position: 9 */
  }; /* bitfield */
}; /* size: 0x0002 */

struct PCI_MSI_CAPABILITY
{
  /* 0x0000 */ struct _PCI_CAPABILITIES_HEADER Header;
  /* 0x0002 */ struct PCI_MSI_CAPABILITY::_PCI_MSI_MESSAGE_CONTROL MessageControl;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long Reserved : 2; /* bit position: 0 */
          /* 0x0004 */ unsigned long Address : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ Register;
      /* 0x0004 */ unsigned long Raw;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ MessageAddressLower;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned short MessageData;
      /* 0x000a */ unsigned short Reserved;
      /* 0x000c */ unsigned long MaskBits;
      /* 0x0010 */ unsigned long PendingBits;
    } /* size: 0x000c */ Option32Bit;
    struct
    {
      /* 0x0008 */ unsigned long MessageAddressUpper;
      /* 0x000c */ unsigned short MessageData;
      /* 0x000e */ unsigned short Reserved;
      /* 0x0010 */ unsigned long MaskBits;
      /* 0x0014 */ unsigned long PendingBits;
    } /* size: 0x0010 */ Option64Bit;
  }; /* size: 0x0010 */
}; /* size: 0x0018 */

struct MSIX_TABLE_POINTER
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BaseIndexRegister : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long TableOffset;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

struct PCI_MSIX_CAPABILITY
{
  /* 0x0000 */ struct _PCI_CAPABILITIES_HEADER Header;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned short TableSize : 11; /* bit position: 0 */
      /* 0x0002 */ unsigned short Reserved : 3; /* bit position: 11 */
      /* 0x0002 */ unsigned short FunctionMask : 1; /* bit position: 14 */
      /* 0x0002 */ unsigned short MSIXEnable : 1; /* bit position: 15 */
    }; /* bitfield */
  } /* size: 0x0002 */ MessageControl;
  /* 0x0004 */ struct MSIX_TABLE_POINTER MessageTable;
  /* 0x0008 */ struct MSIX_TABLE_POINTER PBATable;
}; /* size: 0x000c */

typedef struct _NDIS_MINIPORT_OFFLOAD_REG
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long IPv4XSumTxDisabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long IPv4XSumRxDisabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long TCPv4XSumTxDisabled : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long TCPv4XSumRxDisabled : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long UDPv4XSumTxDisabled : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long UDPv4XSumRxDisabled : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long TCPv6XSumTxDisabled : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long TCPv6XSumRxDisabled : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long UDPv6XSumTxDisabled : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long UDPv6XSumRxDisabled : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long LsoV1IPv4Disabled : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long LsoV2IPv4Disabled : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long LsoV2IPv6Disabled : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long IPsecAHDisabled : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long IPsecESPDisabled : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned long TCPv4ConnectionOffloadDisabled : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long TCPv6ConnectionOffloadDisabled : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long ReadRegistry : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long IPsecV2AHDisabled : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long IPsecV2ESPDisabled : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long IPsecV2IPv4AHDisabled : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long IPsecV2IPv4ESPDisabled : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long IPSecV2IPv6Disabled : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned long RscIPv4Disabled : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long RscIPv6Disabled : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned long EncapsulatedPacketTaskOffloadDisabled : 1; /* bit position: 25 */
      /* 0x0000 */ unsigned long EncapsulatedPacketTaskOffloadNvgreDisabled : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned long EncapsulatedPacketTaskOffloadVxlanDisabled : 1; /* bit position: 27 */
      /* 0x0000 */ unsigned long UsoIPv4Disabled : 1; /* bit position: 28 */
      /* 0x0000 */ unsigned long UsoIPv6Disabled : 1; /* bit position: 29 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_MINIPORT_OFFLOAD_REG, *PNDIS_MINIPORT_OFFLOAD_REG; /* size: 0x0004 */

typedef enum _INTERFACE_TYPE
{
  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  Vmcs = 16,
  ACPIBus = 17,
  MaximumInterfaceType = 18,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef struct _NDIS_EVENT
{
  /* 0x0000 */ struct _KEVENT Event;
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0018 */

typedef struct _NDIS_PM_ADMIN_CONFIG
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WakeOnPattern : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long WakeOnMagicPacket : 2; /* bit position: 2 */
      /* 0x0000 */ unsigned long DeviceSleepOnDisconnect : 2; /* bit position: 4 */
      /* 0x0000 */ unsigned long PMARPOffload : 2; /* bit position: 6 */
      /* 0x0000 */ unsigned long PMNSOffload : 2; /* bit position: 8 */
      /* 0x0000 */ unsigned long PMWiFiRekeyOffload : 2; /* bit position: 10 */
      /* 0x0000 */ unsigned long SelectiveSuspend : 2; /* bit position: 12 */
      /* 0x0000 */ unsigned long NicAutoPowerSaver : 2; /* bit position: 14 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_PM_ADMIN_CONFIG, *PNDIS_PM_ADMIN_CONFIG; /* size: 0x0004 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ long Limit;
  /* 0x001c */ long __PADDING__[1];
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0020 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

typedef enum _NET_IF_ADMIN_STATUS
{
  NET_IF_ADMIN_STATUS_UP = 1,
  NET_IF_ADMIN_STATUS_DOWN = 2,
  NET_IF_ADMIN_STATUS_TESTING = 3,
} NET_IF_ADMIN_STATUS, *PNET_IF_ADMIN_STATUS;

typedef enum _NET_IF_OPER_STATUS
{
  NET_IF_OPER_STATUS_UP = 1,
  NET_IF_OPER_STATUS_DOWN = 2,
  NET_IF_OPER_STATUS_TESTING = 3,
  NET_IF_OPER_STATUS_UNKNOWN = 4,
  NET_IF_OPER_STATUS_DORMANT = 5,
  NET_IF_OPER_STATUS_NOT_PRESENT = 6,
  NET_IF_OPER_STATUS_LOWER_LAYER_DOWN = 7,
} NET_IF_OPER_STATUS, *PNET_IF_OPER_STATUS;

typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK
{
  /* 0x0000 */ unsigned char Removed;
  /* 0x0001 */ unsigned char Reserved[3];
  /* 0x0004 */ long IoCount;
  /* 0x0008 */ struct _KEVENT RemoveEvent;
} IO_REMOVE_LOCK_COMMON_BLOCK, *PIO_REMOVE_LOCK_COMMON_BLOCK; /* size: 0x0020 */

typedef struct _IO_REMOVE_LOCK
{
  /* 0x0000 */ struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;
} IO_REMOVE_LOCK, *PIO_REMOVE_LOCK; /* size: 0x0020 */

class wistd::__compressed_pair<Rtl::KString *,wistd::default_delete<Rtl::KString> >
{
}; /* size: 0x0008 */

class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> >
{
  /* 0x0000 */ class wistd::__compressed_pair<Rtl::KString *,wistd::default_delete<Rtl::KString> > __ptr_;
}; /* size: 0x0008 */

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
  NdisMEvent_SSCancelIdle = 16,
  NdisMEvent_SSIdleComplete = 17,
  NdisMEvent_SSIdleReq = 18,
  NdisMEvent_SSIdleConfirm = 19,
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

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef enum _NDIS_RSS_PROFILE
{
  NdisRssProfileClosest = 1,
  NdisRssProfileClosestStatic = 2,
  NdisRssProfileNuma = 3,
  NdisRssProfileNumaStatic = 4,
  NdisRssProfileConservative = 5,
  NdisRssProfileMaximum = 6,
} NDIS_RSS_PROFILE, *PNDIS_RSS_PROFILE;

typedef struct _ULONG_REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned long ReferenceCount;
  /* 0x000c */ unsigned char Closing;
  /* 0x000d */ char __PADDING__[3];
} ULONG_REFERENCE, *PULONG_REFERENCE; /* size: 0x0010 */

typedef enum _NDIS_PM_WAKE_REASON_TYPE
{
  NdisWakeReasonUnspecified = 0,
  NdisWakeReasonPacket = 1,
  NdisWakeReasonMediaDisconnect = 2,
  NdisWakeReasonMediaConnect = 3,
  NdisWakeReasonWlanNLODiscovery = 4096,
  NdisWakeReasonWlanAPAssociationLost = 4097,
  NdisWakeReasonWlanGTKHandshakeError = 4098,
  NdisWakeReasonWlan4WayHandshakeRequest = 4099,
  NdisWakeReasonWwanRegisterState = 8192,
  NdisWakeReasonWwanSMSReceive = 8193,
  NdisWakeReasonWwanUSSDReceive = 8194,
} NDIS_PM_WAKE_REASON_TYPE, *PNDIS_PM_WAKE_REASON_TYPE;

typedef struct _NDIS_D0_SIGNAL_WORK_ITEM
{
  /* 0x0000 */ struct _NDIS_WORK_ITEM WorkItem;
  /* 0x0050 */ long CompletionStatus;
  /* 0x0054 */ unsigned char Scheduled;
  /* 0x0055 */ char __PADDING__[3];
} NDIS_D0_SIGNAL_WORK_ITEM, *PNDIS_D0_SIGNAL_WORK_ITEM; /* size: 0x0058 */

typedef struct _VPCI_INVALIDATE_BLOCK_OUTPUT
{
  /* 0x0000 */ unsigned __int64 BlockMask;
} VPCI_INVALIDATE_BLOCK_OUTPUT, *PVPCI_INVALIDATE_BLOCK_OUTPUT; /* size: 0x0008 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

class Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> >,1>
{
  /* 0x0000 */ unsigned long m_bufferSize;
  /* 0x0004 */ unsigned long m_numElements;
  /* 0x0008 */ class wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> >* _p;
}; /* size: 0x0010 */

class Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >,1>
{
  /* 0x0000 */ unsigned long m_bufferSize;
  /* 0x0004 */ unsigned long m_numElements;
  /* 0x0008 */ class wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >* _p;
}; /* size: 0x0010 */

enum PAUSE_OR_RESTART
{
  DatapathPaused = 0,
  DatapathRunning = 1,
};

class Rtl::KArray<void *,1>
{
  /* 0x0000 */ unsigned long m_bufferSize;
  /* 0x0004 */ unsigned long m_numElements;
  /* 0x0008 */ void** _p;
}; /* size: 0x0010 */

class Ndis::BindState
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ BOOL AllowBindDespiteMandatory;
  /* 0x0009 */ BOOL PretendBindingActive;
  /* 0x000a */ BOOL NeedsPauseAction;
  /* 0x0010 */ void* m_AdditionalContext;
  /* 0x0018 */ int m_LastErrorCode;
  /* 0x001c */ unsigned long m_bindSources;
  /* 0x0020 */ unsigned long m_unbindReasons;
  /* 0x0024 */ unsigned long m_pauseReasons;
  /* 0x0028 */ enum PAUSE_OR_RESTART m_actualPauseState;
  /* 0x0030 */ class Rtl::KArray<void *,1> m_bindContext;
}; /* size: 0x0040 */

struct Ndis::BindStack
{
  /* 0x0000 */ class Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> >,1> Protocols;
  /* 0x0010 */ class Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >,1> Filters;
  /* 0x0020 */ class Ndis::BindState Miniport;
  /* 0x0060 */ unsigned long ChangeEpoch;
  /* 0x0064 */ long __PADDING__[1];
}; /* size: 0x0068 */

class KPushLock
{
}; /* size: 0x0008 */

class KWaitEvent
{
}; /* size: 0x0018 */

class KWorkItem<Ndis::BindEngine>
{
}; /* size: 0x0030 */

struct Ndis::BindEngine
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* m_miniport;
      /* 0x0008 */ struct _KTHREAD* m_bindThread;
      /* 0x0010 */ struct NDIS_BIND_LINK_BASE* m_currentOperation;
      /* 0x0018 */ class KPushLock m_lock;
      /* 0x0020 */ class KWaitEvent m_bindCompleteEvent;
      /* 0x0038 */ class KWorkItem<Ndis::BindEngine> m_asyncBindWorkItem;
      /* 0x0068 */ BOOL m_isDirty;
      /* 0x0070 */ class KWaitEvent* m_removeReadyEvent;
    }; /* size: 0x0071 */
    struct
    {
      /* 0x0000 */ unsigned long s_NumBindOperationsInProgress;
      /* 0x0004 */ long __PADDING__[29];
    }; /* size: 0x0078 */
  }; /* size: 0x0078 */
}; /* size: 0x0078 */

enum NDIS_MINIPORT_POLICY_OWNER
{
  MiniportNotOwned = 0,
  MiniportOwnedByPowerManagement = 1,
  MiniportOwnedByBindEngine = 2,
};

class Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>
{
  union
  {
    /* 0x0000 */ enum NDIS_MINIPORT_POLICY_OWNER UnownedValue;
    /* 0x0000 */ enum NDIS_MINIPORT_POLICY_OWNER m_owner;
  }; /* size: 0x0004 */
  /* 0x0008 */ class KPushLock m_lock;
  /* 0x0010 */ class KWaitEvent m_isUnowned;
}; /* size: 0x0028 */

typedef struct _IF_PHYSICAL_ADDRESS_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned char Address[32];
} IF_PHYSICAL_ADDRESS_LH, *PIF_PHYSICAL_ADDRESS_LH; /* size: 0x0022 */

struct WORKITEM_WITH_IRP
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM Workitem;
  /* 0x0020 */ struct _IRP* Irp;
}; /* size: 0x0028 */

class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t> > >
{
}; /* size: 0x0008 */

typedef enum _PKTMON_PACKET_TYPE
{
  PktMonPayload_Unknown = 0,
  PktMonPayload_Ethernet = 1,
  PktMonPayload_WiFi = 2,
  PktMonPayload_MBB = 3,
} PKTMON_PACKET_TYPE, *PPKTMON_PACKET_TYPE;

typedef struct _PKTMON_COMPONENT_CONTEXT
{
  /* 0x0000 */ void* CompHandle;
  /* 0x0008 */ enum _PKTMON_PACKET_TYPE PacketType;
  struct /* bitfield */
  {
    /* 0x000c */ int FlowEnabled : 1; /* bit position: 0 */
    /* 0x000c */ int DropEnabled : 1; /* bit position: 1 */
  }; /* bitfield */
} PKTMON_COMPONENT_CONTEXT, *PPKTMON_COMPONENT_CONTEXT; /* size: 0x0010 */

typedef struct _PKTMON_EDGE_CONTEXT
{
  /* 0x0000 */ void* EdgeHandle;
  /* 0x0008 */ struct _PKTMON_COMPONENT_CONTEXT* CompContext;
  /* 0x0010 */ enum _PKTMON_PACKET_TYPE PacketType;
  /* 0x0014 */ long __PADDING__[1];
} PKTMON_EDGE_CONTEXT, *PPKTMON_EDGE_CONTEXT; /* size: 0x0018 */

typedef struct _NDIS_MINIPORT_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_MINIPORT_BLOCK* NextMiniport;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* BaseMiniport;
  /* 0x0018 */ void* MiniportAdapterContext;
  union
  {
    /* 0x0020 */ struct _UNICODE_STRING Reserved4;
    struct
    {
      /* 0x0020 */ unsigned char MajorNdisVersion;
      /* 0x0021 */ unsigned char MinorNdisVersion;
      /* 0x0028 */ struct _NDIS_PCW_DATA_BLOCK* PcwDataBlock;
    }; /* size: 0x000a */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0030 */ long PcwDatapathEventMask;
    /* 0x0030 */ void* Reserved28;
  }; /* size: 0x0008 */
  /* 0x0038 */ struct _NDIS_OPEN_BLOCK* OpenQueue;
  /* 0x0040 */ struct _REFERENCE ShortRef;
  union
  {
    /* 0x0050 */ long PcwDatapathCycleMask;
    /* 0x0050 */ void* Reserved29;
  }; /* size: 0x0008 */
  /* 0x0058 */ unsigned char LinkStateIndicationFlags;
  /* 0x0059 */ unsigned char LockAcquired;
  /* 0x005a */ unsigned char PmodeOpens;
  /* 0x005b */ unsigned char LoopbackOpens;
  /* 0x0060 */ unsigned __int64 Lock;
  /* 0x0068 */ void* Reserved25;
  /* 0x0070 */ struct _NDIS_MINIPORT_INTERRUPT* Interrupt;
  /* 0x0078 */ unsigned long Flags;
  /* 0x007c */ unsigned long PnPFlags;
  /* 0x0080 */ struct _LIST_ENTRY PacketList;
  /* 0x0090 */ struct _NDIS_PACKET* FirstPendingPacket;
  /* 0x0098 */ struct _NDIS_PACKET* ReturnPacketsQueue;
  /* 0x00a0 */ unsigned long RequestBuffer;
  /* 0x00a8 */ void* Reserved26;
  /* 0x00b0 */ struct _NDIS_MINIPORT_BLOCK* PrimaryMiniport;
  /* 0x00b8 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x00c0 */ void* OidContext;
  /* 0x00c8 */ unsigned long SupportedOidListLength;
  /* 0x00d0 */ struct _CM_RESOURCE_LIST* Resources;
  /* 0x00d8 */ struct _NDIS_TIMER WakeUpDpcTimer;
  union
  {
    /* 0x0158 */ struct _UNICODE_STRING Reserved20;
    struct
    {
      /* 0x0158 */ enum _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState;
      /* 0x015c */ enum _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState;
    }; /* size: 0x0008 */
  }; /* size: 0x0010 */
  /* 0x0168 */ struct _UNICODE_STRING SymbolicLinkName;
  /* 0x0178 */ unsigned long CheckForHangSeconds;
  /* 0x017c */ unsigned short CFHangTicks;
  /* 0x017e */ unsigned short CFHangCurrentTick;
  /* 0x0180 */ int ResetStatus;
  /* 0x0188 */ struct _NDIS_OPEN_BLOCK* ResetOpen;
  union
  {
    /* 0x0190 */ struct _X_FILTER* EthDB;
    /* 0x0190 */ struct _X_FILTER* NullDB;
  }; /* size: 0x0008 */
  /* 0x0198 */ void* Unused1;
  /* 0x01a0 */ void* Unused2;
  /* 0x01a8 */ void* Unused3;
  /* 0x01b0 */ void* PacketIndicateHandler /* function */;
  /* 0x01b8 */ void* SendCompleteHandler /* function */;
  /* 0x01c0 */ void* SendResourcesHandler /* function */;
  /* 0x01c8 */ void* ResetCompleteHandler /* function */;
  /* 0x01d0 */ enum _NDIS_MEDIUM MediaType;
  /* 0x01d4 */ unsigned long AutoNegotiationFlags;
  /* 0x01d8 */ enum _NDIS_INTERFACE_TYPE Reserved5;
  /* 0x01dc */ enum _NDIS_INTERFACE_TYPE AdapterType;
  union
  {
    /* 0x01e0 */ struct _DEVICE_OBJECT* Reserved6;
    /* 0x01e0 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  }; /* size: 0x0008 */
  union
  {
    /* 0x01e8 */ struct _DEVICE_OBJECT* Reserved7;
    /* 0x01e8 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  }; /* size: 0x0008 */
  /* 0x01f0 */ unsigned long* SupportedOidList;
  /* 0x01f8 */ struct _NDIS_SG_DMA_BLOCK* MiniportSGDmaBlock;
  /* 0x0200 */ struct _NDIS_AF_LIST* CallMgrAfList;
  /* 0x0208 */ void* MiniportThread;
  /* 0x0210 */ void* SetInfoBuf;
  /* 0x0218 */ unsigned short SetInfoBufLen;
  /* 0x021a */ unsigned short MaxSendPackets;
  /* 0x021c */ int FakeStatus;
  union
  {
    /* 0x0220 */ void* Reserved24;
    /* 0x0220 */ void* GlobalTriageBlock;
  }; /* size: 0x0008 */
  /* 0x0228 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* CombinedNdisRSSParameters;
  union
  {
    /* 0x0230 */ struct _NDIS_MINIPORT_TIMER* TimerQueue;
    /* 0x0230 */ struct _NDIS_TIMER_ENTRY* TimerObjectQueue;
  }; /* size: 0x0008 */
  /* 0x0238 */ unsigned int MacOptions;
  /* 0x0240 */ struct _NDIS_REQUEST* PendingRequest;
  /* 0x0248 */ unsigned int MaximumLongAddresses;
  /* 0x024c */ unsigned int Reserved27;
  /* 0x0250 */ unsigned int MiniportCurrentLookahead;
  /* 0x0254 */ unsigned int MiniportMaximumLookahead;
  union
  {
    /* 0x0258 */ unsigned __int64 Reserved1;
    /* 0x0258 */ struct _X_FILTER* NullMediaFilter;
  }; /* size: 0x0008 */
  /* 0x0260 */ void* DisableInterruptHandler /* function */;
  /* 0x0268 */ void* EnableInterruptHandler /* function */;
  /* 0x0270 */ void* SendPacketsHandler /* function */;
  /* 0x0278 */ void* DeferredSendHandler /* function */;
  /* 0x0280 */ void* EthRxIndicateHandler /* function */;
  /* 0x0288 */ void* Reserved30;
  /* 0x0290 */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0298 */ void* EthRxCompleteHandler /* function */;
  /* 0x02a0 */ void* Reserved31;
  /* 0x02a8 */ void* SavedNextSendNetBufferListsHandler /* function */;
  /* 0x02b0 */ void* StatusHandler /* function */;
  /* 0x02b8 */ void* StatusCompleteHandler /* function */;
  /* 0x02c0 */ void* TDCompleteHandler /* function */;
  /* 0x02c8 */ void* QueryCompleteHandler /* function */;
  /* 0x02d0 */ void* SetCompleteHandler /* function */;
  /* 0x02d8 */ void* WanSendCompleteHandler /* function */;
  /* 0x02e0 */ void* WanRcvHandler /* function */;
  /* 0x02e8 */ void* WanRcvCompleteHandler /* function */;
  /* 0x02f0 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x02f8 */ struct _KEVENT* PnPEventLockEvent;
  /* 0x0300 */ struct _NDIS_OBJECT_HEADER* MediaSpecificAttributes;
  /* 0x0308 */ struct _IRP* PendingQueryPowerIrp;
  /* 0x0310 */ struct _NDIS_INTERRUPT_BLOCK* InterruptEx;
  /* 0x0318 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0320 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0328 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x032c */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions;
  /* 0x0330 */ unsigned long MiniportAutoNegotiationFlags;
  /* 0x0338 */ struct _SINGLE_LIST_ENTRY WorkQueue[7];
  /* 0x0370 */ struct _SINGLE_LIST_ENTRY SingleWorkItems[6];
  /* 0x03a0 */ unsigned char SendFlags;
  /* 0x03a1 */ unsigned char MP6SupportPM;
  /* 0x03a2 */ unsigned char XState;
  /* 0x03a8 */ struct _NDIS_LOG* Log;
  /* 0x03b0 */ struct _CM_RESOURCE_LIST* AllocatedResources;
  /* 0x03b8 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
  /* 0x03c0 */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x03c8 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x03d0 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x03d8 */ struct _NDIS_PNP_CAPABILITIES PMCapabilities61;
  /* 0x03e8 */ struct _NDIS_PM_CAPABILITIES PMHardwareCapabilities;
  /* 0x0424 */ struct _NDIS_PM_CAPABILITIES PMAdvertisedCapabilities;
  /* 0x0460 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x0474 */ struct _NDIS_PM_PARAMETERS PMWmiParameters;
  /* 0x0488 */ struct _DEVICE_CAPABILITIES OriginalDeviceCaps;
  /* 0x04c8 */ struct _DEVICE_CAPABILITIES DeviceCaps;
  /* 0x0508 */ unsigned char S0WakeupSupported;
  /* 0x050c */ unsigned long WakeUpEnable;
  /* 0x0510 */ struct _IRP* WaitWakeIrp;
  /* 0x0518 */ struct _KEVENT WaitWakeIrpCompleted;
  /* 0x0530 */ BOOL WaitWakeIoCompletionRoutineRan;
  /* 0x0531 */ BOOL WaitWakeCancelInProgress;
  /* 0x0532 */ BOOL WaitWakeCancelAttempted;
  /* 0x0534 */ enum _SYSTEM_POWER_STATE WaitWakeSystemState;
  /* 0x0538 */ union _LARGE_INTEGER VcIndex;
  /* 0x0540 */ unsigned __int64 VcCountLock;
  /* 0x0548 */ struct _LIST_ENTRY WmiEnabledVcs;
  /* 0x0558 */ struct _NDIS_GUID* pNdisGuidMap;
  /* 0x0560 */ struct _NDIS_GUID* pCustomGuidMap;
  /* 0x0568 */ unsigned short VcCount;
  /* 0x056a */ unsigned short cNdisGuidMap;
  /* 0x056c */ unsigned short cCustomGuidMap;
  /* 0x0570 */ struct _NDIS_TIMER MediaDisconnectTimer;
  /* 0x05f0 */ enum _NDIS_PNP_DEVICE_STATE PnPDeviceState;
  /* 0x05f4 */ enum _NDIS_PNP_DEVICE_STATE OldPnPDeviceState;
  /* 0x05f8 */ struct _KDPC DeferredDpc;
  /* 0x0638 */ union _LARGE_INTEGER StartTicks;
  /* 0x0640 */ struct _NDIS_PACKET** IndicatedPacket;
  /* 0x0648 */ struct _KEVENT* RemoveReadyEvent;
  /* 0x0650 */ struct _KEVENT* AllRequestsCompletedEvent;
  /* 0x0658 */ unsigned long InitTimeMs;
  /* 0x0660 */ struct _NDIS_MINIPORT_WORK_ITEM WorkItemBuffer[6];
  /* 0x06f0 */ struct _OID_LIST* OidList;
  /* 0x06f8 */ unsigned short InternalResetCount;
  /* 0x06fa */ unsigned short MiniportResetCount;
  /* 0x06fc */ unsigned short MediaSenseConnectCount;
  /* 0x06fe */ unsigned short MediaSenseDisconnectCount;
  /* 0x0700 */ struct _NDIS_PACKET** xPackets;
  /* 0x0708 */ unsigned long UserModeOpenReferences;
  /* 0x0710 */ void* WSendPacketsHandler /* function */;
  /* 0x0718 */ unsigned long MiniportAttributes;
  /* 0x071c */ unsigned short NumOpens;
  /* 0x071e */ unsigned short CFHangXTicks;
  /* 0x0720 */ unsigned long RequestCount;
  /* 0x0724 */ unsigned long IndicatedPacketsCount;
  /* 0x0728 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;
  /* 0x072c */ enum _NDIS_MEDIUM MiniportMediaType;
  /* 0x0730 */ enum _NDIS_MEDIUM DataLinkLayerType;
  /* 0x0734 */ enum _NDIS_MEDIUM MpSpecifiedMediaType;
  /* 0x0738 */ struct _NDIS_REQUEST* LastRequest;
  /* 0x0740 */ void* FakeMac;
  /* 0x0748 */ void* LockThread;
  /* 0x0750 */ unsigned long InfoFlags;
  /* 0x0758 */ unsigned __int64 TimerQueueLock;
  /* 0x0760 */ struct _KEVENT* ResetCompletedEvent;
  /* 0x0768 */ void* SavedPacketIndicateHandler /* function */;
  /* 0x0770 */ long RegisteredInterrupts;
  /* 0x0774 */ unsigned long SetOid;
  /* 0x0778 */ struct _KEVENT CFHCompletedEvent;
  /* 0x0790 */ struct _WORK_QUEUE_ITEM CFHWorkItem;
  /* 0x07b0 */ volatile long CFHWorkItemQueued;
  /* 0x07b8 */ void* DeviceContext;
  /* 0x07c0 */ struct _NDIS_MINIPORT_RSS_PARAMETERS_CACHE* RssParametersBuffer;
  /* 0x07c8 */ unsigned char UsingMSIX;
  /* 0x07c9 */ unsigned char Miniport5InNdis6Mode;
  /* 0x07ca */ unsigned char Miniport5HasNdis6Component;
  /* 0x07cb */ unsigned char InitMode;
  /* 0x07cc */ unsigned char InitModeNotNeededAnymore;
  /* 0x07cd */ char MediaChangeFilters;
  /* 0x07ce */ unsigned char CheckPacketFilters;
  /* 0x07cf */ unsigned char ReceiveFilters;
  /* 0x07d0 */ unsigned __int64 RecvLock;
  /* 0x07d8 */ enum _NDIS_MINIPORT_STATE RecvState;
  /* 0x07dc */ unsigned long OutstandingReceives;
  /* 0x07e0 */ void* MiniportRecvLockThread;
  /* 0x07e8 */ void* NextSendPacketsHandler /* function */;
  /* 0x07f0 */ void* FinalSendPacketsHandler /* function */;
  /* 0x07f8 */ struct _NDIS_FILTER_BLOCK* LowestFilter;
  /* 0x0800 */ struct _NDIS_FILTER_BLOCK* HighestFilter;
  /* 0x0808 */ void* ShutdownContext;
  /* 0x0810 */ void* ShutdownHandler /* function */;
  /* 0x0818 */ struct _KBUGCHECK_CALLBACK_RECORD BugcheckCallbackRecord;
  /* 0x0858 */ void* TopIndicateNetBufferListsHandler /* function */;
  /* 0x0860 */ void* TopIndicateLoopbackNetBufferListsHandler /* function */;
  /* 0x0868 */ void* Ndis5PacketIndicateHandler /* function */;
  /* 0x0870 */ void* MiniportReturnPacketHandler /* function */;
  /* 0x0878 */ void* MiniportReturnPacketContext;
  /* 0x0880 */ void* SynchronousReturnPacketHandler /* function */;
  /* 0x0888 */ void* SynchronousReturnPacketContext;
  /* 0x0890 */ struct _LIST_ENTRY OidRequestList;
  /* 0x08a0 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x08a8 */ struct _NDIS_OID_REQUEST* ProcessedOidRequest;
  /* 0x08b0 */ struct _NDIS_OID_REQUEST* HookedOidRequest;
  /* 0x08b8 */ void* NextCoOidRequestHandle;
  /* 0x08c0 */ unsigned long Ndis6ProtocolsBound;
  /* 0x08c4 */ unsigned long PmodeOpen6;
  /* 0x08c8 */ enum _NDIS_MINIPORT_STATE State;
  /* 0x08d0 */ struct _KEVENT* AsyncOpCompletionEvent;
  /* 0x08d8 */ int AsyncOpCompletionStatus;
  /* 0x08e0 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x08e8 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x08f0 */ unsigned long SupportedPacketFilters;
  /* 0x08f8 */ struct _NDIS_MINIPORT_HANDLERS NoFilter;
  /* 0x09b0 */ struct _NDIS_MINIPORT_HANDLERS Next;
  /* 0x0a68 */ unsigned char ReceivePathEnabled;
  /* 0x0a69 */ unsigned char NormalTopReceive;
  /* 0x0a6c */ enum _NDIS_SEND_PATH_TYPE SendPathType;
  /* 0x0a70 */ enum _NDIS_SEND_PATH_TYPE SavedSendPathType;
  /* 0x0a74 */ unsigned char SavedReceivePathEnabled;
  /* 0x0a78 */ unsigned long TimestampFlags;
  /* 0x0a7c */ unsigned long FilterPnPFlags;
  /* 0x0a80 */ unsigned long SupportedStatistics;
  /* 0x0a84 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RecvScaleCapabilities;
  /* 0x0a98 */ struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES* GeneralAttributes;
  /* 0x0aa0 */ struct _LIST_ENTRY PortList;
  /* 0x0ab0 */ unsigned char* AllocatedPortIndices;
  /* 0x0ab8 */ unsigned long AllocatedPortIndicesLength;
  /* 0x0abc */ unsigned long NumberOfPorts;
  /* 0x0ac0 */ unsigned long NumberOfActivePorts;
  /* 0x0ac8 */ unsigned __int64 MiniportXmitLinkSpeed;
  /* 0x0ad0 */ unsigned __int64 MiniportRcvLinkSpeed;
  /* 0x0ad8 */ struct _NDIS_TIMER InitModeTimeoutTimer;
  /* 0x0b58 */ struct _NDIS_WORK_ITEM InitModeTimeoutWorkItem;
  /* 0x0ba8 */ struct _KEVENT InitModeTimeoutTimerQueuedEvent;
  /* 0x0bc0 */ unsigned long DataBackFillSize;
  /* 0x0bc4 */ unsigned long ContextBackFillSize;
  /* 0x0bc8 */ struct _NDIS_RESTART_GENERAL_ATTRIBUTES TopFilterRestartAttributes;
  /* 0x0c20 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES TopRecvScaleCapabilities;
  /* 0x0c34 */ unsigned long NsiOpenReferences;
  /* 0x0c38 */ void* ProcessingOpen;
  /* 0x0c40 */ struct _KEVENT* NsiRequestsCompletedEvent;
  /* 0x0c48 */ enum _DEVICE_POWER_STATE QueryPowerDeviceState;
  /* 0x0c4c */ unsigned char MinimumNdisMajorVersion;
  /* 0x0c4d */ unsigned char MinimumNdisMinorVersion;
  /* 0x0c50 */ struct _NDIS_MINIPORT_STATS* BottomIfStats;
  /* 0x0c58 */ struct _NDIS_M_PERIODIC_RECEIVES PeriodicReceiveQueue;
  /* 0x0ce0 */ struct PNDIS_PER_PROCESSOR_SLOT__* PeriodicReceivesNblCountIndex;
  /* 0x0ce8 */ enum _NDIS_PORT_CONTROL_STATE DefaultSendControlState;
  /* 0x0cec */ enum _NDIS_PORT_CONTROL_STATE DefaultRcvControlState;
  /* 0x0cf0 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultSendAuthorizationState;
  /* 0x0cf4 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultRcvAuthorizationState;
  /* 0x0cf8 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortSendControlState;
  /* 0x0cfc */ enum _NDIS_PORT_CONTROL_STATE DefaultPortRcvControlState;
  /* 0x0d00 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState;
  /* 0x0d04 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState;
  /* 0x0d08 */ struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES PciDeviceCustomProperties;
  /* 0x0d40 */ void* TopNdis5PacketIndicateHandler /* function */;
  /* 0x0d48 */ unsigned long* ndisSupportedOidList;
  /* 0x0d50 */ unsigned long ndisSupportedOidListLength;
  /* 0x0d54 */ unsigned long MsiIntCount;
  /* 0x0d58 */ struct _WORK_QUEUE_ITEM MiniportDpcWorkItem;
  /* 0x0d78 */ unsigned __int64 InvalidFrames;
  /* 0x0d80 */ long PagingPathCount;
  /* 0x0d88 */ struct _LIST_ENTRY ReceiveQueueList;
  /* 0x0d98 */ unsigned char* AllocatedQueueIndices;
  /* 0x0da0 */ unsigned long AllocatedQueueIndicesLength;
  /* 0x0da4 */ unsigned long NumReceiveQueues;
  /* 0x0da8 */ struct _LIST_ENTRY ReceiveFilterList;
  /* 0x0db8 */ unsigned char* AllocatedReceiveFilterIndices;
  /* 0x0dc0 */ unsigned long AllocatedReceiveFilterIndicesLength;
  /* 0x0dc4 */ unsigned long NumReceiveFilters;
  /* 0x0dc8 */ unsigned long EnabledReceiveFilterTypes;
  /* 0x0dcc */ unsigned long EnabledReceiveQueueTypes;
  /* 0x0dd0 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterHwCapabilities;
  /* 0x0dd8 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterCurrentCapabilities;
  /* 0x0de0 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* TopReceiveFilterCurrentCapabilities;
  /* 0x0de8 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchHwCapabilities;
  /* 0x0df0 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchCurrentCapabilities;
  /* 0x0df8 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* TopNicSwitchCurrentCapabilities;
  /* 0x0e00 */ struct _LIST_ENTRY SharedMemoryBlockList;
  /* 0x0e10 */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0e18 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0e20 */ void* AllocateSharedMemoryContext;
  /* 0x0e28 */ struct PCI_MSI_CAPABILITY MsiCaps;
  /* 0x0e40 */ struct PCI_MSIX_CAPABILITY MsiXCaps;
  /* 0x0e50 */ unsigned __int64 NumberOfIndirectionTableChanges;
  /* 0x0e58 */ unsigned int PciDeviceSriovSupport;
  union
  {
    /* 0x0e5c */ unsigned char BeginSavedFields;
    /* 0x0e5c */ unsigned long NumUserOpens;
  }; /* size: 0x0004 */
  /* 0x0e60 */ struct _NDIS_MINIPORT_OFFLOAD_REG OffloadRegistry;
  /* 0x0e64 */ unsigned short MediaDisconnectTimeOut;
  /* 0x0e66 */ unsigned short SGMapRegistersNeeded;
  /* 0x0e68 */ unsigned long DriverVerifyFlags;
  /* 0x0e70 */ void* SetBusData /* function */;
  /* 0x0e78 */ void* GetBusData /* function */;
  /* 0x0e80 */ void* BusDataContext;
  /* 0x0e88 */ enum _INTERFACE_TYPE BusType;
  /* 0x0e8c */ unsigned long BusNumber;
  /* 0x0e90 */ struct _NDIS_EVENT OpenReadyEvent;
  /* 0x0ea8 */ unsigned long NumAdminOpens;
  /* 0x0eb0 */ struct _NDIS_M_DRIVER_BLOCK* DriverHandle;
  /* 0x0eb8 */ struct _NDIS_BIND_PATHS* BindPaths;
  /* 0x0ec0 */ enum _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediumType;
  /* 0x0ec8 */ void* SecurityDescriptor;
  /* 0x0ed0 */ struct _UNICODE_STRING BaseName;
  /* 0x0ee0 */ struct _UNICODE_STRING MiniportName;
  /* 0x0ef0 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0ef8 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0f00 */ struct _DEVICE_OBJECT* NextDeviceObject;
  /* 0x0f08 */ struct _NDIS_MINIPORT_BLOCK* NextGlobalMiniport;
  /* 0x0f10 */ struct _UNICODE_STRING* pAdapterInstanceName;
  /* 0x0f18 */ unsigned long PnPCapabilities;
  /* 0x0f1c */ enum _DEVICE_POWER_STATE CurrentDevicePowerState;
  /* 0x0f20 */ unsigned __int64 PowerStateLock;
  /* 0x0f28 */ enum _DEVICE_POWER_STATE DriverPowerState;
  /* 0x0f2c */ enum _DEVICE_POWER_STATE PrevDriverPowerState;
  /* 0x0f30 */ struct _NET_BUFFER_LIST* LowPowerRcvReturnNbls;
  /* 0x0f38 */ unsigned long PendingReturnNBLCount;
  /* 0x0f3c */ unsigned char SurpriseRemoveFlushedRcvReturnQueue;
  /* 0x0f40 */ struct NDIS_NBL_TRACKER_HANDLE__* LowPowerRcvReturnNblTracker;
  /* 0x0f48 */ struct _NDIS_PM_ADMIN_CONFIG PMAdminConfig;
  /* 0x0f50 */ struct _KSEMAPHORE PMPatternSemaphore;
  /* 0x0f70 */ struct _KSEMAPHORE PMOffloadSemaphore;
  /* 0x0f90 */ void* BusInterface;
  /* 0x0f98 */ unsigned short InstanceNumber;
  /* 0x0fa0 */ void* ConfigurationHandle;
  /* 0x0fa8 */ struct _GUID InterfaceGuid;
  /* 0x0fb8 */ union _NET_LUID_LH NetLuid;
  /* 0x0fc0 */ unsigned char IfBlockAvailable;
  /* 0x0fc8 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x0fd0 */ struct _KEVENT* IfBlockPointerRefZeroEvent;
  /* 0x0fd8 */ unsigned int IfIndex;
  /* 0x0fdc */ enum _NET_IF_ADMIN_STATUS AdminStatus;
  /* 0x0fe0 */ enum _NET_IF_OPER_STATUS OperStatus;
  /* 0x0fe4 */ unsigned long OperStatusFlags;
  union
  {
    /* 0x0fe8 */ void* SendHandler /* function */;
    /* 0x0fe8 */ void* WanSendHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0ff0 */ struct NDIS_NBL_TRACKER_HANDLE__* NblTracker;
  /* 0x0ff8 */ struct _DEVICE_RESET_INTERFACE_STANDARD* ReenumerateSelfInterface;
  /* 0x1000 */ struct _NDIS_MINIPORT_OFFLOAD* Offload;
  /* 0x1008 */ void* NDKBlock;
  /* 0x1010 */ void* AddDeviceContext;
  /* 0x1018 */ struct _IO_REMOVE_LOCK RemoveLock;
  /* 0x1038 */ struct _UNICODE_STRING DevinterfaceNetSymbolicLinkName;
  /* 0x1048 */ unsigned long PhysicalMediumInInf;
  /* 0x1050 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > ExportName;
  /* 0x1058 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > FilterClass;
  /* 0x1060 */ void* StatusProcessingThread;
  /* 0x1068 */ struct _UNICODE_STRING FdoName;
  /* 0x1078 */ struct _KEVENT PowerD0CompleteEvent;
  /* 0x1090 */ long LastD0CompleteStatus;
  /* 0x1094 */ enum _NDIS_MINIPORT_EVENT LastD0Reason;
  /* 0x1098 */ unsigned long DirectOidRequestCount;
  /* 0x10a0 */ struct _KEVENT* AllDirectRequestsCompletedEvent;
  /* 0x10a8 */ struct _NDIS_HD_SPLIT_CURRENT_CONFIG* HDSplitCurrentConfig;
  /* 0x10b0 */ void* MSIXConfigContext;
  /* 0x10b8 */ void* SetMSIXTableEntry /* function */;
  /* 0x10c0 */ void* MaskMSIXTableEntry /* function */;
  /* 0x10c8 */ void* UnmaskMSIXTableEntry /* function */;
  /* 0x10d0 */ struct _WORK_QUEUE_ITEM DevicePowerStateWorkItem;
  /* 0x10f0 */ struct _WORK_QUEUE_ITEM SystemPowerStateWorkItem;
  /* 0x1110 */ struct _NDIS_RECEIVE_QUEUE_BLOCK* DefaultReceiveQueue;
  /* 0x1118 */ unsigned long MaxNumRssProcessors;
  /* 0x111c */ struct _PROCESSOR_NUMBER RssBaseProcessor;
  /* 0x1120 */ struct _PROCESSOR_NUMBER RssMaxProcessor;
  /* 0x1124 */ enum _NDIS_RSS_PROFILE RssProfile;
  /* 0x1128 */ unsigned short NumaNodeId;
  /* 0x1130 */ unsigned short* NumaDistances;
  /* 0x1138 */ struct _UNICODE_STRING* pModifiedInstanceName;
  /* 0x1140 */ unsigned long SyncFlags;
  /* 0x1144 */ unsigned long WSyncFlags;
  /* 0x1148 */ unsigned long InterlockedFlags;
  /* 0x1150 */ struct _ULONG_REFERENCE Ref;
  /* 0x1160 */ struct _NDIS_SELECTIVE_SUSPEND* SelectiveSuspend;
  /* 0x1168 */ struct _NDIS_MINIPORT_AOAC* AoAc;
  /* 0x1170 */ enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason;
  /* 0x1178 */ struct NDIS_EVENT_LOG_HANDLE__* PnpEventLog;
  /* 0x1180 */ struct _NDIS_D0_SIGNAL_WORK_ITEM D0CompleteSignalWorkItem;
  /* 0x11d8 */ struct _NDIS_PHYSICAL_PERFORMANCE_COUNTERS* PhysicalPerformanceCounters;
  /* 0x11e0 */ union _LARGE_INTEGER TimeOfInitialization;
  /* 0x11e8 */ union _LARGE_INTEGER LastSystemSleepTime;
  /* 0x11f0 */ unsigned __int64 TotalSystemSleepTimeMs;
  /* 0x11f8 */ struct _NDIS_SRIOV_CAPABILITIES* SriovHwCapabilities;
  /* 0x1200 */ struct _NDIS_SRIOV_CAPABILITIES* SriovCurrentCapabilities;
  /* 0x1208 */ unsigned __int64 InvalidateBlockMask;
  /* 0x1210 */ struct _IRP* InvalidateBlockIoctlPf;
  /* 0x1218 */ struct _IRP* InvalidateBlockIoctlVf;
  /* 0x1220 */ struct _VPCI_INVALIDATE_BLOCK_OUTPUT InvalidateBlockVfParams;
  /* 0x1228 */ struct _KEVENT InvalidateBlockEvent;
  /* 0x1240 */ unsigned short InvalidateVfId;
  /* 0x1242 */ unsigned char InvalidateBlockCancelling;
  /* 0x1248 */ struct _NDIS_PF_BLOCK* PFBlock;
  /* 0x1250 */ unsigned long NumSwitches;
  /* 0x1258 */ struct _LIST_ENTRY NicSwitchList;
  /* 0x1268 */ unsigned long NumAllocatedVFs;
  /* 0x1270 */ struct _LIST_ENTRY VFList;
  /* 0x1280 */ unsigned long NumActiveVPorts;
  /* 0x1288 */ struct _LIST_ENTRY VPortList;
  /* 0x1298 */ unsigned char* AllocatedVPortIndices;
  /* 0x12a0 */ unsigned long AllocatedVPortIndicesLength;
  /* 0x12a8 */ void* SetVirtualFunctionData /* function */;
  /* 0x12b0 */ void* GetVirtualFunctionData /* function */;
  /* 0x12b8 */ void* EnableVirtualization /* function */;
  /* 0x12c0 */ void* GetVirtualDeviceLocation /* function */;
  /* 0x12c8 */ void* GetVirtualFunctionProbedBars /* function */;
  /* 0x12d0 */ void* VirtInterfaceContext;
  /* 0x12d8 */ struct _UNICODE_STRING DevinterfaceVirtSymbolicLinkName;
  /* 0x12e8 */ void* VpciInterfaceDereference /* function */;
  /* 0x12f0 */ void* WriteVfConfigBlock /* function */;
  /* 0x12f8 */ void* ReadVfConfigBlock /* function */;
  /* 0x1300 */ void* VpciInterfaceContext;
  /* 0x1308 */ unsigned int VfSerialNumber;
  /* 0x130c */ struct _LUID SriovLuid;
  /* 0x1318 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x1320 */ struct NDIS_REFCOUNT_HANDLE__* NsiRefCountTracker;
  /* 0x1328 */ struct _NDIS_QOS_CAPABILITIES* QosHwCapabilities;
  /* 0x1330 */ struct _NDIS_QOS_CAPABILITIES* QosCurrentCapabilities;
  /* 0x1338 */ struct _NDIS_QOS_PARAMETERS* QosOperationalParameters;
  /* 0x1340 */ unsigned long QosOperationalParametersBufferSize;
  /* 0x1348 */ struct _NDIS_QOS_PARAMETERS* QosRemoteParameters;
  /* 0x1350 */ unsigned long QosRemoteParametersBufferSize;
  /* 0x1358 */ unsigned __int64 DeviceFlags;
  /* 0x1360 */ void* VerifierContext;
  /* 0x1368 */ struct _WORK_QUEUE_ITEM SurpriseRemovalWorkItem;
  /* 0x1388 */ struct Ndis::BindStack Bindings;
  /* 0x13f0 */ struct Ndis::BindEngine BindEngine;
  /* 0x1468 */ class Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER> MiniportOwner;
  /* 0x1490 */ BOOL PmInterruptedByPnp;
  /* 0x1491 */ BOOL DoNotBlockOnMiniportLock;
  /* 0x1492 */ BOOL PoFxDStateReportingEnabled;
  /* 0x1498 */ struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__* HookAdapterHandle;
  /* 0x14a0 */ struct _WORK_QUEUE_ITEM InterfaceUpdateWorkItem;
  /* 0x14c0 */ BOOL InterfaceUpdateInProgress;
  /* 0x14c1 */ BOOL MacAddressUpdateQueued;
  /* 0x14c2 */ BOOL MtuUpdateQueued;
  /* 0x14c4 */ struct _IF_PHYSICAL_ADDRESS_LH PendingMacAddress;
  /* 0x14e8 */ unsigned long PendingMtuSize;
  /* 0x14f0 */ wchar_t* PnPInstanceId;
  /* 0x14f8 */ struct WORKITEM_WITH_IRP DevicePowerOnWorkItem;
  /* 0x1520 */ struct WORKITEM_WITH_IRP DevicePowerDownWorkItem;
  /* 0x1548 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t> > > PendingOidWatchdog;
  /* 0x1550 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t> > > HookedOidWatchdog;
  /* 0x1558 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t> > > ReenumerateWatchdog;
  /* 0x1560 */ struct _NDIS_PD_BLOCK* PDBlock;
  /* 0x1568 */ void* PdcHandle;
  /* 0x1570 */ struct _NDIS_TIMER PdcTaskClientDisableTimer;
  /* 0x15f0 */ struct _NDIS_WORK_ITEM PdcTaskClientDisableWorkItem;
  /* 0x1640 */ volatile long PdcTaskClientMode;
  /* 0x1644 */ unsigned long ModernStandbyWoLMagicPacketEnable;
  /* 0x1648 */ struct _NDIS_RSS_DPC_WORKER_CONTEXT* RssV2Context;
  /* 0x1650 */ volatile long RssV2CompletionCount;
  /* 0x1658 */ struct _KEVENT RssV2CompletionEvent;
  /* 0x1670 */ unsigned char RssV2Initialized;
  /* 0x1678 */ struct _LIST_ENTRY SynchronousOidCalls;
  /* 0x1688 */ struct _NDIS_TIMESTAMP_CAPABILITIES* HwTimestampCapabilities;
  /* 0x1690 */ struct _NDIS_TIMESTAMP_CAPABILITIES* HwTimestampCurrentConfig;
  /* 0x1698 */ struct _NDIS_TIMESTAMP_CAPABILITIES* TopTimestampConfig;
  /* 0x16a0 */ struct _NDIS_TIMESTAMP_CAPABILITIES* TopHwTimestampCapabilities;
  /* 0x16a8 */ struct _PKTMON_COMPONENT_CONTEXT PktMonComp;
  /* 0x16b8 */ struct _PKTMON_EDGE_CONTEXT PktMonEdge;
} NDIS_MINIPORT_BLOCK, *PNDIS_MINIPORT_BLOCK; /* size: 0x16d0 */

