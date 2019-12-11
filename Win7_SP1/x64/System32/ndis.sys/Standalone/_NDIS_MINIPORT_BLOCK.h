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
  /* 0x0008 */ unsigned short* Buffer;
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
                  /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
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

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
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

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ enum _NDIS_WORK_ITEM_TYPE WorkItemType;
  /* 0x0010 */ void* WorkItemContext;
} NDIS_MINIPORT_WORK_ITEM, *PNDIS_MINIPORT_WORK_ITEM; /* size: 0x0018 */

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
  /* 0x0010 */ void* CallbackRoutine /* function */;
  /* 0x0018 */ void* Buffer;
  /* 0x0020 */ unsigned long Length;
  /* 0x0028 */ unsigned char* Component;
  /* 0x0030 */ unsigned __int64 Checksum;
  /* 0x0038 */ unsigned char State;
  /* 0x0039 */ char __PADDING__[7];
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD; /* size: 0x0040 */

typedef struct _ULONG_REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned long ReferenceCount;
  /* 0x000c */ unsigned char Closing;
  /* 0x000d */ char __PADDING__[3];
} ULONG_REFERENCE, *PULONG_REFERENCE; /* size: 0x0010 */

typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0008 */ void* CancelSendContext;
  /* 0x0010 */ void* IndicateNetBufferListsContext;
  /* 0x0018 */ void* IndicateNetBufferListsObject;
  /* 0x0020 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0028 */ void* ReturnNetBufferListsContext;
  /* 0x0030 */ void* ReturnNetBufferListsObject;
  /* 0x0038 */ void* SendNetBufferListsContext;
  /* 0x0040 */ void* SendNetBufferListsObject;
  /* 0x0048 */ void* SendNetBufferListsCompleteContext;
  /* 0x0050 */ void* SendNetBufferListsCompleteObject;
  /* 0x0058 */ void* RequestHandle;
  /* 0x0060 */ void* StatusHandle;
  /* 0x0068 */ void* DevicePnPEventNotifyHandle;
  /* 0x0070 */ void* NetPnPEventHandle;
  union
  {
    /* 0x0078 */ void* CancelSendHandler /* function */;
    /* 0x0078 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0080 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0088 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x0090 */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x0098 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x00a0 */ void* SendNetBufferListsHandler /* function */;
  /* 0x00a8 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x00b0 */

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
} KEVENT, *PKEVENT; /* size: 0x0018 */

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

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _NDIS_M_PERIODIC_RECEIVES
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* NextMiniportBlock;
  /* 0x0008 */ enum _NDIS_M_PERIODIC_RECEIVE_STATE State;
  /* 0x0010 */ unsigned __int64 SpinLock;
  /* 0x0018 */ void* LockThread;
  /* 0x0020 */ unsigned long LockDbg;
  /* 0x0024 */ long NumMQueuedNbls;
  /* 0x0028 */ long NumNblsDequeued;
  /* 0x0030 */ struct _NET_BUFFER_LIST* QueuedHead;
  /* 0x0038 */ struct _NET_BUFFER_LIST* QueuedTail;
  /* 0x0040 */ unsigned long BoundToIP;
  /* 0x0044 */ unsigned char Paused;
  /* 0x0048 */ long NblsAllocated;
  /* 0x004c */ unsigned long TrackingQueued;
  /* 0x0050 */ unsigned long TrackingDequeued;
  /* 0x0054 */ unsigned long TrackingResources;
  /* 0x0058 */ unsigned long TrackingPending;
  /* 0x005c */ unsigned long TrackingIndicated;
  /* 0x0060 */ unsigned long TrackingEmptied;
  /* 0x0068 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0088 */ long WorkItemQueued;
  /* 0x008c */ long __PADDING__[1];
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x0090 */

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
} NDIS_EVENT, *PNDIS_EVENT; /* size: 0x0018 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

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
      /* 0x0028 */ struct _NDIS_PER_PROC_COUNTERS* PerProcCounters;
    }; /* size: 0x000a */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0030 */ unsigned long EnabledPerformanceCounters;
    /* 0x0030 */ void* pvoidEnabledPerformanceCounters;
  }; /* size: 0x0008 */
  /* 0x0038 */ void* OpenQueue;
  /* 0x0040 */ struct _REFERENCE ShortRef;
  union
  {
    /* 0x0050 */ unsigned long EnabledPerformanceCountersEx;
    /* 0x0050 */ void* pvoidEnabledPerformanceCountersEx;
  }; /* size: 0x0008 */
  /* 0x0058 */ unsigned char LinkStateIndicationFlags;
  /* 0x0059 */ unsigned char LockAcquired;
  /* 0x005a */ unsigned char PmodeOpens;
  /* 0x005b */ unsigned char Reserved23;
  /* 0x0060 */ unsigned __int64 Lock;
  /* 0x0068 */ struct _NDIS_REQUEST* MediaRequest;
  /* 0x0070 */ struct _NDIS_MINIPORT_INTERRUPT* Interrupt;
  /* 0x0078 */ unsigned long Flags;
  /* 0x007c */ unsigned long PnPFlags;
  /* 0x0080 */ struct _LIST_ENTRY PacketList;
  /* 0x0090 */ struct _NDIS_PACKET* FirstPendingPacket;
  /* 0x0098 */ struct _NDIS_PACKET* ReturnPacketsQueue;
  /* 0x00a0 */ unsigned long RequestBuffer;
  /* 0x00a8 */ void* SetMCastBuffer;
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
  /* 0x0188 */ void* ResetOpen;
  union
  {
    /* 0x0190 */ struct _X_FILTER* EthDB;
    /* 0x0190 */ struct _X_FILTER* NullDB;
  }; /* size: 0x0008 */
  /* 0x0198 */ struct _X_FILTER* TrDB;
  /* 0x01a0 */ void* YYYDB;
  /* 0x01a8 */ void* XXXDB;
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
  /* 0x024c */ unsigned int MaximumShortAddresses;
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
  /* 0x0288 */ void* TrRxIndicateHandler /* function */;
  /* 0x0290 */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0298 */ void* EthRxCompleteHandler /* function */;
  /* 0x02a0 */ void* TrRxCompleteHandler /* function */;
  /* 0x02a8 */ void* SavedNextSendNetBufferListsHandler /* function */;
  /* 0x02b0 */ void* StatusHandler /* function */;
  /* 0x02b8 */ void* StatusCompleteHandler /* function */;
  /* 0x02c0 */ void* TDCompleteHandler /* function */;
  /* 0x02c8 */ void* QueryCompleteHandler /* function */;
  /* 0x02d0 */ void* SetCompleteHandler /* function */;
  /* 0x02d8 */ void* WanSendCompleteHandler /* function */;
  /* 0x02e0 */ void* WanRcvHandler /* function */;
  /* 0x02e8 */ void* WanRcvCompleteHandler /* function */;
  /* 0x02f0 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x02f8 */ void* IndicateNetBufferListsContext;
  /* 0x0300 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0308 */ void* NextReturnNetBufferLists /* function */;
  /* 0x0310 */ void* NextReturnNetBufferListsContext;
  /* 0x0318 */ struct _KEVENT* PnPEventLockEvent;
  /* 0x0320 */ struct _NDIS_OBJECT_HEADER* MediaSpecificAttributes;
  /* 0x0328 */ struct _IRP* PendingQueryPowerIrp;
  /* 0x0330 */ void* UnalignedPerProcCounters;
  /* 0x0338 */ struct _NDIS_INTERRUPT_BLOCK* InterruptEx;
  /* 0x0340 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0348 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0350 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x0354 */ struct _PROCESSOR_NUMBER AssignedProcessor;
  /* 0x0358 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions;
  /* 0x035c */ unsigned long MiniportAutoNegotiationFlags;
  /* 0x0360 */ struct _SINGLE_LIST_ENTRY WorkQueue[7];
  /* 0x0398 */ struct _SINGLE_LIST_ENTRY SingleWorkItems[6];
  /* 0x03c8 */ unsigned char SendFlags;
  /* 0x03c9 */ unsigned char TrResetRing;
  /* 0x03ca */ unsigned char MP6SupportPM;
  /* 0x03cb */ unsigned char XState;
  /* 0x03d0 */ struct _NDIS_LOG* Log;
  /* 0x03d8 */ struct _CM_RESOURCE_LIST* AllocatedResources;
  /* 0x03e0 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
  /* 0x03e8 */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x03f0 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x03f8 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x0400 */ struct _NDIS_PNP_CAPABILITIES PMCapabilities61;
  /* 0x0410 */ struct _NDIS_PM_CAPABILITIES PMHardwareCapabilities;
  /* 0x0444 */ struct _NDIS_PM_CAPABILITIES PMAdvertisedCapabilities;
  /* 0x0478 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x0488 */ struct _DEVICE_CAPABILITIES DeviceCaps;
  /* 0x04c8 */ unsigned char S0WakeupSupported;
  /* 0x04cc */ unsigned long CombinedWakeUpEnable;
  /* 0x04d0 */ unsigned long WakeUpEnable;
  /* 0x04d8 */ struct _IRP* pIrpWaitWake;
  /* 0x04e0 */ enum _SYSTEM_POWER_STATE WaitWakeSystemState;
  /* 0x04e8 */ union _LARGE_INTEGER VcIndex;
  /* 0x04f0 */ unsigned __int64 VcCountLock;
  /* 0x04f8 */ struct _LIST_ENTRY WmiEnabledVcs;
  /* 0x0508 */ struct _NDIS_GUID* pNdisGuidMap;
  /* 0x0510 */ struct _NDIS_GUID* pCustomGuidMap;
  /* 0x0518 */ unsigned short VcCount;
  /* 0x051a */ unsigned short cNdisGuidMap;
  /* 0x051c */ unsigned short cCustomGuidMap;
  /* 0x0520 */ struct _NDIS_TIMER MediaDisconnectTimer;
  /* 0x05a0 */ enum _NDIS_PNP_DEVICE_STATE PnPDeviceState;
  /* 0x05a4 */ enum _NDIS_PNP_DEVICE_STATE OldPnPDeviceState;
  /* 0x05a8 */ struct _KDPC DeferredDpc;
  /* 0x05e8 */ union _LARGE_INTEGER StartTicks;
  /* 0x05f0 */ struct _NDIS_PACKET** IndicatedPacket;
  /* 0x05f8 */ struct _KEVENT* RemoveReadyEvent;
  /* 0x0600 */ struct _KEVENT* AllOpensClosedEvent;
  /* 0x0608 */ struct _KEVENT* AllRequestsCompletedEvent;
  /* 0x0610 */ unsigned long InitTimeMs;
  /* 0x0618 */ struct _NDIS_MINIPORT_WORK_ITEM WorkItemBuffer[6];
  /* 0x06a8 */ struct _OID_LIST* OidList;
  /* 0x06b0 */ unsigned short InternalResetCount;
  /* 0x06b2 */ unsigned short MiniportResetCount;
  /* 0x06b4 */ unsigned short MediaSenseConnectCount;
  /* 0x06b6 */ unsigned short MediaSenseDisconnectCount;
  /* 0x06b8 */ struct _NDIS_PACKET** xPackets;
  /* 0x06c0 */ unsigned long UserModeOpenReferences;
  /* 0x06c8 */ void* SavedIndicateNetBufferListsHandler /* function */;
  /* 0x06d0 */ void* SavedIndicateNetBufferListsContext;
  /* 0x06d8 */ void* WSendPacketsHandler /* function */;
  /* 0x06e0 */ unsigned long MiniportAttributes;
  /* 0x06e4 */ unsigned short NumOpens;
  /* 0x06e6 */ unsigned short CFHangXTicks;
  /* 0x06e8 */ unsigned long RequestCount;
  /* 0x06ec */ unsigned long IndicatedPacketsCount;
  /* 0x06f0 */ unsigned long PhysicalMediumType;
  /* 0x06f4 */ enum _NDIS_MEDIUM MiniportMediaType;
  /* 0x06f8 */ struct _NDIS_REQUEST* LastRequest;
  /* 0x0700 */ void* FakeMac;
  /* 0x0708 */ unsigned long LockDbg;
  /* 0x070c */ unsigned long LockDbgX;
  /* 0x0710 */ void* LockThread;
  /* 0x0718 */ unsigned long InfoFlags;
  /* 0x0720 */ unsigned __int64 TimerQueueLock;
  /* 0x0728 */ struct _KEVENT* ResetCompletedEvent;
  /* 0x0730 */ struct _KEVENT* QueuedBindingCompletedEvent;
  /* 0x0738 */ void* SavedPacketIndicateHandler /* function */;
  /* 0x0740 */ unsigned long RegisteredInterrupts;
  /* 0x0744 */ unsigned long SetOid;
  /* 0x0748 */ struct _KEVENT* WakeUpTimerEvent;
  /* 0x0750 */ void* DeviceContext;
  /* 0x0760 */ unsigned char CombinedRSSParametersBuf[656];
  /* 0x09f0 */ unsigned char RSSParametersBuf[656];
  /* 0x0c80 */ unsigned char UsingMSIX;
  /* 0x0c81 */ unsigned char Miniport5InNdis6Mode;
  /* 0x0c82 */ unsigned char Miniport5HasNdis6Component;
  /* 0x0c83 */ unsigned char RestoreStackNeeded;
  /* 0x0c84 */ char MediaChangeFilters;
  /* 0x0c85 */ unsigned char FilterPnPLockAcquired;
  /* 0x0c86 */ unsigned char LWFilterAllLoaded;
  /* 0x0c87 */ unsigned char CheckPacketFilters;
  /* 0x0c88 */ unsigned char ReceiveFilters;
  /* 0x0c90 */ void* FilterPnPLockThread;
  /* 0x0c98 */ unsigned long FilterPnPLockDbgX;
  /* 0x0ca0 */ unsigned __int64 RecvLock;
  /* 0x0ca8 */ enum _NDIS_MINIPORT_STATE RecvState;
  /* 0x0cac */ unsigned long OutstandingReceives;
  /* 0x0cb0 */ void* MiniportRecvLockThread;
  /* 0x0cb8 */ unsigned long RecvLockDbg;
  /* 0x0cc0 */ void* NextSendPacketsHandler /* function */;
  /* 0x0cc8 */ void* FinalSendPacketsHandler /* function */;
  /* 0x0cd0 */ void* LWFilterMutexOwnerThread;
  /* 0x0cd8 */ unsigned long LWFilterMutexOwner;
  /* 0x0cdc */ unsigned long LWFilterMutexOwnerCount;
  /* 0x0ce0 */ struct _NDIS_FILTER_BLOCK* LowestFilter;
  /* 0x0ce8 */ struct _NDIS_FILTER_BLOCK* HighestFilter;
  /* 0x0cf0 */ void* ShutdownContext;
  union
  {
    /* 0x0cf8 */ void* ShutdownHandler /* function */;
    /* 0x0cf8 */ void* ShutdownHandlerEx /* function */;
  }; /* size: 0x0008 */
  /* 0x0d00 */ struct _KBUGCHECK_CALLBACK_RECORD BugcheckCallbackRecord;
  /* 0x0d40 */ void* TopIndicateNetBufferListsHandler /* function */;
  /* 0x0d48 */ void* TopIndicateLoopbackNetBufferListsHandler /* function */;
  /* 0x0d50 */ void* Ndis5PacketIndicateHandler /* function */;
  /* 0x0d58 */ void* MiniportReturnPacketHandler /* function */;
  /* 0x0d60 */ void* MiniportReturnPacketContext;
  /* 0x0d68 */ void* SynchronousReturnPacketHandler /* function */;
  /* 0x0d70 */ void* SynchronousReturnPacketContext;
  /* 0x0d78 */ void* NextRequestHandler /* function */;
  /* 0x0d80 */ void* NextRequestContext;
  /* 0x0d88 */ struct _LIST_ENTRY OidRequestList;
  /* 0x0d98 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x0da0 */ void* NextCoOidRequestHandle;
  /* 0x0da8 */ unsigned long Ndis6ProtocolsBound;
  /* 0x0dac */ unsigned long PmodeOpen6;
  /* 0x0db0 */ enum _NDIS_MINIPORT_STATE State;
  /* 0x0db8 */ struct _KEVENT* AsyncOpCompletionEvent;
  /* 0x0dc0 */ int AsyncOpCompletionStatus;
  /* 0x0dc8 */ struct _ULONG_REFERENCE Ref;
  /* 0x0dd8 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0de0 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x0de8 */ unsigned long SupportedPacketFilters;
  /* 0x0df0 */ struct _NDIS_MINIPORT_HANDLERS NoFilter;
  /* 0x0ea0 */ struct _NDIS_MINIPORT_HANDLERS Next;
  /* 0x0f50 */ long NumOfPauseRestartRequests;
  /* 0x0f54 */ unsigned long FilterPnPFlags;
  /* 0x0f58 */ unsigned long SupportedStatistics;
  /* 0x0f5c */ unsigned long cDpcSendCompletes;
  /* 0x0f60 */ unsigned long cDpcRcvIndications;
  /* 0x0f64 */ unsigned long cDpcRcvIndicationCalls;
  /* 0x0f68 */ unsigned long cDpcNbSendCompletes;
  /* 0x0f6c */ unsigned long cDpcNblSendCompletes;
  /* 0x0f70 */ unsigned long cDpcNblIndications;
  /* 0x0f74 */ unsigned long cDpcMaxPacketsIndicated;
  /* 0x0f78 */ unsigned long cDpcTotalDpcCount;
  /* 0x0f7c */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RecvScaleCapabilities;
  /* 0x0f90 */ struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES* GeneralAttributes;
  /* 0x0f98 */ struct _LIST_ENTRY PortList;
  /* 0x0fa8 */ unsigned char* AllocatedPortIndices;
  /* 0x0fb0 */ unsigned long AllocatedPortIndicesLength;
  /* 0x0fb4 */ unsigned long NumberOfPorts;
  /* 0x0fb8 */ unsigned long NumberOfActivePorts;
  /* 0x0fc0 */ unsigned __int64 MiniportXmitLinkSpeed;
  /* 0x0fc8 */ unsigned __int64 MiniportRcvLinkSpeed;
  /* 0x0fd0 */ struct _KEVENT RestoreStackTimerEvent;
  /* 0x0fe8 */ struct _NDIS_TIMER RestoreStackTimer;
  /* 0x1068 */ struct _NDIS_WORK_ITEM RestoreStackWorkItem;
  /* 0x10b8 */ unsigned long RestoreStackBindRefCount;
  /* 0x10bc */ unsigned long ProtocolsToBind;
  /* 0x10c0 */ struct _NDIS_DPC_TRACKER* DpcTrackers;
  /* 0x10c8 */ struct _NDIS_DPC_TRACKER* CurrentDpcTracker;
  /* 0x10d0 */ unsigned char DpcTrackerIndex;
  /* 0x10d1 */ unsigned char SupportedRss;
  /* 0x10d8 */ unsigned __int64 DpcWatchDogCycleCount;
  /* 0x10e0 */ unsigned long DataBackFillSize;
  /* 0x10e4 */ unsigned long ContextBackFillSize;
  /* 0x10e8 */ unsigned long SupportedPauseFunctions;
  /* 0x10f0 */ struct _NDIS_RESTART_GENERAL_ATTRIBUTES TopFilterRestartAttributes;
  /* 0x1148 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES TopRecvScaleCapabilities;
  /* 0x1158 */ long NumOfOpenPauseRestartRequests;
  /* 0x115c */ long MiniportStackPauseCount;
  /* 0x1160 */ unsigned long NsiOpenReferences;
  /* 0x1168 */ struct _KEVENT* NsiRequestsCompletedEvent;
  /* 0x1170 */ enum _DEVICE_POWER_STATE QueryPowerDeviceState;
  /* 0x1174 */ unsigned char MinimumNdisMajorVersion;
  /* 0x1175 */ unsigned char MinimumNdisMinorVersion;
  /* 0x1176 */ unsigned short NumOfMinimumVersionDrivers;
  /* 0x1178 */ struct _NDIS_MINIPORT_STATS* BottomIfStats;
  /* 0x1180 */ struct _NDIS_M_PERIODIC_RECEIVES PeriodicReceiveQueue;
  /* 0x1210 */ enum _NDIS_PORT_CONTROL_STATE DefaultSendControlState;
  /* 0x1214 */ enum _NDIS_PORT_CONTROL_STATE DefaultRcvControlState;
  /* 0x1218 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultSendAuthorizationState;
  /* 0x121c */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultRcvAuthorizationState;
  /* 0x1220 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortSendControlState;
  /* 0x1224 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortRcvControlState;
  /* 0x1228 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState;
  /* 0x122c */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState;
  /* 0x1230 */ struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES PciDeviceCustomProperties;
  /* 0x1268 */ void* TopNdis5PacketIndicateHandler /* function */;
  /* 0x1270 */ unsigned long* ndisSupportedOidList;
  /* 0x1278 */ unsigned long ndisSupportedOidListLength;
  /* 0x127c */ unsigned long MsiIntCount;
  /* 0x1280 */ struct _WORK_QUEUE_ITEM MiniportDpcWorkItem;
  /* 0x12a0 */ unsigned __int64 InvalidFrames;
  /* 0x12a8 */ long PagingPathCount;
  /* 0x12b0 */ struct _LIST_ENTRY ReceiveQueueList;
  /* 0x12c0 */ unsigned char* AllocatedQueueIndices;
  /* 0x12c8 */ unsigned long AllocatedQueueIndicesLength;
  /* 0x12cc */ unsigned long NumReceiveQueues;
  /* 0x12d0 */ struct _LIST_ENTRY ReceiveFilterList;
  /* 0x12e0 */ unsigned char* AllocatedReceiveFilterIndices;
  /* 0x12e8 */ unsigned long AllocatedReceiveFilterIndicesLength;
  /* 0x12ec */ unsigned long NumReceiveFilters;
  /* 0x12f0 */ unsigned long EnabledReceiveFilterTypes;
  /* 0x12f4 */ unsigned long EnabledReceiveQueueTypes;
  /* 0x12f8 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterHwCapabilities;
  /* 0x1300 */ struct _NDIS_RECEIVE_FILTER_CAPABILITIES* ReceiveFilterCurrentCapabilities;
  /* 0x1308 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchHwCapabilities;
  /* 0x1310 */ struct _NDIS_NIC_SWITCH_CAPABILITIES* NicSwitchCurrentCapabilities;
  /* 0x1318 */ struct _LIST_ENTRY SharedMemoryBlockList;
  /* 0x1328 */ void* AllocateSharedMemoryHandler /* function */;
  /* 0x1330 */ void* FreeSharedMemoryHandler /* function */;
  /* 0x1338 */ void* AllocateSharedMemoryContext;
  /* 0x1340 */ unsigned long MsiXTableEntries;
  /* 0x1344 */ struct PCI_MSI_CAPABILITY MsiCaps;
  /* 0x135c */ struct PCI_MSIX_CAPABILITY MsiXCaps;
  /* 0x1368 */ unsigned __int64 NumberOfIndirectionTableChanges;
  union
  {
    /* 0x1370 */ unsigned char BeginSavedFields;
    /* 0x1370 */ unsigned long NumUserOpens;
  }; /* size: 0x0004 */
  /* 0x1374 */ struct _NDIS_MINIPORT_OFFLOAD_REG OffloadRegistry;
  /* 0x1378 */ unsigned short MediaDisconnectTimeOut;
  /* 0x137a */ unsigned short SGMapRegistersNeeded;
  /* 0x137c */ unsigned long DriverVerifyFlags;
  /* 0x1380 */ void* SetBusData /* function */;
  /* 0x1388 */ void* GetBusData /* function */;
  /* 0x1390 */ void* BusDataContext;
  /* 0x1398 */ enum _NDIS_INTERFACE_TYPE BusType;
  /* 0x139c */ unsigned long BusNumber;
  /* 0x13a0 */ unsigned long SlotNumber;
  /* 0x13a8 */ struct _NDIS_EVENT OpenReadyEvent;
  /* 0x13c0 */ unsigned long NumAdminOpens;
  /* 0x13c8 */ struct _NDIS_M_DRIVER_BLOCK* DriverHandle;
  /* 0x13d0 */ struct _NDIS_BIND_PATHS* BindPaths;
  /* 0x13d8 */ struct _NDIS_BIND_PATHS* LWFilterList;
  /* 0x13e0 */ struct _NDIS_PROTOCOL_BLOCK** ProtocolsFailToBind;
  /* 0x13e8 */ unsigned long MiniportPhysicalMediumType;
  /* 0x13f0 */ struct _NDIS_FILTER_ATTACH_LIST* LWFilterAttachList;
  /* 0x13f8 */ unsigned long NumFilters;
  /* 0x13fc */ unsigned int NetLuidIndex;
  /* 0x1400 */ struct _KMUTANT LWFilterMutex;
  /* 0x1438 */ void* SecurityDescriptor;
  /* 0x1440 */ struct _UNICODE_STRING BaseName;
  /* 0x1450 */ struct _UNICODE_STRING MiniportName;
  /* 0x1460 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x1468 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x1470 */ struct _DEVICE_OBJECT* NextDeviceObject;
  /* 0x1478 */ struct _NDIS_MINIPORT_BLOCK* NextGlobalMiniport;
  /* 0x1480 */ struct _UNICODE_STRING* pAdapterInstanceName;
  /* 0x1488 */ unsigned long PnPCapabilities;
  /* 0x148c */ enum _DEVICE_POWER_STATE CurrentDevicePowerState;
  /* 0x1490 */ enum _DEVICE_POWER_STATE DriverPowerState;
  /* 0x1494 */ struct _NDIS_PM_ADMIN_GONFIG PMAdminConfig;
  /* 0x1498 */ struct _KSEMAPHORE PMPatternSemaphore;
  /* 0x14b8 */ struct _KSEMAPHORE PMOffloadSemaphore;
  /* 0x14d8 */ void* BusInterface;
  /* 0x14e0 */ unsigned short InstanceNumber;
  /* 0x14e8 */ void* ConfigurationHandle;
  /* 0x14f0 */ struct _GUID InterfaceGuid;
  /* 0x1500 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x1508 */ unsigned int IfIndex;
  /* 0x150c */ enum _NET_IF_ADMIN_STATUS AdminStatus;
  /* 0x1510 */ enum _NET_IF_OPER_STATUS OperStatus;
  /* 0x1514 */ unsigned long OperStatusFlags;
  union
  {
    /* 0x1518 */ void* SendHandler /* function */;
    /* 0x1518 */ void* WanSendHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x1520 */ struct _NDIS_MINIPORT_OFFLOAD* Offload;
  /* 0x1528 */ void* AddDeviceContext;
  /* 0x1530 */ struct _IO_REMOVE_LOCK RemoveLock;
  /* 0x1550 */ struct _UNICODE_STRING DevinterfaceNetSymbolicLinkName;
  /* 0x1560 */ unsigned char RssEnable;
  /* 0x1561 */ unsigned char ChimneyEnable;
  /* 0x1564 */ unsigned long PhysicalMediumInInf;
  /* 0x1568 */ struct _UNICODE_STRING ExportName;
  /* 0x1578 */ struct _UNICODE_STRING FilterClass;
  /* 0x1588 */ void* StatusProcessingThread;
  /* 0x1590 */ unsigned long StatusProcessingDbgX;
  /* 0x1598 */ struct _UNICODE_STRING FdoName;
  /* 0x15a8 */ struct _NDIS_MINIPORT_BLOCK* NextOrphanedMiniport;
  /* 0x15b0 */ struct _KEVENT PowerEvent;
  /* 0x15c8 */ struct _KEVENT* pPowerEvent;
  /* 0x15d0 */ unsigned long DirectOidRequestCount;
  /* 0x15d8 */ struct _KEVENT* AllDirectRequestsCompletedEvent;
  /* 0x15e0 */ struct _NDIS_HD_SPLIT_CURRENT_CONFIG* HDSplitCurrentConfig;
  /* 0x15e8 */ void* MSIXConfigContext;
  /* 0x15f0 */ void* SetMSIXTableEntry /* function */;
  /* 0x15f8 */ void* MaskMSIXTableEntry /* function */;
  /* 0x1600 */ void* UnmaskMSIXTableEntry /* function */;
  /* 0x1608 */ struct _WORK_QUEUE_ITEM DevicePowerStateWorkItem;
  /* 0x1628 */ struct _WORK_QUEUE_ITEM SystemPowerStateWorkItem;
  /* 0x1648 */ struct _NDIS_RECEIVE_QUEUE_BLOCK* DefaultReceiveQueue;
  /* 0x1650 */ unsigned long MaxNumRssProcessors;
  /* 0x1654 */ struct _PROCESSOR_NUMBER RssBaseProcessor;
  /* 0x1658 */ unsigned short NumaNodeId;
  /* 0x1660 */ unsigned short* NumaDistances;
  /* 0x1668 */ struct _UNICODE_STRING* pModifiedInstanceName;
  /* 0x1670 */ struct _WORK_QUEUE_ITEM DeleteMiniportWorkItem;
  /* 0x1690 */ void* ProcessingOpen;
  /* 0x1698 */ long __PADDING__[2];
} NDIS_MINIPORT_BLOCK, *PNDIS_MINIPORT_BLOCK; /* size: 0x16a0 */

