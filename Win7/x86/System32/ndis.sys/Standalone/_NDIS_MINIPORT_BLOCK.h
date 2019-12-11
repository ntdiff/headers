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
  /* 0x0004 */ unsigned short* Buffer;
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
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
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
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
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
  /* 0x0024 */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
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

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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
} NDIS_PM_CAPABILITIES, *PNDIS_PM_CAPABILITIES; /* size: 0x0034 */

typedef struct _NDIS_PM_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long EnabledWoLPacketPatterns;
  /* 0x0008 */ unsigned long EnabledProtocolOffloads;
  /* 0x000c */ unsigned long WakeUpFlags;
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0010 */

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
    /* 0x0004 */ unsigned long Reserved : 13; /* bit position: 19 */
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

typedef enum _NDIS_MINIPORT_STATE
{
  NdisMiniportUndefindState = 0,
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

typedef struct _ULONG_REFERENCE
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned long ReferenceCount;
  /* 0x0008 */ unsigned char Closing;
  /* 0x0009 */ char __PADDING__[3];
} ULONG_REFERENCE, *PULONG_REFERENCE; /* size: 0x000c */

typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0004 */ void* CancelSendContext;
  /* 0x0008 */ void* IndicateNetBufferListsContext;
  /* 0x000c */ void* IndicateNetBufferListsObject;
  /* 0x0010 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0014 */ void* ReturnNetBufferListsContext;
  /* 0x0018 */ void* ReturnNetBufferListsObject;
  /* 0x001c */ void* SendNetBufferListsContext;
  /* 0x0020 */ void* SendNetBufferListsObject;
  /* 0x0024 */ void* SendNetBufferListsCompleteContext;
  /* 0x0028 */ void* SendNetBufferListsCompleteObject;
  /* 0x002c */ void* RequestHandle;
  /* 0x0030 */ void* StatusHandle;
  /* 0x0034 */ void* DevicePnPEventNotifyHandle;
  /* 0x0038 */ void* NetPnPEventHandle;
  union
  {
    /* 0x003c */ void* CancelSendHandler /* function */;
    /* 0x003c */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0040 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0044 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x0048 */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x004c */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0050 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0054 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x0058 */

typedef struct _NDIS_RECEIVE_SCALE_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long CapabilitiesFlags;
  /* 0x0008 */ unsigned long NumberOfInterruptMessages;
  /* 0x000c */ unsigned long NumberOfReceiveQueues;
} NDIS_RECEIVE_SCALE_CAPABILITIES, *PNDIS_RECEIVE_SCALE_CAPABILITIES; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

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

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

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

typedef struct _PCI_MSI_MESSAGE_CONTROL
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
} PCI_MSI_MESSAGE_CONTROL, *PPCI_MSI_MESSAGE_CONTROL; /* size: 0x0002 */

typedef struct _PCI_MSI_MESSAGE_ADDRESS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Reserved : 2; /* bit position: 0 */
    /* 0x0000 */ unsigned long Address : 30; /* bit position: 2 */
  }; /* bitfield */
} PCI_MSI_MESSAGE_ADDRESS, *PPCI_MSI_MESSAGE_ADDRESS; /* size: 0x0004 */

