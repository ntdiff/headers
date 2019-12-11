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
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ char __PADDING__[1];
} REFERENCE, *PREFERENCE; /* size: 0x0008 */

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

typedef struct _NDIS_TIMER
{
  /* 0x0000 */ struct _KTIMER Timer;
  /* 0x0028 */ struct _KDPC Dpc;
} NDIS_TIMER, *PNDIS_TIMER; /* size: 0x0048 */

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
    /* 0x0004 */ unsigned long Reserved : 12; /* bit position: 20 */
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
} KEVENT, *PKEVENT; /* size: 0x0010 */

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
  /* 0x0004 */ enum _NDIS_WORK_ITEM_TYPE WorkItemType;
  /* 0x0008 */ void* WorkItemContext;
} NDIS_MINIPORT_WORK_ITEM, *PNDIS_MINIPORT_WORK_ITEM; /* size: 0x000c */

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
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

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
  /* 0x0008 */ void* CallbackRoutine /* function */;
  /* 0x000c */ void* Buffer;
  /* 0x0010 */ unsigned long Length;
  /* 0x0014 */ unsigned char* Component;
  /* 0x0018 */ unsigned long Checksum;
  /* 0x001c */ unsigned char State;
  /* 0x001d */ char __PADDING__[3];
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD; /* size: 0x0020 */

typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0004 */ void* CancelSendContext;
  /* 0x0008 */ void* IndicateNetBufferListsContext;
  /* 0x000c */ struct NDIS_NBL_TRACKER_HANDLE__* IndicateNetBufferListsTracker;
  /* 0x0010 */ struct _NDIS_OBJECT_HEADER* IndicateNetBufferListsObject;
  /* 0x0014 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0018 */ void* ReturnNetBufferListsContext;
  /* 0x001c */ struct NDIS_NBL_TRACKER_HANDLE__* ReturnNetBufferListsTracker;
  /* 0x0020 */ struct _NDIS_OBJECT_HEADER* ReturnNetBufferListsObject;
  /* 0x0024 */ void* SendNetBufferListsContext;
  /* 0x0028 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsTracker;
  /* 0x002c */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsObject;
  /* 0x0030 */ void* SendNetBufferListsCompleteContext;
  /* 0x0034 */ struct NDIS_NBL_TRACKER_HANDLE__* SendNetBufferListsCompleteTracker;
  /* 0x0038 */ struct _NDIS_OBJECT_HEADER* SendNetBufferListsCompleteObject;
  /* 0x003c */ void* RequestHandle;
  union
  {
    /* 0x0040 */ void* CancelSendHandler /* function */;
    /* 0x0040 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0044 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0048 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x004c */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x0050 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0054 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0058 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x005c */

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
  /* 0x0004 */ void* Routine /* function */;
  /* 0x0008 */ unsigned char WrapperReserved[32];
} NDIS_WORK_ITEM, *PNDIS_WORK_ITEM; /* size: 0x0028 */

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
  /* 0x002c */ enum _NET_IF_ACCESS_TYPE AccessType;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ enum _NET_IF_CONNECTION_TYPE ConnectionType;
  /* 0x0038 */ unsigned long SupportedStatistics;
  /* 0x003c */ unsigned long DataBackFillSize;
  /* 0x0040 */ unsigned long ContextBackFillSize;
  /* 0x0044 */ unsigned long* SupportedOidList;
  /* 0x0048 */ unsigned long SupportedOidListLength;
  /* 0x004c */ unsigned long MaxLookaheadSizeAccessed;
} NDIS_RESTART_GENERAL_ATTRIBUTES, *PNDIS_RESTART_GENERAL_ATTRIBUTES; /* size: 0x0050 */

typedef enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
  PeriodicReceivesOff = 0,
  PeriodicReceivesOn = 1,
  PeriodicReceivesBlocked = 2,
} NDIS_M_PERIODIC_RECEIVE_STATE, *PNDIS_M_PERIODIC_RECEIVE_STATE;

typedef struct _NDIS_M_PERIODIC_RECEIVES
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* NextMiniportBlock;
  /* 0x0004 */ enum _NDIS_M_PERIODIC_RECEIVE_STATE State;
  /* 0x0008 */ unsigned long SpinLock;
  /* 0x000c */ void* LockThread;
  /* 0x0010 */ unsigned long LockDbg;
  /* 0x0014 */ long NumMQueuedNbls;
  /* 0x0018 */ long NumNblsDequeued;
  /* 0x001c */ struct _NET_BUFFER_LIST* QueuedHead;
  /* 0x0020 */ struct _NET_BUFFER_LIST* QueuedTail;
  /* 0x0024 */ unsigned long BoundToIP;
  /* 0x0028 */ unsigned char Paused;
  /* 0x002c */ long NblsAllocated;
  /* 0x0030 */ unsigned long TrackingQueued;
  /* 0x0034 */ unsigned long TrackingDequeued;
  /* 0x0038 */ unsigned long TrackingResources;
  /* 0x003c */ unsigned long TrackingPending;
  /* 0x0040 */ unsigned long TrackingIndicated;
  /* 0x0044 */ unsigned long TrackingEmptied;
  /* 0x0048 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0058 */ long WorkItemQueued;
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x005c */

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
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0010 */

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
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_PM_ADMIN_CONFIG, *PNDIS_PM_ADMIN_CONFIG; /* size: 0x0004 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

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
} IO_REMOVE_LOCK_COMMON_BLOCK, *PIO_REMOVE_LOCK_COMMON_BLOCK; /* size: 0x0018 */

typedef struct _IO_REMOVE_LOCK
{
  /* 0x0000 */ struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;
} IO_REMOVE_LOCK, *PIO_REMOVE_LOCK; /* size: 0x0018 */