struct PCI_MSI_CAPABILITY
{
  /* 0x0000 */ struct _PCI_CAPABILITIES_HEADER Header;
  /* 0x0002 */ struct _PCI_MSI_MESSAGE_CONTROL MessageControl;
  union
  {
    union
    {
      /* 0x0004 */ struct _PCI_MSI_MESSAGE_ADDRESS Register;
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
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_MINIPORT_OFFLOAD_REG, *PNDIS_MINIPORT_OFFLOAD_REG; /* size: 0x0004 */

typedef struct _NDIS_EVENT
{
  /* 0x0000 */ struct _KEVENT Event;
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0010 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0018 */ struct _KTHREAD* OwnerThread;
  /* 0x001c */ unsigned char Abandoned;
  /* 0x001d */ unsigned char ApcDisable;
  /* 0x001e */ char __PADDING__[2];
} KMUTANT, *PKMUTANT; /* size: 0x0020 */

typedef struct _NDIS_PM_ADMIN_GONFIG
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
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_PM_ADMIN_GONFIG, *PNDIS_PM_ADMIN_GONFIG; /* size: 0x0004 */

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
      /* 0x0014 */ struct _NDIS_PER_PROC_COUNTERS* PerProcCounters;
    }; /* size: 0x0006 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0018 */ unsigned long EnabledPerformanceCounters;
    /* 0x0018 */ void* pvoidEnabledPerformanceCounters;
  }; /* size: 0x0004 */
  /* 0x001c */ void* OpenQueue;
  /* 0x0020 */ struct _REFERENCE ShortRef;
  union
  {
    /* 0x0028 */ unsigned long EnabledPerformanceCountersEx;
    /* 0x0028 */ void* pvoidEnabledPerformanceCountersEx;
  }; /* size: 0x0004 */
  /* 0x002c */ unsigned char LinkStateIndicationFlags;
  /* 0x002d */ unsigned char LockAcquired;
  /* 0x002e */ unsigned char PmodeOpens;
  /* 0x002f */ unsigned char Reserved23;
  /* 0x0030 */ unsigned long Lock;
  /* 0x0034 */ struct _NDIS_REQUEST* MediaRequest;
  /* 0x0038 */ struct _NDIS_MINIPORT_INTERRUPT* Interrupt;
  /* 0x003c */ unsigned long Flags;
  /* 0x0040 */ unsigned long PnPFlags;
  /* 0x0044 */ struct _LIST_ENTRY PacketList;
  /* 0x004c */ struct _NDIS_PACKET* FirstPendingPacket;
  /* 0x0050 */ struct _NDIS_PACKET* ReturnPacketsQueue;
  /* 0x0054 */ unsigned long RequestBuffer;
  /* 0x0058 */ void* SetMCastBuffer;
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
  /* 0x00d4 */ void* ResetOpen;
  union
  {
    /* 0x00d8 */ struct _X_FILTER* EthDB;
    /* 0x00d8 */ struct _X_FILTER* NullDB;
  }; /* size: 0x0004 */
  /* 0x00dc */ struct _X_FILTER* TrDB;
  /* 0x00e0 */ void* YYYDB;
  /* 0x00e4 */ void* XXXDB;
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
  /* 0x012c */ void* Reserved24;
  /* 0x0130 */ struct _NDIS_RECEIVE_SCALE_PARAMETERS* CombinedNdisRSSParameters;
  union
  {
    /* 0x0134 */ struct _NDIS_MINIPORT_TIMER* TimerQueue;
    /* 0x0134 */ struct _NDIS_TIMER_ENTRY* TimerObjectQueue;
  }; /* size: 0x0004 */
  /* 0x0138 */ unsigned int MacOptions;
  /* 0x013c */ struct _NDIS_REQUEST* PendingRequest;
  /* 0x0140 */ unsigned int MaximumLongAddresses;
  /* 0x0144 */ unsigned int MaximumShortAddresses;
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
  /* 0x0168 */ void* TrRxIndicateHandler /* function */;
  /* 0x016c */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0170 */ void* EthRxCompleteHandler /* function */;
  /* 0x0174 */ void* TrRxCompleteHandler /* function */;
  /* 0x0178 */ void* SavedNextSendNetBufferListsHandler /* function */;
  /* 0x017c */ void* StatusHandler /* function */;
  /* 0x0180 */ void* StatusCompleteHandler /* function */;
  /* 0x0184 */ void* TDCompleteHandler /* function */;
  /* 0x0188 */ void* QueryCompleteHandler /* function */;
  /* 0x018c */ void* SetCompleteHandler /* function */;
  /* 0x0190 */ void* WanSendCompleteHandler /* function */;
  /* 0x0194 */ void* WanRcvHandler /* function */;
  /* 0x0198 */ void* WanRcvCompleteHandler /* function */;
  /* 0x019c */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x01a0 */ void* IndicateNetBufferListsContext;
  /* 0x01a4 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x01a8 */ void* NextReturnNetBufferLists /* function */;
  /* 0x01ac */ void* NextReturnNetBufferListsContext;
  /* 0x01b0 */ struct _KEVENT* PnPEventLockEvent;
  /* 0x01b4 */ struct _NDIS_OBJECT_HEADER* MediaSpecificAttributes;
  /* 0x01b8 */ struct _IRP* PendingQueryPowerIrp;
  /* 0x01bc */ void* UnalignedPerProcCounters;
  /* 0x01c0 */ struct _NDIS_INTERRUPT_BLOCK* InterruptEx;
  /* 0x01c8 */ unsigned __int64 XmitLinkSpeed;
  /* 0x01d0 */ unsigned __int64 RcvLinkSpeed;
  /* 0x01d8 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x01dc */ struct _PROCESSOR_NUMBER AssignedProcessor;
  /* 0x01e0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions;
  /* 0x01e4 */ unsigned long MiniportAutoNegotiationFlags;
  /* 0x01e8 */ struct _SINGLE_LIST_ENTRY WorkQueue[7];
  /* 0x0204 */ struct _SINGLE_LIST_ENTRY SingleWorkItems[6];
  /* 0x021c */ unsigned char SendFlags;
  /* 0x021d */ unsigned char TrResetRing;
  /* 0x021e */ unsigned char MP6SupportPM;
  /* 0x021f */ unsigned char XState;
  /* 0x0220 */ struct _NDIS_LOG* Log;
  /* 0x0224 */ struct _CM_RESOURCE_LIST* AllocatedResources;
  /* 0x0228 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
  /* 0x022c */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x0230 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x0234 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x0238 */ struct _NDIS_PNP_CAPABILITIES PMCapabilities61;
  /* 0x0248 */ struct _NDIS_PM_CAPABILITIES PMHardwareCapabilities;
  /* 0x027c */ struct _NDIS_PM_CAPABILITIES PMAdvertisedCapabilities;
  /* 0x02b0 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x02c0 */ struct _DEVICE_CAPABILITIES DeviceCaps;
  /* 0x0300 */ unsigned char S0WakeupSupported;
  /* 0x0304 */ unsigned long CombinedWakeUpEnable;
  /* 0x0308 */ unsigned long WakeUpEnable;
  /* 0x030c */ struct _IRP* pIrpWaitWake;
  /* 0x0310 */ enum _SYSTEM_POWER_STATE WaitWakeSystemState;
  /* 0x0318 */ union _LARGE_INTEGER VcIndex;
  /* 0x0320 */ unsigned long VcCountLock;
  /* 0x0324 */ struct _LIST_ENTRY WmiEnabledVcs;
  /* 0x032c */ struct _NDIS_GUID* pNdisGuidMap;
  /* 0x0330 */ struct _NDIS_GUID* pCustomGuidMap;
  /* 0x0334 */ unsigned short VcCount;
  /* 0x0336 */ unsigned short cNdisGuidMap;
  /* 0x0338 */ unsigned short cCustomGuidMap;
  /* 0x0340 */ struct _NDIS_TIMER MediaDisconnectTimer;
  /* 0x0388 */ enum _NDIS_PNP_DEVICE_STATE PnPDeviceState;
  /* 0x038c */ enum _NDIS_PNP_DEVICE_STATE OldPnPDeviceState;
  /* 0x0390 */ struct _KDPC DeferredDpc;
  /* 0x03b0 */ union _LARGE_INTEGER StartTicks;
  /* 0x03b8 */ struct _NDIS_PACKET** IndicatedPacket;
  /* 0x03bc */ struct _KEVENT* RemoveReadyEvent;
  /* 0x03c0 */ struct _KEVENT* AllOpensClosedEvent;
  /* 0x03c4 */ struct _KEVENT* AllRequestsCompletedEvent;
  /* 0x03c8 */ unsigned long InitTimeMs;
  /* 0x03cc */ struct _NDIS_MINIPORT_WORK_ITEM WorkItemBuffer[6];
  /* 0x0414 */ struct _OID_LIST* OidList;
  /* 0x0418 */ unsigned short InternalResetCount;
  /* 0x041a */ unsigned short MiniportResetCount;
  /* 0x041c */ unsigned short MediaSenseConnectCount;
  /* 0x041e */ unsigned short MediaSenseDisconnectCount;
  /* 0x0420 */ struct _NDIS_PACKET** xPackets;
  /* 0x0424 */ unsigned long UserModeOpenReferences;
  /* 0x0428 */ void* SavedIndicateNetBufferListsHandler /* function */;
  /* 0x042c */ void* SavedIndicateNetBufferListsContext;
  /* 0x0430 */ void* WSendPacketsHandler /* function */;
  /* 0x0434 */ unsigned long MiniportAttributes;
  /* 0x0438 */ unsigned short NumOpens;
  /* 0x043a */ unsigned short CFHangXTicks;
  /* 0x043c */ unsigned long RequestCount;
  /* 0x0440 */ unsigned long IndicatedPacketsCount;
  /* 0x0444 */ unsigned long PhysicalMediumType;
  /* 0x0448 */ enum _NDIS_MEDIUM MiniportMediaType;
  /* 0x044c */ struct _NDIS_REQUEST* LastRequest;
  /* 0x0450 */ void* FakeMac;
  /* 0x0454 */ unsigned long LockDbg;
  /* 0x0458 */ unsigned long LockDbgX;
  /* 0x045c */ void* LockThread;
  /* 0x0460 */ unsigned long InfoFlags;
  /* 0x0464 */ unsigned long TimerQueueLock;
  /* 0x0468 */ struct _KEVENT* ResetCompletedEvent;
  /* 0x046c */ struct _KEVENT* QueuedBindingCompletedEvent;
  /* 0x0470 */ void* SavedPacketIndicateHandler /* function */;
  /* 0x0474 */ unsigned long RegisteredInterrupts;
  /* 0x0478 */ unsigned long SetOid;
  /* 0x047c */ struct _KEVENT* WakeUpTimerEvent;
  /* 0x0480 */ void* DeviceContext;
  /* 0x0488 */ unsigned char CombinedRSSParametersBuf[604];
  /* 0x06e8 */ unsigned char RSSParametersBuf[604];
  /* 0x0944 */ unsigned char UsingMSIX;
  /* 0x0945 */ unsigned char Miniport5InNdis6Mode;
  /* 0x0946 */ unsigned char Miniport5HasNdis6Component;
  /* 0x0947 */ unsigned char RestoreStackNeeded;
  /* 0x0948 */ char MediaChangeFilters;
  /* 0x0949 */ unsigned char FilterPnPLockAcquired;
  /* 0x094a */ unsigned char LWFilterAllLoaded;
  /* 0x094b */ unsigned char CheckPacketFilters;
  /* 0x094c */ unsigned char ReceiveFilters;
  /* 0x0950 */ void* FilterPnPLockThread;
  /* 0x0954 */ unsigned long FilterPnPLockDbgX;
  /* 0x0958 */ unsigned long RecvLock;
  /* 0x095c */ enum _NDIS_MINIPORT_STATE RecvState;
  /* 0x0960 */ unsigned long OutstandingReceives;
  /* 0x0964 */ void* MiniportRecvLockThread;
  /* 0x0968 */ unsigned long RecvLockDbg;
  /* 0x096c */ void* NextSendPacketsHandler /* function */;
  /* 0x0970 */ void* FinalSendPacketsHandler /* function */;
  /* 0x0974 */ void* LWFilterMutexOwnerThread;
  /* 0x0978 */ unsigned long LWFilterMutexOwner;
  /* 0x097c */ unsigned long LWFilterMutexOwnerCount;
  /* 0x0980 */ struct _NDIS_FILTER_BLOCK* LowestFilter;
  /* 0x0984 */ struct _NDIS_FILTER_BLOCK* HighestFilter;
  /* 0x0988 */ void* ShutdownContext;
  union
  {
    /* 0x098c */ void* ShutdownHandler /* function */;
    /* 0x098c */ void* ShutdownHandlerEx /* function */;
  }; /* size: 0x0004 */
  /* 0x0990 */ struct _KBUGCHECK_CALLBACK_RECORD BugcheckCallbackRecord;
  /* 0x09b0 */ void* TopIndicateNetBufferListsHandler /* function */;
  /* 0x09b4 */ void* TopIndicateLoopbackNetBufferListsHandler /* function */;
  /* 0x09b8 */ void* Ndis5PacketIndicateHandler /* function */;
  /* 0x09bc */ void* MiniportReturnPacketHandler /* function */;
  /* 0x09c0 */ void* MiniportReturnPacketContext;
  /* 0x09c4 */ void* SynchronousReturnPacketHandler /* function */;
  /* 0x09c8 */ void* SynchronousReturnPacketContext;
  /* 0x09cc */ void* NextRequestHandler /* function */;
  /* 0x09d0 */ void* NextRequestContext;
  /* 0x09d4 */ struct _LIST_ENTRY OidRequestList;
  /* 0x09dc */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x09e0 */ void* NextCoOidRequestHandle;
  /* 0x09e4 */ unsigned long Ndis6ProtocolsBound;
  /* 0x09e8 */ unsigned long PmodeOpen6;
  /* 0x09ec */ enum _NDIS_MINIPORT_STATE State;
  /* 0x09f0 */ struct _KEVENT* AsyncOpCompletionEvent;
  /* 0x09f4 */ int AsyncOpCompletionStatus;
  /* 0x09f8 */ struct _ULONG_REFERENCE Ref;
  /* 0x0a08 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0a10 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x0a18 */ unsigned long SupportedPacketFilters;
  /* 0x0a1c */ struct _NDIS_MINIPORT_HANDLERS NoFilter;
  /* 0x0a74 */ struct _NDIS_MINIPORT_HANDLERS Next;
  /* 0x0acc */ long NumOfPauseRestartRequests;
  /* 0x0ad0 */ unsigned long FilterPnPFlags;
  /* 0x0ad4 */ unsigned long SupportedStatistics;
  /* 0x0ad8 */ unsigned long cDpcSendCompletes;
  /* 0x0adc */ unsigned long cDpcRcvIndications;
  /* 0x0ae0 */ unsigned long cDpcRcvIndicationCalls;
  /* 0x0ae4 */ unsigned long cDpcNbSendCompletes;
  /* 0x0ae8 */ unsigned long cDpcNblSendCompletes;
  /* 0x0aec */ unsigned long cDpcNblIndications;
  /* 0x0af0 */ unsigned long cDpcMaxPacketsIndicated;
  /* 0x0af4 */ unsigned long cDpcTotalDpcCount;
  /* 0x0af8 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RecvScaleCapabilities;
  /* 0x0b08 */ struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES* GeneralAttributes;
  /* 0x0b0c */ struct _LIST_ENTRY PortList;
  /* 0x0b14 */ unsigned char* AllocatedPortIndices;
  /* 0x0b18 */ unsigned long AllocatedPortIndicesLength;
  /* 0x0b1c */ unsigned long NumberOfPorts;
  /* 0x0b20 */ unsigned long NumberOfActivePorts;
  /* 0x0b28 */ unsigned __int64 MiniportXmitLinkSpeed;
  /* 0x0b30 */ unsigned __int64 MiniportRcvLinkSpeed;
  /* 0x0b38 */ struct _KEVENT RestoreStackTimerEvent;
  /* 0x0b48 */ struct _NDIS_TIMER RestoreStackTimer;
  /* 0x0b90 */ struct _NDIS_WORK_ITEM RestoreStackWorkItem;
  /* 0x0bb8 */ unsigned long RestoreStackBindRefCount;
  /* 0x0bbc */ unsigned long ProtocolsToBind;
  /* 0x0bc0 */ struct _NDIS_DPC_TRACKER* DpcTrackers;
  /* 0x0bc4 */ struct _NDIS_DPC_TRACKER* CurrentDpcTracker;
  /* 0x0bc8 */ unsigned char DpcTrackerIndex;
  /* 0x0bc9 */ unsigned char SupportedRss;
  /* 0x0bd0 */ unsigned __int64 DpcWatchDogCycleCount;
  /* 0x0bd8 */ unsigned long DataBackFillSize;
  /* 0x0bdc */ unsigned long ContextBackFillSize;
  /* 0x0be0 */ unsigned long SupportedPauseFunctions;
  /* 0x0be8 */ struct _NDIS_RESTART_GENERAL_ATTRIBUTES TopFilterRestartAttributes;
  /* 0x0c38 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES TopRecvScaleCapabilities;
  /* 0x0c48 */ long NumOfOpenPauseRestartRequests;
  /* 0x0c4c */ long MiniportStackPauseCount;
  /* 0x0c50 */ unsigned long NsiOpenReferences;
  /* 0x0c54 */ struct _KEVENT* NsiRequestsCompletedEvent;
  /* 0x0c58 */ enum _DEVICE_POWER_STATE QueryPowerDeviceState;
  /* 0x0c5c */ unsigned char MinimumNdisMajorVersion;
  /* 0x0c5d */ unsigned char MinimumNdisMinorVersion;
  /* 0x0c5e */ unsigned short NumOfMinimumVersionDrivers;
  /* 0x0c60 */ struct _NDIS_MINIPORT_STATS* BottomIfStats;
  /* 0x0c64 */ struct _NDIS_M_PERIODIC_RECEIVES PeriodicReceiveQueue;
  /* 0x0cc0 */ enum _NDIS_PORT_CONTROL_STATE DefaultSendControlState;
  /* 0x0cc4 */ enum _NDIS_PORT_CONTROL_STATE DefaultRcvControlState;
  /* 0x0cc8 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultSendAuthorizationState;
  /* 0x0ccc */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultRcvAuthorizationState;
  /* 0x0cd0 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortSendControlState;
  /* 0x0cd4 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortRcvControlState;
  /* 0x0cd8 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState;
  /* 0x0cdc */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState;
  /* 0x0ce0 */ struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES PciDeviceCustomProperties;
  /* 0x0d14 */ void* TopNdis5PacketIndicateHandler /* function */;
  /* 0x0d18 */ unsigned long* ndisSupportedOidList;
  /* 0x0d1c */ unsigned long ndisSupportedOidListLength;
  /* 0x0d20 */ unsigned long MsiIntCount;
  /* 0x0d24 */ struct _WORK_QUEUE_ITEM MiniportDpcWorkItem;
  /* 0x0d38 */ unsigned __int64 InvalidFrames;
  /* 0x0d40 */ long PagingPathCount;
  /* 0x0d44 */ struct _LIST_ENTRY ReceiveQueueList;
  /* 0x0d4c */ unsigned char* AllocatedQueueIndices;
  /* 0x0d50 */ unsigned long AllocatedQueueIndicesLength;
  /* 0x0d54 */ unsigned long NumReceiveQueues;
  /* 0x0d58 */ struct _LIST_ENTRY ReceiveFilterList;
  /* 0x0d60 */ unsigned char* AllocatedReceiveFilterIndices;
  /* 0x0d64 */ unsigned long AllocatedReceiveFilterIndicesLength;
  /* 0x0d68 */ unsigned long NumReceiveFilters;
  /* 0x0d6c */ unsigned long EnabledReceiveFilterTypes;
  /* 0x0d70 */ unsigned long EnabledReceiveQueueTypes;
  /* 0x0d74 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterHwCapabilities;
  /* 0x0d78 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterCurrentCapabilities;
  /* 0x0d7c */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchHwCapabilities;
  /* 0x0d80 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchCurrentCapabilities;
  /* 0x0d84 */ struct _LIST_ENTRY SharedMemoryBlockList;
  /* 0x0d8c */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x0d90 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x0d94 */ void* AllocateSharedMemoryContext;
  /* 0x0d98 */ unsigned long MsiXTableEntries;
  /* 0x0d9c */ struct PCI_MSI_CAPABILITY MsiCaps;
  /* 0x0db4 */ struct PCI_MSIX_CAPABILITY MsiXCaps;
  /* 0x0dc0 */ unsigned __int64 NumberOfIndirectionTableChanges;
  union
  {
    /* 0x0dc8 */ unsigned char BeginSavedFields;
    /* 0x0dc8 */ unsigned long NumUserOpens;
  }; /* size: 0x0004 */
  /* 0x0dcc */ struct _NDIS_MINIPORT_OFFLOAD_REG OffloadRegistry;
  /* 0x0dd0 */ unsigned short MediaDisconnectTimeOut;
  /* 0x0dd2 */ unsigned short SGMapRegistersNeeded;
  /* 0x0dd4 */ unsigned long DriverVerifyFlags;
  /* 0x0dd8 */ void* SetBusData /* function */;
  /* 0x0ddc */ void* GetBusData /* function */;
  /* 0x0de0 */ void* BusDataContext;
  /* 0x0de4 */ enum _NDIS_INTERFACE_TYPE BusType;
  /* 0x0de8 */ unsigned long BusNumber;
  /* 0x0dec */ unsigned long SlotNumber;
  /* 0x0df0 */ struct _NDIS_EVENT OpenReadyEvent;
  /* 0x0e00 */ unsigned long NumAdminOpens;
  /* 0x0e04 */ struct _NDIS_M_DRIVER_BLOCK* DriverHandle;
  /* 0x0e08 */ struct _NDIS_BIND_PATHS* BindPaths;
  /* 0x0e0c */ struct _NDIS_BIND_PATHS* LWFilterList;
  /* 0x0e10 */ struct _NDIS_PROTOCOL_BLOCK** ProtocolsFailToBind;
  /* 0x0e14 */ unsigned long MiniportPhysicalMediumType;
  /* 0x0e18 */ struct _NDIS_FILTER_ATTACH_LIST* LWFilterAttachList;
  /* 0x0e1c */ unsigned long NumFilters;
  /* 0x0e20 */ unsigned int NetLuidIndex;
  /* 0x0e24 */ struct _KMUTANT LWFilterMutex;
  /* 0x0e44 */ void* SecurityDescriptor;
  /* 0x0e48 */ struct _UNICODE_STRING BaseName;
  /* 0x0e50 */ struct _UNICODE_STRING MiniportName;
  /* 0x0e58 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0e5c */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0e60 */ struct _DEVICE_OBJECT* NextDeviceObject;
  /* 0x0e64 */ struct _NDIS_MINIPORT_BLOCK* NextGlobalMiniport;
  /* 0x0e68 */ struct _UNICODE_STRING* pAdapterInstanceName;
  /* 0x0e6c */ unsigned long PnPCapabilities;
  /* 0x0e70 */ enum _DEVICE_POWER_STATE CurrentDevicePowerState;
  /* 0x0e74 */ enum _DEVICE_POWER_STATE DriverPowerState;
  /* 0x0e78 */ struct _NDIS_PM_ADMIN_GONFIG PMAdminConfig;
  /* 0x0e7c */ struct _KSEMAPHORE PMPatternSemaphore;
  /* 0x0e90 */ struct _KSEMAPHORE PMOffloadSemaphore;
  /* 0x0ea4 */ void* BusInterface;
  /* 0x0ea8 */ unsigned short InstanceNumber;
  /* 0x0eac */ void* ConfigurationHandle;
  /* 0x0eb0 */ struct _GUID InterfaceGuid;
  /* 0x0ec0 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x0ec4 */ unsigned int IfIndex;
  /* 0x0ec8 */ enum _NET_IF_ADMIN_STATUS AdminStatus;
  /* 0x0ecc */ enum _NET_IF_OPER_STATUS OperStatus;
  /* 0x0ed0 */ unsigned long OperStatusFlags;
  union
  {
    /* 0x0ed4 */ void* SendHandler /* function */;
    /* 0x0ed4 */ void* WanSendHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0ed8 */ struct _NDIS_MINIPORT_OFFLOAD* Offload;
  /* 0x0edc */ void* AddDeviceContext;
  /* 0x0ee0 */ struct _IO_REMOVE_LOCK RemoveLock;
  /* 0x0ef8 */ struct _UNICODE_STRING DevinterfaceNetSymbolicLinkName;
  /* 0x0f00 */ unsigned char RssEnable;
  /* 0x0f01 */ unsigned char ChimneyEnable;
  /* 0x0f04 */ unsigned long PhysicalMediumInInf;
  /* 0x0f08 */ struct _UNICODE_STRING ExportName;
  /* 0x0f10 */ struct _UNICODE_STRING FilterClass;
  /* 0x0f18 */ void* StatusProcessingThread;
  /* 0x0f1c */ unsigned long StatusProcessingDbgX;
  /* 0x0f20 */ struct _UNICODE_STRING FdoName;
  /* 0x0f28 */ struct _NDIS_MINIPORT_BLOCK* NextOrphanedMiniport;
  /* 0x0f2c */ struct _KEVENT PowerEvent;
  /* 0x0f3c */ struct _KEVENT* pPowerEvent;
  /* 0x0f40 */ unsigned long DirectOidRequestCount;
  /* 0x0f44 */ struct _KEVENT* AllDirectRequestsCompletedEvent;
  /* 0x0f48 */ struct _NDIS_HD_SPLIT_CURRENT_CONFIG* HDSplitCurrentConfig;
  /* 0x0f4c */ void* MSIXConfigContext;
  /* 0x0f50 */ void* SetMSIXTableEntry /* function */;
  /* 0x0f54 */ void* MaskMSIXTableEntry /* function */;
  /* 0x0f58 */ void* UnmaskMSIXTableEntry /* function */;
  /* 0x0f5c */ struct _WORK_QUEUE_ITEM DevicePowerStateWorkItem;
  /* 0x0f6c */ struct _WORK_QUEUE_ITEM SystemPowerStateWorkItem;
  /* 0x0f7c */ struct _NDIS_RECEIVE_QUEUE_BLOCK* DefaultReceiveQueue;
  /* 0x0f80 */ unsigned long MaxNumRssProcessors;
  /* 0x0f84 */ struct _PROCESSOR_NUMBER RssBaseProcessor;
  /* 0x0f88 */ unsigned short NumaNodeId;
  /* 0x0f8c */ unsigned short* NumaDistances;
  /* 0x0f90 */ struct _UNICODE_STRING* pModifiedInstanceName;
  /* 0x0f94 */ struct _WORK_QUEUE_ITEM DeleteMiniportWorkItem;
  /* 0x0fa4 */ long __PADDING__[1];
} NDIS_MINIPORT_BLOCK, *PNDIS_MINIPORT_BLOCK; /* size: 0x0fa8 */