class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> >
{
  /* 0x0000 */ struct Rtl::KString* _p;
}; /* size: 0x0004 */

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
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned long ReferenceCount;
  /* 0x0008 */ unsigned char Closing;
  /* 0x0009 */ char __PADDING__[3];
} ULONG_REFERENCE, *PULONG_REFERENCE; /* size: 0x000c */

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
  /* 0x0028 */ long CompletionStatus;
  /* 0x002c */ unsigned char Scheduled;
  /* 0x002d */ char __PADDING__[3];
} NDIS_D0_SIGNAL_WORK_ITEM, *PNDIS_D0_SIGNAL_WORK_ITEM; /* size: 0x0030 */

typedef struct _VPCI_INVALIDATE_BLOCK_OUTPUT
{
  /* 0x0000 */ unsigned __int64 BlockMask;
} VPCI_INVALIDATE_BLOCK_OUTPUT, *PVPCI_INVALIDATE_BLOCK_OUTPUT; /* size: 0x0008 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

class Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > >
{
  /* 0x0004 */ unsigned long m_bufferSize;
  /* 0x0008 */ unsigned long m_numElements;
  /* 0x000c */ class KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> >* _p;
}; /* size: 0x0010 */

class Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > >
{
  /* 0x0004 */ unsigned long m_bufferSize;
  /* 0x0008 */ unsigned long m_numElements;
  /* 0x000c */ class KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> >* _p;
}; /* size: 0x0010 */

enum PAUSE_OR_RESTART
{
  DatapathPaused = 0,
  DatapathRunning = 1,
};

class Rtl::KArray<void *>
{
  /* 0x0004 */ unsigned long m_bufferSize;
  /* 0x0008 */ unsigned long m_numElements;
  /* 0x000c */ void** _p;
}; /* size: 0x0010 */

class Ndis::BindState
{
  /* 0x0004 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ BOOL AllowBindDespiteMandatory;
  /* 0x0009 */ BOOL PretendBindingActive;
  /* 0x000a */ BOOL NeedsPauseAction;
  /* 0x000c */ void* m_AdditionalContext;
  /* 0x0010 */ int m_LastErrorCode;
  /* 0x0014 */ unsigned long m_bindSources;
  /* 0x0018 */ unsigned long m_unbindReasons;
  /* 0x001c */ unsigned long m_pauseReasons;
  /* 0x0020 */ enum PAUSE_OR_RESTART m_actualPauseState;
  /* 0x0024 */ class Rtl::KArray<void *> m_bindContext;
}; /* size: 0x0034 */

struct Ndis::BindStack
{
  /* 0x0004 */ class Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > Protocols;
  /* 0x0014 */ class Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > > Filters;
  /* 0x0024 */ class Ndis::BindState Miniport;
  /* 0x0058 */ unsigned long ChangeEpoch;
}; /* size: 0x005c */

class KPushLock
{
}; /* size: 0x0004 */

class KWaitEvent
{
}; /* size: 0x0010 */

class KWorkItem<Ndis::BindEngine>
{
}; /* size: 0x0018 */

struct Ndis::BindEngine
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* m_miniport;
      /* 0x0004 */ struct _KTHREAD* m_bindThread;
      /* 0x0008 */ struct NDIS_BIND_LINK_BASE* m_currentOperation;
      /* 0x000c */ class KPushLock m_lock;
      /* 0x0010 */ class KWaitEvent m_bindCompleteEvent;
      /* 0x0020 */ class KWorkItem<Ndis::BindEngine> m_asyncBindWorkItem;
      /* 0x0038 */ BOOL m_isDirty;
      /* 0x003c */ class KWaitEvent* m_removeReadyEvent;
    }; /* size: 0x003d */
    struct
    {
      /* 0x0000 */ unsigned long s_NumBindOperationsInProgress;
      /* 0x0004 */ long __PADDING__[15];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
}; /* size: 0x0040 */

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
  /* 0x0004 */ class KPushLock m_lock;
  /* 0x0008 */ class KWaitEvent m_isUnowned;
}; /* size: 0x0018 */

typedef struct _IF_PHYSICAL_ADDRESS_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned char Address[32];
} IF_PHYSICAL_ADDRESS_LH, *PIF_PHYSICAL_ADDRESS_LH; /* size: 0x0022 */

typedef struct _POWER_WORK_ITEM
{
  /* 0x0000 */ struct _NDIS_WORK_ITEM WorkItem;
  /* 0x0028 */ struct _IRP* pIrp;
} POWER_WORK_ITEM, *PPOWER_WORK_ITEM; /* size: 0x002c */

typedef struct _NDIS_MINIPORT_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_MINIPORT_BLOCK* NextMiniport;
  /* 0x0008 */ struct _NDIS_MINIPORT_BLOCK* BaseMiniport;
  /* 0x000c */ void* MiniportAdapterContext;
  union
  {
    /* 0x0010 */ struct _UNICODE_STRING Reserved4;
    struct
    {
      /* 0x0010 */ unsigned char MajorNdisVersion;
      /* 0x0011 */ unsigned char MinorNdisVersion;
      /* 0x0014 */ struct _NDIS_PCW_DATA_BLOCK* PcwDataBlock;
    }; /* size: 0x0006 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0018 */ long PcwDatapathEventMask;
    /* 0x0018 */ void* Reserved28;
  }; /* size: 0x0004 */
  /* 0x001c */ struct _NDIS_OPEN_BLOCK* OpenQueue;
  /* 0x0020 */ struct _REFERENCE ShortRef;
  union
  {
    /* 0x0028 */ long PcwDatapathCycleMask;
    /* 0x0028 */ void* Reserved29;
  }; /* size: 0x0004 */
  /* 0x002c */ unsigned char LinkStateIndicationFlags;
  /* 0x002d */ unsigned char LockAcquired;
  /* 0x002e */ unsigned char PmodeOpens;
  /* 0x002f */ unsigned char LoopbackOpens;
  /* 0x0030 */ unsigned long Lock;
  /* 0x0034 */ void* Reserved25;
  /* 0x0038 */ struct _NDIS_MINIPORT_INTERRUPT* Interrupt;
  /* 0x003c */ unsigned long Flags;
  /* 0x0040 */ unsigned long PnPFlags;
  /* 0x0044 */ struct _LIST_ENTRY PacketList;
  /* 0x004c */ struct _NDIS_PACKET* FirstPendingPacket;
  /* 0x0050 */ struct _NDIS_PACKET* ReturnPacketsQueue;
  /* 0x0054 */ unsigned long RequestBuffer;
  /* 0x0058 */ void* Reserved26;
  /* 0x005c */ struct _NDIS_MINIPORT_BLOCK* PrimaryMiniport;
  /* 0x0060 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x0064 */ void* OidContext;
  /* 0x0068 */ unsigned long SupportedOidListLength;
  /* 0x006c */ struct _CM_RESOURCE_LIST* Resources;
  /* 0x0070 */ struct _NDIS_TIMER WakeUpDpcTimer;
  union
  {
    /* 0x00b8 */ struct _UNICODE_STRING Reserved20;
    struct
    {
      /* 0x00b8 */ enum _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState;
      /* 0x00bc */ enum _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x00c0 */ struct _UNICODE_STRING SymbolicLinkName;
  /* 0x00c8 */ unsigned long CheckForHangSeconds;
  /* 0x00cc */ unsigned short CFHangTicks;
  /* 0x00ce */ unsigned short CFHangCurrentTick;
  /* 0x00d0 */ int ResetStatus;
  /* 0x00d4 */ struct _NDIS_OPEN_BLOCK* ResetOpen;
  union
  {
    /* 0x00d8 */ struct _X_FILTER* EthDB;
    /* 0x00d8 */ struct _X_FILTER* NullDB;
  }; /* size: 0x0004 */
  /* 0x00dc */ void* Unused1;
  /* 0x00e0 */ void* Unused2;
  /* 0x00e4 */ void* Unused3;
  /* 0x00e8 */ void* PacketIndicateHandler /* function */;
  /* 0x00ec */ void* SendCompleteHandler /* function */;
  /* 0x00f0 */ void* SendResourcesHandler /* function */;
  /* 0x00f4 */ void* ResetCompleteHandler /* function */;
  /* 0x00f8 */ enum _NDIS_MEDIUM MediaType;
  /* 0x00fc */ unsigned long AutoNegotiationFlags;
  /* 0x0100 */ enum _NDIS_INTERFACE_TYPE Reserved5;
  /* 0x0104 */ enum _NDIS_INTERFACE_TYPE AdapterType;
  union
  {
    /* 0x0108 */ struct _DEVICE_OBJECT* Reserved6;
    /* 0x0108 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  }; /* size: 0x0004 */
  union
  {
    /* 0x010c */ struct _DEVICE_OBJECT* Reserved7;
    /* 0x010c */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  }; /* size: 0x0004 */
  /* 0x0110 */ unsigned long* SupportedOidList;
  /* 0x0114 */ struct _NDIS_SG_DMA_BLOCK* MiniportSGDmaBlock;
  /* 0x0118 */ struct _NDIS_AF_LIST* CallMgrAfList;
  /* 0x011c */ void* MiniportThread;
  /* 0x0120 */ void* SetInfoBuf;
  /* 0x0124 */ unsigned short SetInfoBufLen;
  /* 0x0126 */ unsigned short MaxSendPackets;
  /* 0x0128 */ int FakeStatus;
  union
  {
    /* 0x012c */ void* Reserved24;
    /* 0x012c */ void* GlobalTriageBlock;
  }; /* size: 0x0004 */
  /* 0x0130 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* CombinedNdisRSSParameters;
  union
  {
    /* 0x0134 */ struct _NDIS_MINIPORT_TIMER* TimerQueue;
    /* 0x0134 */ struct _NDIS_TIMER_ENTRY* TimerObjectQueue;
  }; /* size: 0x0004 */
  /* 0x0138 */ unsigned int MacOptions;
  /* 0x013c */ struct _NDIS_REQUEST* PendingRequest;
  /* 0x0140 */ unsigned int MaximumLongAddresses;
  /* 0x0144 */ unsigned int Reserved27;
  /* 0x0148 */ unsigned int MiniportCurrentLookahead;
  /* 0x014c */ unsigned int MiniportMaximumLookahead;
  union
  {
    /* 0x0150 */ unsigned long Reserved1;
    /* 0x0150 */ struct _X_FILTER* NullMediaFilter;
  }; /* size: 0x0004 */
  /* 0x0154 */ void* DisableInterruptHandler /* function */;
  /* 0x0158 */ void* EnableInterruptHandler /* function */;
  /* 0x015c */ void* SendPacketsHandler /* function */;
  /* 0x0160 */ void* DeferredSendHandler /* function */;
  /* 0x0164 */ void* EthRxIndicateHandler /* function */;
  /* 0x0168 */ void* Reserved30;
  /* 0x016c */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0170 */ void* EthRxCompleteHandler /* function */;
  /* 0x0174 */ void* Reserved31;
  /* 0x0178 */ void* SavedNextSendNetBufferListsHandler /* function */;
  /* 0x017c */ void* StatusHandler /* function */;
  /* 0x0180 */ void* StatusCompleteHandler /* function */;
  /* 0x0184 */ void* TDCompleteHandler /* function */;
  /* 0x0188 */ void* QueryCompleteHandler /* function */;
  /* 0x018c */ void* SetCompleteHandler /* function */;
  /* 0x0190 */ void* WanSendCompleteHandler /* function */;
  /* 0x0194 */ void* WanRcvHandler /* function */;
  /* 0x0198 */ void* WanRcvCompleteHandler /* function */;
  /* 0x019c */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x01a0 */ struct _KEVENT* PnPEventLockEvent;
  /* 0x01a4 */ struct _NDIS_OBJECT_HEADER* MediaSpecificAttributes;
  /* 0x01a8 */ struct _IRP* PendingQueryPowerIrp;
  /* 0x01ac */ struct _NDIS_INTERRUPT_BLOCK* InterruptEx;
  /* 0x01b0 */ unsigned __int64 XmitLinkSpeed;
  /* 0x01b8 */ unsigned __int64 RcvLinkSpeed;
  /* 0x01c0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x01c4 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions;
  /* 0x01c8 */ unsigned long MiniportAutoNegotiationFlags;
  /* 0x01cc */ struct _SINGLE_LIST_ENTRY WorkQueue[7];
  /* 0x01e8 */ struct _SINGLE_LIST_ENTRY SingleWorkItems[6];
  /* 0x0200 */ unsigned char SendFlags;
  /* 0x0201 */ unsigned char MP6SupportPM;
  /* 0x0202 */ unsigned char XState;
  /* 0x0204 */ struct _NDIS_LOG* Log;
  /* 0x0208 */ struct _CM_RESOURCE_LIST* AllocatedResources;
  /* 0x020c */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
  /* 0x0210 */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x0214 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x0218 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x021c */ struct _NDIS_PNP_CAPABILITIES PMCapabilities61;
  /* 0x022c */ struct _NDIS_PM_CAPABILITIES PMHardwareCapabilities;
  /* 0x0268 */ struct _NDIS_PM_CAPABILITIES PMAdvertisedCapabilities;
  /* 0x02a4 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x02b8 */ struct _NDIS_PM_PARAMETERS PMWmiParameters;
  /* 0x02cc */ struct _DEVICE_CAPABILITIES OriginalDeviceCaps;
  /* 0x030c */ struct _DEVICE_CAPABILITIES DeviceCaps;
  /* 0x034c */ unsigned char S0WakeupSupported;
  /* 0x0350 */ unsigned long WakeUpEnable;
  /* 0x0354 */ struct _IRP* WaitWakeIrp;
  /* 0x0358 */ struct _KEVENT WaitWakeIrpCompleted;
  /* 0x0368 */ BOOL WaitWakeIoCompletionRoutineRan;
  /* 0x0369 */ BOOL WaitWakeCancelInProgress;
  /* 0x036a */ BOOL WaitWakeCancelAttempted;
  /* 0x036c */ enum _SYSTEM_POWER_STATE WaitWakeSystemState;
  /* 0x0370 */ union _LARGE_INTEGER VcIndex;
  /* 0x0378 */ unsigned long VcCountLock;
  /* 0x037c */ struct _LIST_ENTRY WmiEnabledVcs;
  /* 0x0384 */ struct _NDIS_GUID* pNdisGuidMap;
  /* 0x0388 */ struct _NDIS_GUID* pCustomGuidMap;
  /* 0x038c */ unsigned short VcCount;
  /* 0x038e */ unsigned short cNdisGuidMap;
  /* 0x0390 */ unsigned short cCustomGuidMap;
  /* 0x0398 */ struct _NDIS_TIMER MediaDisconnectTimer;
  /* 0x03e0 */ enum _NDIS_PNP_DEVICE_STATE PnPDeviceState;
  /* 0x03e4 */ enum _NDIS_PNP_DEVICE_STATE OldPnPDeviceState;
  /* 0x03e8 */ struct _KDPC DeferredDpc;
  /* 0x0408 */ union _LARGE_INTEGER StartTicks;
  /* 0x0410 */ struct _NDIS_PACKET** IndicatedPacket;
  /* 0x0414 */ struct _KEVENT* RemoveReadyEvent;
  /* 0x0418 */ struct _KEVENT* AllRequestsCompletedEvent;
  /* 0x041c */ unsigned long InitTimeMs;
  /* 0x0420 */ struct _NDIS_MINIPORT_WORK_ITEM WorkItemBuffer[6];
  /* 0x0468 */ struct _OID_LIST* OidList;
  /* 0x046c */ unsigned short InternalResetCount;
  /* 0x046e */ unsigned short MiniportResetCount;
  /* 0x0470 */ unsigned short MediaSenseConnectCount;
  /* 0x0472 */ unsigned short MediaSenseDisconnectCount;
  /* 0x0474 */ struct _NDIS_PACKET** xPackets;
  /* 0x0478 */ unsigned long UserModeOpenReferences;
  /* 0x047c */ void* WSendPacketsHandler /* function */;
  /* 0x0480 */ unsigned long MiniportAttributes;
  /* 0x0484 */ unsigned short NumOpens;
  /* 0x0486 */ unsigned short CFHangXTicks;
  /* 0x0488 */ unsigned long RequestCount;
  /* 0x048c */ unsigned long IndicatedPacketsCount;
  /* 0x0490 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;
  /* 0x0494 */ enum _NDIS_MEDIUM MiniportMediaType;
  /* 0x0498 */ struct _NDIS_REQUEST* LastRequest;
  /* 0x049c */ void* FakeMac;
  /* 0x04a0 */ unsigned long LockDbg;
  /* 0x04a4 */ unsigned long LockDbgX;
  /* 0x04a8 */ void* LockThread;
  /* 0x04ac */ unsigned long InfoFlags;
  /* 0x04b0 */ unsigned long TimerQueueLock;
  /* 0x04b4 */ struct _KEVENT* ResetCompletedEvent;
  /* 0x04b8 */ void* SavedPacketIndicateHandler /* function */;
  /* 0x04bc */ long RegisteredInterrupts;
  /* 0x04c0 */ unsigned long SetOid;
  /* 0x04c4 */ struct _KEVENT CFHCompletedEvent;
  /* 0x04d4 */ struct _WORK_QUEUE_ITEM CFHWorkItem;
  /* 0x04e4 */ volatile long CFHWorkItemQueued;
  /* 0x04e8 */ void* DeviceContext;
  /* 0x04ec */ struct _NDIS_MINIPORT_RSS_PARAMETERS_CACHE* RssParametersBuffer;
  /* 0x04f0 */ unsigned char UsingMSIX;
  /* 0x04f1 */ unsigned char Miniport5InNdis6Mode;
  /* 0x04f2 */ unsigned char Miniport5HasNdis6Component;
  /* 0x04f3 */ unsigned char InitMode;
  /* 0x04f4 */ unsigned char InitModeNotNeededAnymore;
  /* 0x04f5 */ char MediaChangeFilters;
  /* 0x04f6 */ unsigned char CheckPacketFilters;
  /* 0x04f7 */ unsigned char ReceiveFilters;
  /* 0x04f8 */ unsigned long RecvLock;
  /* 0x04fc */ enum _NDIS_MINIPORT_STATE RecvState;
  /* 0x0500 */ unsigned long OutstandingReceives;
  /* 0x0504 */ void* MiniportRecvLockThread;
  /* 0x0508 */ unsigned long RecvLockDbg;
  /* 0x050c */ void* NextSendPacketsHandler /* function */;
  /* 0x0510 */ void* FinalSendPacketsHandler /* function */;
  /* 0x0514 */ struct _NDIS_FILTER_BLOCK* LowestFilter;
  /* 0x0518 */ struct _NDIS_FILTER_BLOCK* HighestFilter;
  /* 0x051c */ void* ShutdownContext;
  /* 0x0520 */ void* ShutdownHandler /* function */;
  /* 0x0524 */ struct _KBUGCHECK_CALLBACK_RECORD BugcheckCallbackRecord;
  /* 0x0544 */ void* TopIndicateNetBufferListsHandler /* function */;
  /* 0x0548 */ void* TopIndicateLoopbackNetBufferListsHandler /* function */;
  /* 0x054c */ void* Ndis5PacketIndicateHandler /* function */;
  /* 0x0550 */ void* MiniportReturnPacketHandler /* function */;
  /* 0x0554 */ void* MiniportReturnPacketContext;
  /* 0x0558 */ void* SynchronousReturnPacketHandler /* function */;
  /* 0x055c */ void* SynchronousReturnPacketContext;
  /* 0x0560 */ struct _LIST_ENTRY OidRequestList;
  /* 0x0568 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x056c */ struct _NDIS_OID_REQUEST* ProcessedOidRequest;
  /* 0x0570 */ struct _NDIS_OID_REQUEST* HookedOidRequest;
  /* 0x0574 */ void* NextCoOidRequestHandle;
  /* 0x0578 */ unsigned long Ndis6ProtocolsBound;
  /* 0x057c */ unsigned long PmodeOpen6;
  /* 0x0580 */ enum _NDIS_MINIPORT_STATE State;
  /* 0x0584 */ struct _KEVENT* AsyncOpCompletionEvent;
  /* 0x0588 */ int AsyncOpCompletionStatus;
  /* 0x0590 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0598 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x05a0 */ unsigned long SupportedPacketFilters;
  /* 0x05a4 */ struct _NDIS_MINIPORT_HANDLERS NoFilter;
  /* 0x0600 */ struct _NDIS_MINIPORT_HANDLERS Next;
  /* 0x065c */ unsigned char ReceivePathEnabled;
  /* 0x065d */ unsigned char NormalTopReceive;
  /* 0x0660 */ enum _NDIS_SEND_PATH_TYPE SendPathType;
  /* 0x0664 */ enum _NDIS_SEND_PATH_TYPE SavedSendPathType;
  /* 0x0668 */ unsigned char SavedReceivePathEnabled;
  /* 0x066c */ unsigned long FilterPnPFlags;
  /* 0x0670 */ unsigned long SupportedStatistics;
  /* 0x0674 */ unsigned long cDpcSendCompletes;
  /* 0x0678 */ unsigned long cDpcRcvIndications;
  /* 0x067c */ unsigned long cDpcRcvIndicationCalls;
  /* 0x0680 */ unsigned long cDpcNbSendCompletes;
  /* 0x0684 */ unsigned long cDpcNblSendCompletes;
  /* 0x0688 */ unsigned long cDpcNblIndications;
  /* 0x068c */ unsigned long cDpcMaxPacketsIndicated;
  /* 0x0690 */ unsigned long cDpcTotalDpcCount;
  /* 0x0694 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RecvScaleCapabilities;
  /* 0x06a8 */ struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES* GeneralAttributes;
  /* 0x06ac */ struct _LIST_ENTRY PortList;
  /* 0x06b4 */ unsigned char* AllocatedPortIndices;
  /* 0x06b8 */ unsigned long AllocatedPortIndicesLength;
  /* 0x06bc */ unsigned long NumberOfPorts;
  /* 0x06c0 */ unsigned long NumberOfActivePorts;
  /* 0x06c8 */ unsigned __int64 MiniportXmitLinkSpeed;
  /* 0x06d0 */ unsigned __int64 MiniportRcvLinkSpeed;
  /* 0x06d8 */ struct _NDIS_TIMER InitModeTimeoutTimer;
  /* 0x0720 */ struct _NDIS_WORK_ITEM InitModeTimeoutWorkItem;
  /* 0x0748 */ struct _KEVENT InitModeTimeoutTimerQueuedEvent;
  /* 0x0758 */ unsigned long DataBackFillSize;
  /* 0x075c */ unsigned long ContextBackFillSize;
  /* 0x0760 */ struct _NDIS_RESTART_GENERAL_ATTRIBUTES TopFilterRestartAttributes;
  /* 0x07b0 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES TopRecvScaleCapabilities;
  /* 0x07c4 */ unsigned long NsiOpenReferences;
  /* 0x07c8 */ void* ProcessingOpen;
  /* 0x07cc */ struct _KEVENT* NsiRequestsCompletedEvent;
  /* 0x07d0 */ enum _DEVICE_POWER_STATE QueryPowerDeviceState;
  /* 0x07d4 */ unsigned char MinimumNdisMajorVersion;
  /* 0x07d5 */ unsigned char MinimumNdisMinorVersion;
  /* 0x07d8 */ struct _NDIS_MINIPORT_STATS* BottomIfStats;
  /* 0x07dc */ struct _NDIS_M_PERIODIC_RECEIVES PeriodicReceiveQueue;
  /* 0x0838 */ struct PNDIS_PER_PROCESSOR_SLOT__* PeriodicReceivesNblCountIndex;
  /* 0x083c */ enum _NDIS_PORT_CONTROL_STATE DefaultSendControlState;
  /* 0x0840 */ enum _NDIS_PORT_CONTROL_STATE DefaultRcvControlState;
  /* 0x0844 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultSendAuthorizationState;
  /* 0x0848 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultRcvAuthorizationState;
  /* 0x084c */ enum _NDIS_PORT_CONTROL_STATE DefaultPortSendControlState;
  /* 0x0850 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortRcvControlState;
  /* 0x0854 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState;
  /* 0x0858 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState;
  /* 0x085c */ struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES PciDeviceCustomProperties;
  /* 0x0890 */ void* TopNdis5PacketIndicateHandler /* function */;
  /* 0x0894 */ unsigned long* ndisSupportedOidList;
  /* 0x0898 */ unsigned long ndisSupportedOidListLength;
  /* 0x089c */ unsigned long MsiIntCount;
  /* 0x08a0 */ struct _WORK_QUEUE_ITEM MiniportDpcWorkItem;
  /* 0x08b0 */ unsigned __int64 InvalidFrames;
  /* 0x08b8 */ long PagingPathCount;
  /* 0x08bc */ struct _LIST_ENTRY ReceiveQueueList;
  /* 0x08c4 */ unsigned char* AllocatedQueueIndices;
  /* 0x08c8 */ unsigned long AllocatedQueueIndicesLength;
  /* 0x08cc */ unsigned long NumReceiveQueues;
  /* 0x08d0 */ struct _LIST_ENTRY ReceiveFilterList;
  /* 0x08d8 */ unsigned char* AllocatedReceiveFilterIndices;
  /* 0x08dc */ unsigned long AllocatedReceiveFilterIndicesLength;
  /* 0x08e0 */ unsigned long NumReceiveFilters;
  /* 0x08e4 */ unsigned long EnabledReceiveFilterTypes;
  /* 0x08e8 */ unsigned long EnabledReceiveQueueTypes;
  /* 0x08ec */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterHwCapabilities;
  /* 0x08f0 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterCurrentCapabilities;
  /* 0x08f4 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* TopReceiveFilterCurrentCapabilities;
  /* 0x08f8 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchHwCapabilities;
  /* 0x08fc */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchCurrentCapabilities;
  /* 0x0900 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* TopNicSwitchCurrentCapabilities;
  /* 0x0904 */ struct _LIST_ENTRY SharedMemoryBlockList;
  /* 0x090c */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0910 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0914 */ void* AllocateSharedMemoryContext;
  /* 0x0918 */ struct PCI_MSI_CAPABILITY MsiCaps;
  /* 0x0930 */ struct PCI_MSIX_CAPABILITY MsiXCaps;
  /* 0x0940 */ unsigned __int64 NumberOfIndirectionTableChanges;
  /* 0x0948 */ unsigned int PciDeviceSriovSupport;
  union
  {
    /* 0x094c */ unsigned char BeginSavedFields;
    /* 0x094c */ unsigned long NumUserOpens;
  }; /* size: 0x0004 */
  /* 0x0950 */ struct _NDIS_MINIPORT_OFFLOAD_REG OffloadRegistry;
  /* 0x0954 */ unsigned short MediaDisconnectTimeOut;
  /* 0x0956 */ unsigned short SGMapRegistersNeeded;
  /* 0x0958 */ unsigned long DriverVerifyFlags;
  /* 0x095c */ void* SetBusData /* function */;
  /* 0x0960 */ void* GetBusData /* function */;
  /* 0x0964 */ void* BusDataContext;
  /* 0x0968 */ enum _INTERFACE_TYPE BusType;
  /* 0x096c */ unsigned long BusNumber;
  /* 0x0970 */ unsigned long SlotNumber;
  /* 0x0974 */ struct _NDIS_EVENT OpenReadyEvent;
  /* 0x0984 */ unsigned long NumAdminOpens;
  /* 0x0988 */ struct _NDIS_M_DRIVER_BLOCK* DriverHandle;
  /* 0x098c */ struct _NDIS_BIND_PATHS* BindPaths;
  /* 0x0990 */ enum _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediumType;
  /* 0x0994 */ void* SecurityDescriptor;
  /* 0x0998 */ struct _UNICODE_STRING BaseName;
  /* 0x09a0 */ struct _UNICODE_STRING MiniportName;
  /* 0x09a8 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x09ac */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x09b0 */ struct _DEVICE_OBJECT* NextDeviceObject;
  /* 0x09b4 */ struct _NDIS_MINIPORT_BLOCK* NextGlobalMiniport;
  /* 0x09b8 */ struct _UNICODE_STRING* pAdapterInstanceName;
  /* 0x09bc */ unsigned long PnPCapabilities;
  /* 0x09c0 */ enum _DEVICE_POWER_STATE CurrentDevicePowerState;
  /* 0x09c4 */ unsigned long PowerStateLock;
  /* 0x09c8 */ enum _DEVICE_POWER_STATE DriverPowerState;
  /* 0x09cc */ enum _DEVICE_POWER_STATE PrevDriverPowerState;
  /* 0x09d0 */ struct _NET_BUFFER_LIST* LowPowerRcvReturnNbls;
  /* 0x09d4 */ unsigned long PendingReturnNBLCount;
  /* 0x09d8 */ unsigned char SurpriseRemoveFlushedRcvReturnQueue;
  /* 0x09dc */ struct NDIS_NBL_TRACKER_HANDLE__* LowPowerRcvReturnNblTracker;
  /* 0x09e0 */ struct _NDIS_PM_ADMIN_CONFIG PMAdminConfig;
  /* 0x09e4 */ struct _KSEMAPHORE PMPatternSemaphore;
  /* 0x09f8 */ struct _KSEMAPHORE PMOffloadSemaphore;
  /* 0x0a0c */ void* BusInterface;
  /* 0x0a10 */ unsigned short InstanceNumber;
  /* 0x0a14 */ void* ConfigurationHandle;
  /* 0x0a18 */ struct _GUID InterfaceGuid;
  /* 0x0a28 */ union _NET_LUID_LH NetLuid;
  /* 0x0a30 */ unsigned char IfBlockAvailable;
  /* 0x0a34 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x0a38 */ struct _KEVENT* IfBlockPointerRefZeroEvent;
  /* 0x0a3c */ unsigned int IfIndex;
  /* 0x0a40 */ enum _NET_IF_ADMIN_STATUS AdminStatus;
  /* 0x0a44 */ enum _NET_IF_OPER_STATUS OperStatus;
  /* 0x0a48 */ unsigned long OperStatusFlags;
  union
  {
    /* 0x0a4c */ void* SendHandler /* function */;
    /* 0x0a4c */ void* WanSendHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0a50 */ struct NDIS_NBL_TRACKER_HANDLE__* NblTracker;
  /* 0x0a54 */ struct _DEVICE_RESET_INTERFACE_STANDARD* ReenumerateSelfInterface;
  /* 0x0a58 */ struct _NDIS_MINIPORT_OFFLOAD* Offload;
  /* 0x0a5c */ void* NDKBlock;
  /* 0x0a60 */ void* AddDeviceContext;
  /* 0x0a64 */ struct _IO_REMOVE_LOCK RemoveLock;
  /* 0x0a7c */ struct _UNICODE_STRING DevinterfaceNetSymbolicLinkName;
  /* 0x0a84 */ unsigned long PhysicalMediumInInf;
  /* 0x0a88 */ class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > ExportName;
  /* 0x0a8c */ class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > FilterClass;
  /* 0x0a90 */ void* StatusProcessingThread;
  /* 0x0a94 */ unsigned long StatusProcessingDbgX;
  /* 0x0a98 */ struct _UNICODE_STRING FdoName;
  /* 0x0aa0 */ struct _KEVENT PowerD0CompleteEvent;
  /* 0x0ab0 */ long LastD0CompleteStatus;
  /* 0x0ab4 */ enum _NDIS_MINIPORT_EVENT LastD0Reason;
  /* 0x0ab8 */ unsigned long DirectOidRequestCount;
  /* 0x0abc */ struct _KEVENT* AllDirectRequestsCompletedEvent;
  /* 0x0ac0 */ struct _NDIS_HD_SPLIT_CURRENT_CONFIG* HDSplitCurrentConfig;
  /* 0x0ac4 */ void* MSIXConfigContext;
  /* 0x0ac8 */ void* SetMSIXTableEntry /* function */;
  /* 0x0acc */ void* MaskMSIXTableEntry /* function */;
  /* 0x0ad0 */ void* UnmaskMSIXTableEntry /* function */;
  /* 0x0ad4 */ struct _WORK_QUEUE_ITEM DevicePowerStateWorkItem;
  /* 0x0ae4 */ struct _WORK_QUEUE_ITEM SystemPowerStateWorkItem;
  /* 0x0af4 */ struct _NDIS_RECEIVE_QUEUE_BLOCK* DefaultReceiveQueue;
  /* 0x0af8 */ unsigned long MaxNumRssProcessors;
  /* 0x0afc */ struct _PROCESSOR_NUMBER RssBaseProcessor;
  /* 0x0b00 */ struct _PROCESSOR_NUMBER RssMaxProcessor;
  /* 0x0b04 */ enum _NDIS_RSS_PROFILE RssProfile;
  /* 0x0b08 */ unsigned short NumaNodeId;
  /* 0x0b0c */ unsigned short* NumaDistances;
  /* 0x0b10 */ struct _UNICODE_STRING* pModifiedInstanceName;
  /* 0x0b14 */ unsigned long SyncFlags;
  /* 0x0b18 */ unsigned long WSyncFlags;
  /* 0x0b1c */ unsigned long InterlockedFlags;
  /* 0x0b20 */ struct _ULONG_REFERENCE Ref;
  /* 0x0b2c */ struct _NDIS_SELECTIVE_SUSPEND* SelectiveSuspend;
  /* 0x0b30 */ struct _NDIS_MINIPORT_AOAC* AoAc;
  /* 0x0b34 */ enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason;
  /* 0x0b38 */ struct NDIS_EVENT_LOG_HANDLE__* PnpEventLog;
  /* 0x0b3c */ struct _NDIS_D0_SIGNAL_WORK_ITEM D0CompleteSignalWorkItem;
  /* 0x0b6c */ struct _NDIS_PHYSICAL_PERFORMANCE_COUNTERS* PhysicalPerformanceCounters;
  /* 0x0b70 */ union _LARGE_INTEGER TimeOfInitialization;
  /* 0x0b78 */ union _LARGE_INTEGER LastSystemSleepTime;
  /* 0x0b80 */ unsigned __int64 TotalSystemSleepTimeMs;
  /* 0x0b88 */ struct _NDIS_SRIOV_CAPABILITIES* SriovHwCapabilities;
  /* 0x0b8c */ struct _NDIS_SRIOV_CAPABILITIES* SriovCurrentCapabilities;
  /* 0x0b90 */ unsigned __int64 InvalidateBlockMask;
  /* 0x0b98 */ struct _IRP* InvalidateBlockIoctlPf;
  /* 0x0b9c */ struct _IRP* InvalidateBlockIoctlVf;
  /* 0x0ba0 */ struct _VPCI_INVALIDATE_BLOCK_OUTPUT InvalidateBlockVfParams;
  /* 0x0ba8 */ struct _KEVENT InvalidateBlockEvent;
  /* 0x0bb8 */ unsigned short InvalidateVfId;
  /* 0x0bba */ unsigned char InvalidateBlockCancelling;
  /* 0x0bbc */ struct _NDIS_PF_BLOCK* PFBlock;
  /* 0x0bc0 */ unsigned long NumSwitches;
  /* 0x0bc4 */ struct _LIST_ENTRY NicSwitchList;
  /* 0x0bcc */ unsigned long NumAllocatedVFs;
  /* 0x0bd0 */ struct _LIST_ENTRY VFList;
  /* 0x0bd8 */ unsigned long NumActiveVPorts;
  /* 0x0bdc */ struct _LIST_ENTRY VPortList;
  /* 0x0be4 */ unsigned char* AllocatedVPortIndices;
  /* 0x0be8 */ unsigned long AllocatedVPortIndicesLength;
  /* 0x0bec */ void* SetVirtualFunctionData /* function */;
  /* 0x0bf0 */ void* GetVirtualFunctionData /* function */;
  /* 0x0bf4 */ void* EnableVirtualization /* function */;
  /* 0x0bf8 */ void* GetVirtualDeviceLocation /* function */;
  /* 0x0bfc */ void* GetVirtualFunctionProbedBars /* function */;
  /* 0x0c00 */ void* VirtInterfaceContext;
  /* 0x0c04 */ struct _UNICODE_STRING DevinterfaceVirtSymbolicLinkName;
  /* 0x0c0c */ void* VpciInterfaceDereference /* function */;
  /* 0x0c10 */ void* WriteVfConfigBlock /* function */;
  /* 0x0c14 */ void* ReadVfConfigBlock /* function */;
  /* 0x0c18 */ void* VpciInterfaceContext;
  /* 0x0c1c */ unsigned int VfSerialNumber;
  /* 0x0c20 */ struct _LUID SriovLuid;
  /* 0x0c28 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x0c2c */ struct NDIS_REFCOUNT_HANDLE__* NsiRefCountTracker;
  /* 0x0c30 */ struct _NDIS_QOS_CAPABILITIES* QosHwCapabilities;
  /* 0x0c34 */ struct _NDIS_QOS_CAPABILITIES* QosCurrentCapabilities;
  /* 0x0c38 */ struct _NDIS_QOS_PARAMETERS* QosOperationalParameters;
  /* 0x0c3c */ unsigned long QosOperationalParametersBufferSize;
  /* 0x0c40 */ struct _NDIS_QOS_PARAMETERS* QosRemoteParameters;
  /* 0x0c44 */ unsigned long QosRemoteParametersBufferSize;
  /* 0x0c48 */ unsigned __int64 DeviceFlags;
  /* 0x0c50 */ void* VerifierContext;
  /* 0x0c54 */ struct _WORK_QUEUE_ITEM SurpriseRemovalWorkItem;
  /* 0x0c64 */ struct Ndis::BindStack Bindings;
  /* 0x0cc0 */ struct Ndis::BindEngine BindEngine;
  /* 0x0d00 */ class Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER> MiniportOwner;
  /* 0x0d18 */ BOOL PmInterruptedByPnp;
  /* 0x0d19 */ BOOL DoNotBlockOnMiniportLock;
  /* 0x0d1a */ BOOL PoFxDStateReportingEnabled;
  /* 0x0d1c */ struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__* HookAdapterHandle;
  /* 0x0d20 */ struct _WORK_QUEUE_ITEM InterfaceUpdateWorkItem;
  /* 0x0d30 */ BOOL InterfaceUpdateInProgress;
  /* 0x0d31 */ BOOL MacAddressUpdateQueued;
  /* 0x0d32 */ BOOL MtuUpdateQueued;
  /* 0x0d34 */ struct _IF_PHYSICAL_ADDRESS_LH PendingMacAddress;
  /* 0x0d58 */ unsigned long PendingMtuSize;
  /* 0x0d5c */ struct RECORDER_LOG__* BlackBoxHandle;
  /* 0x0d60 */ struct _KEVENT* PowerCompleteEvent;
  /* 0x0d64 */ long PowerCompleteStatus;
  /* 0x0d68 */ struct _POWER_WORK_ITEM DevicePowerOnWorkItem;
  /* 0x0d94 */ struct _POWER_WORK_ITEM DevicePowerDownWorkItem;
  /* 0x0dc0 */ void* PdcHandle;
  /* 0x0dc8 */ struct _NDIS_TIMER PdcTaskClientDisableTimer;
  /* 0x0e10 */ struct _NDIS_WORK_ITEM PdcTaskClientDisableWorkItem;
  /* 0x0e38 */ volatile long PdcTaskClientMode;
  /* 0x0e3c */ unsigned long ModernStandbyWoLMagicPacketEnable;
} NDIS_MINIPORT_BLOCK, *PNDIS_MINIPORT_BLOCK; /* size: 0x0e40 */

