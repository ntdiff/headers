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
  NdisMediumMax = 18,
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
    /* 0x0004 */ unsigned long Reserved : 14; /* bit position: 18 */
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

typedef struct _NDIS_RECEIVE_SCALE_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long CapabilitiesFlags;
  /* 0x0008 */ unsigned long NumberOfInterruptMessages;
  /* 0x000c */ unsigned long NumberOfReceiveQueues;
} NDIS_RECEIVE_SCALE_CAPABILITIES, *PNDIS_RECEIVE_SCALE_CAPABILITIES; /* size: 0x0010 */

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
  /* 0x000c */ void* SaveIndicateNetBufferListsContext;
  /* 0x0010 */ void* ReturnNetBufferListsContext;
  /* 0x0014 */ void* SendNetBufferListsContext;
  /* 0x0018 */ void* SendNetBufferListsObject;
  /* 0x001c */ void* SendNetBufferListsCompleteContext;
  /* 0x0020 */ void* RequestHandle;
  /* 0x0024 */ void* StatusHandle;
  /* 0x0028 */ void* DevicePnPEventNotifyHandle;
  /* 0x002c */ void* NetPnPEventHandle;
  union
  {
    /* 0x0030 */ void* CancelSendHandler /* function */;
    /* 0x0030 */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0034 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0038 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x003c */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x0040 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0044 */ void* SendNetBufferListsHandler /* function */;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x0048 */

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
  /* 0x004c */ long __PADDING__[1];
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
  /* 0x0024 */ struct _NET_BUFFER_LIST* IndicateHead;
  /* 0x0028 */ struct _NET_BUFFER_LIST* IndicateTail;
  /* 0x002c */ unsigned long BoundToIP;
  /* 0x0030 */ unsigned char Paused;
  /* 0x0034 */ long NblsAllocated;
  /* 0x0038 */ unsigned long TrackingQueued;
  /* 0x003c */ unsigned long TrackingDequeued;
  /* 0x0040 */ unsigned long TrackingResources;
  /* 0x0044 */ unsigned long TrackingPending;
  /* 0x0048 */ unsigned long TrackingIndicated;
  /* 0x004c */ unsigned long TrackingEmptied;
} NDIS_M_PERIODIC_RECEIVES, *PNDIS_M_PERIODIC_RECEIVES; /* size: 0x0050 */

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
} NDIS_PCI_DEVICE_CUSTOM_PROPERTIES, *PNDIS_PCI_DEVICE_CUSTOM_PROPERTIES; /* size: 0x0028 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

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
      /* 0x0014 */ struct _IRP* PendingQueryPowerIrp;
    }; /* size: 0x0006 */
  }; /* size: 0x0008 */
  /* 0x0018 */ struct _KEVENT* PnPEventLockEvent;
  /* 0x001c */ void* OpenQueue;
  /* 0x0020 */ struct _REFERENCE ShortRef;
  /* 0x0028 */ struct _NDIS_OBJECT_HEADER* MediaSpecificAttributes;
  /* 0x002c */ unsigned char LinkStateIndicationFlags;
  /* 0x002d */ unsigned char LockAcquired;
  /* 0x002e */ unsigned char PmodeOpens;
  /* 0x002f */ unsigned char AssignedProcessor;
  /* 0x0030 */ unsigned long Lock;
  /* 0x0034 */ struct _NDIS_REQUEST* MediaRequest;
  union
  {
    /* 0x0038 */ struct _NDIS_MINIPORT_INTERRUPT* Interrupt;
    /* 0x0038 */ struct _NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS* InterruptEx;
  }; /* size: 0x0004 */
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
  /* 0x012c */ void* LockHandler;
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
  /* 0x01b0 */ unsigned __int64 XmitLinkSpeed;
  /* 0x01b8 */ unsigned __int64 RcvLinkSpeed;
  /* 0x01c0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x01c4 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions;
  /* 0x01c8 */ unsigned long MiniportAutoNegotiationFlags;
  /* 0x01cc */ struct _SINGLE_LIST_ENTRY WorkQueue[7];
  /* 0x01e8 */ struct _SINGLE_LIST_ENTRY SingleWorkItems[6];
  /* 0x0200 */ unsigned char SendFlags;
  /* 0x0201 */ unsigned char TrResetRing;
  /* 0x0202 */ unsigned char MP6SupportPM;
  /* 0x0203 */ unsigned char XState;
  /* 0x0204 */ struct _NDIS_LOG* Log;
  /* 0x0208 */ struct _CM_RESOURCE_LIST* AllocatedResources;
  /* 0x020c */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
  /* 0x0210 */ struct _SINGLE_LIST_ENTRY PatternList;
  /* 0x0214 */ struct _NDIS_PNP_CAPABILITIES PMCapabilities;
  /* 0x0224 */ struct _DEVICE_CAPABILITIES DeviceCaps;
  /* 0x0264 */ unsigned long CombinedWakeUpEnable;
  /* 0x0268 */ unsigned long WakeUpEnable;
  /* 0x026c */ struct _IRP* pIrpWaitWake;
  /* 0x0270 */ enum _SYSTEM_POWER_STATE WaitWakeSystemState;
  /* 0x0278 */ union _LARGE_INTEGER VcIndex;
  /* 0x0280 */ unsigned long VcCountLock;
  /* 0x0284 */ struct _LIST_ENTRY WmiEnabledVcs;
  /* 0x028c */ struct _NDIS_GUID* pNdisGuidMap;
  /* 0x0290 */ struct _NDIS_GUID* pCustomGuidMap;
  /* 0x0294 */ unsigned short VcCount;
  /* 0x0296 */ unsigned short cNdisGuidMap;
  /* 0x0298 */ unsigned short cCustomGuidMap;
  /* 0x02a0 */ struct _NDIS_TIMER MediaDisconnectTimer;
  /* 0x02e8 */ enum _NDIS_PNP_DEVICE_STATE PnPDeviceState;
  /* 0x02ec */ enum _NDIS_PNP_DEVICE_STATE OldPnPDeviceState;
  /* 0x02f0 */ struct _KDPC DeferredDpc;
  /* 0x0310 */ union _LARGE_INTEGER StartTicks;
  /* 0x0318 */ struct _NDIS_PACKET* IndicatedPacket[32];
  /* 0x0398 */ struct _KEVENT* RemoveReadyEvent;
  /* 0x039c */ struct _KEVENT* AllOpensClosedEvent;
  /* 0x03a0 */ struct _KEVENT* AllRequestsCompletedEvent;
  /* 0x03a4 */ unsigned long InitTimeMs;
  /* 0x03a8 */ struct _NDIS_MINIPORT_WORK_ITEM WorkItemBuffer[6];
  /* 0x03f0 */ struct _OID_LIST* OidList;
  /* 0x03f4 */ unsigned short InternalResetCount;
  /* 0x03f6 */ unsigned short MiniportResetCount;
  /* 0x03f8 */ unsigned short MediaSenseConnectCount;
  /* 0x03fa */ unsigned short MediaSenseDisconnectCount;
  /* 0x03fc */ struct _NDIS_PACKET** xPackets;
  /* 0x0400 */ unsigned long UserModeOpenReferences;
  /* 0x0404 */ void* SavedIndicateNetBufferListsHandler /* function */;
  /* 0x0408 */ void* SavedIndicateNetBufferListsContext;
  /* 0x040c */ void* WSendPacketsHandler /* function */;
  /* 0x0410 */ unsigned long MiniportAttributes;
  /* 0x0414 */ unsigned short NumOpens;
  /* 0x0416 */ unsigned short CFHangXTicks;
  /* 0x0418 */ unsigned long RequestCount;
  /* 0x041c */ unsigned long IndicatedPacketsCount;
  /* 0x0420 */ unsigned long PhysicalMediumType;
  /* 0x0424 */ enum _NDIS_MEDIUM MiniportMediaType;
  /* 0x0428 */ struct _NDIS_REQUEST* LastRequest;
  /* 0x042c */ void* FakeMac;
  /* 0x0430 */ unsigned long LockDbg;
  /* 0x0434 */ unsigned long LockDbgX;
  /* 0x0438 */ void* LockThread;
  /* 0x043c */ unsigned long InfoFlags;
  /* 0x0440 */ unsigned long TimerQueueLock;
  /* 0x0444 */ struct _KEVENT* ResetCompletedEvent;
  /* 0x0448 */ struct _KEVENT* QueuedBindingCompletedEvent;
  /* 0x044c */ void* SavedPacketIndicateHandler /* function */;
  /* 0x0450 */ unsigned long RegisteredInterrupts;
  /* 0x0454 */ unsigned long SetOid;
  /* 0x0458 */ struct _KEVENT* WakeUpTimerEvent;
  /* 0x045c */ void* DeviceContext;
  /* 0x0460 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RcvScaleCapabilities;
  /* 0x0470 */ unsigned char CombinedRSSParametersBuf[196];
  /* 0x0538 */ unsigned char RSSParametersBuf[196];
  /* 0x05fc */ unsigned char Miniport5InNdis6Mode;
  /* 0x05fd */ unsigned char Miniport5HasNdis6Component;
  /* 0x05fe */ unsigned char RestoreStackNeeded;
  /* 0x05ff */ char MediaChangeFilters;
  /* 0x0600 */ unsigned char FilterPnPLockAcquired;
  /* 0x0601 */ unsigned char LWFilterAllLoaded;
  /* 0x0602 */ unsigned char CheckPacketFilters;
  /* 0x0603 */ unsigned char ReceiveFilters;
  /* 0x0604 */ void* FilterPnPLockThread;
  /* 0x0608 */ unsigned long FilterPnPLockDbgX;
  /* 0x060c */ unsigned long RecvLock;
  /* 0x0610 */ enum _NDIS_MINIPORT_STATE RecvState;
  /* 0x0614 */ unsigned long OutstandingReceives;
  /* 0x0618 */ void* MiniportRecvLockThread;
  /* 0x061c */ unsigned long RecvLockDbg;
  /* 0x0620 */ void* NextSendPacketsHandler /* function */;
  /* 0x0624 */ void* FinalSendPacketsHandler /* function */;
  /* 0x0628 */ void* LWFilterMutexOwnerThread;
  /* 0x062c */ unsigned long LWFilterMutexOwner;
  /* 0x0630 */ unsigned long LWFilterMutexOwnerCount;
  /* 0x0634 */ struct _NDIS_FILTER_BLOCK* LowestFilter;
  /* 0x0638 */ struct _NDIS_FILTER_BLOCK* HighestFilter;
  /* 0x063c */ void* ShutdownContext;
  union
  {
    /* 0x0640 */ void* ShutdownHandler /* function */;
    /* 0x0640 */ void* ShutdownHandlerEx /* function */;
  }; /* size: 0x0004 */
  /* 0x0644 */ struct _KBUGCHECK_CALLBACK_RECORD BugcheckCallbackRecord;
  /* 0x0664 */ void* TopIndicateNetBufferListsHandler /* function */;
  /* 0x0668 */ void* TopIndicateLoopbackNetBufferListsHandler /* function */;
  /* 0x066c */ void* Ndis5PacketIndicateHandler /* function */;
  /* 0x0670 */ void* MiniportReturnPacketHandler /* function */;
  /* 0x0674 */ void* MiniportReturnPacketContext;
  /* 0x0678 */ void* SynchronousReturnPacketHandler /* function */;
  /* 0x067c */ void* SynchronousReturnPacketContext;
  /* 0x0680 */ void* NextRequestHandler /* function */;
  /* 0x0684 */ void* NextRequestContext;
  /* 0x0688 */ struct _LIST_ENTRY OidRequestList;
  /* 0x0690 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x0694 */ void* NextCoOidRequestHandle;
  /* 0x0698 */ unsigned long Ndis6ProtocolsBound;
  /* 0x069c */ unsigned long PmodeOpen6;
  /* 0x06a0 */ enum _NDIS_MINIPORT_STATE State;
  /* 0x06a4 */ struct _KEVENT* AsyncOpCompletionEvent;
  /* 0x06a8 */ int AsyncOpCompletionStatus;
  /* 0x06ac */ struct _ULONG_REFERENCE Ref;
  /* 0x06b8 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x06c0 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x06c8 */ unsigned long SupportedPacketFilters;
  /* 0x06cc */ struct _NDIS_MINIPORT_HANDLERS NoFilter;
  /* 0x0714 */ struct _NDIS_MINIPORT_HANDLERS Next;
  /* 0x075c */ long NumOfPauseRestartRequests;
  /* 0x0760 */ unsigned long FilterPnPFlags;
  /* 0x0764 */ unsigned long SupportedStatistics;
  /* 0x0768 */ unsigned long cDpcSendCompletes;
  /* 0x076c */ unsigned long cDpcRcvIndications;
  /* 0x0770 */ unsigned long cDpcRcvIndicationCalls;
  /* 0x0774 */ unsigned long cDpcNbSendCompletes;
  /* 0x0778 */ unsigned long cDpcNblSendCompletes;
  /* 0x077c */ unsigned long cDpcNblIndications;
  /* 0x0780 */ unsigned long cDpcMaxPacketsIndicated;
  /* 0x0784 */ unsigned long cDpcTotalDpcCount;
  /* 0x0788 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RecvScaleCapabilities;
  /* 0x0798 */ struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES* GeneralAttributes;
  /* 0x079c */ struct _LIST_ENTRY PortList;
  /* 0x07a4 */ unsigned char* AllocatedPortIndices;
  /* 0x07a8 */ unsigned long AllocatedPortIndicesLength;
  /* 0x07ac */ unsigned long NumberOfPorts;
  /* 0x07b0 */ unsigned long NumberOfActivePorts;
  /* 0x07b8 */ unsigned __int64 MiniportXmitLinkSpeed;
  /* 0x07c0 */ unsigned __int64 MiniportRcvLinkSpeed;
  /* 0x07c8 */ struct _KEVENT RestoreStackTimerEvent;
  /* 0x07d8 */ struct _NDIS_TIMER RestoreStackTimer;
  /* 0x0820 */ struct _NDIS_WORK_ITEM RestoreStackWorkItem;
  /* 0x0848 */ unsigned long RestoreStackBindRefCount;
  /* 0x084c */ unsigned long ProtocolsToBind;
  /* 0x0850 */ struct _NDIS_DPC_TRACKER* DpcTrackers;
  /* 0x0854 */ struct _NDIS_DPC_TRACKER* CurrentDpcTracker;
  /* 0x0858 */ unsigned char DpcTrackerIndex;
  /* 0x0859 */ unsigned char SupportedRss;
  /* 0x0860 */ unsigned __int64 DpcWatchDogCycleCount;
  /* 0x0868 */ unsigned long DataBackFillSize;
  /* 0x086c */ unsigned long ContextBackFillSize;
  /* 0x0870 */ unsigned long SupportedPauseFunctions;
  /* 0x0878 */ struct _NDIS_RESTART_GENERAL_ATTRIBUTES TopFilterRestartAttributes;
  /* 0x08c8 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES TopRecvScaleCapabilities;
  /* 0x08d8 */ long NumOfOpenPauseRestartRequests;
  /* 0x08dc */ long MiniportStackPauseCount;
  /* 0x08e0 */ unsigned long NsiOpenReferences;
  /* 0x08e4 */ struct _KEVENT* NsiRequestsCompletedEvent;
  /* 0x08e8 */ enum _DEVICE_POWER_STATE QueryPowerDeviceState;
  /* 0x08ec */ unsigned char MinimumNdisMajorVersion;
  /* 0x08ed */ unsigned char MinimumNdisMinorVersion;
  /* 0x08ee */ unsigned short NumOfMinimumVersionDrivers;
  /* 0x08f0 */ struct _NDIS_MINIPORT_STATS* BottomIfStats;
  /* 0x08f4 */ struct _NDIS_M_PERIODIC_RECEIVES PeriodicReceiveQueue;
  /* 0x0944 */ enum _NDIS_PORT_CONTROL_STATE DefaultSendControlState;
  /* 0x0948 */ enum _NDIS_PORT_CONTROL_STATE DefaultRcvControlState;
  /* 0x094c */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultSendAuthorizationState;
  /* 0x0950 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultRcvAuthorizationState;
  /* 0x0954 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortSendControlState;
  /* 0x0958 */ enum _NDIS_PORT_CONTROL_STATE DefaultPortRcvControlState;
  /* 0x095c */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState;
  /* 0x0960 */ enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState;
  /* 0x0964 */ struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES PciDeviceCustomProperties;
  /* 0x098c */ void* TopNdis5PacketIndicateHandler /* function */;
  /* 0x0990 */ unsigned long* ndisSupportedOidList;
  /* 0x0994 */ unsigned long ndisSupportedOidListLength;
  /* 0x0998 */ struct _WORK_QUEUE_ITEM MiniportDpcWorkItem;
  /* 0x09a8 */ unsigned __int64 InvalidFrames;
  union
  {
    /* 0x09b0 */ unsigned char BeginSavedFields;
    /* 0x09b0 */ unsigned long NumUserOpens;
  }; /* size: 0x0004 */
  /* 0x09b4 */ struct _NDIS_MINIPORT_OFFLOAD_REG OffloadRegistry;
  /* 0x09b8 */ unsigned short MediaDisconnectTimeOut;
  /* 0x09ba */ unsigned short SGMapRegistersNeeded;
  /* 0x09bc */ unsigned long DriverVerifyFlags;
  /* 0x09c0 */ void* SetBusData /* function */;
  /* 0x09c4 */ void* GetBusData /* function */;
  /* 0x09c8 */ void* BusDataContext;
  /* 0x09cc */ enum _NDIS_INTERFACE_TYPE BusType;
  /* 0x09d0 */ unsigned long BusNumber;
  /* 0x09d4 */ unsigned long SlotNumber;
  /* 0x09d8 */ struct _NDIS_EVENT OpenReadyEvent;
  /* 0x09e8 */ unsigned long NumAdminOpens;
  /* 0x09ec */ struct _NDIS_M_DRIVER_BLOCK* DriverHandle;
  /* 0x09f0 */ struct _NDIS_BIND_PATHS* BindPaths;
  /* 0x09f4 */ struct _NDIS_BIND_PATHS* LWFilterList;
  /* 0x09f8 */ struct _NDIS_PROTOCOL_BLOCK** ProtocolsFailToBind;
  /* 0x09fc */ unsigned long MiniportPhysicalMediumType;
  /* 0x0a00 */ struct _NDIS_FILTER_ATTACH_LIST* LWFilterAttachList;
  /* 0x0a04 */ unsigned long NumFilters;
  /* 0x0a08 */ unsigned int NetLuidIndex;
  /* 0x0a0c */ struct _KMUTANT LWFilterMutex;
  /* 0x0a2c */ void* SecurityDescriptor;
  /* 0x0a30 */ struct _UNICODE_STRING BaseName;
  /* 0x0a38 */ struct _UNICODE_STRING MiniportName;
  /* 0x0a40 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0a44 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0a48 */ struct _DEVICE_OBJECT* NextDeviceObject;
  /* 0x0a4c */ struct _NDIS_MINIPORT_BLOCK* NextGlobalMiniport;
  /* 0x0a50 */ struct _UNICODE_STRING* pAdapterInstanceName;
  /* 0x0a54 */ unsigned long PnPCapabilities;
  /* 0x0a58 */ enum _DEVICE_POWER_STATE CurrentDevicePowerState;
  /* 0x0a5c */ void* BusInterface;
  /* 0x0a60 */ unsigned short InstanceNumber;
  /* 0x0a64 */ void* ConfigurationHandle;
  /* 0x0a68 */ struct _GUID InterfaceGuid;
  /* 0x0a78 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x0a7c */ unsigned int IfIndex;
  /* 0x0a80 */ enum _NET_IF_ADMIN_STATUS AdminStatus;
  /* 0x0a84 */ enum _NET_IF_OPER_STATUS OperStatus;
  /* 0x0a88 */ unsigned long OperStatusFlags;
  union
  {
    /* 0x0a8c */ void* SendHandler /* function */;
    /* 0x0a8c */ void* WanSendHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0a90 */ struct _NDIS_MINIPORT_OFFLOAD* Offload;
  /* 0x0a94 */ void* AddDeviceContext;
  /* 0x0a98 */ struct _IO_REMOVE_LOCK RemoveLock;
  /* 0x0ab0 */ struct _UNICODE_STRING DevinterfaceNetSymbolicLinkName;
  /* 0x0ab8 */ unsigned char RssEnable;
  /* 0x0ab9 */ unsigned char ChimneyEnable;
  /* 0x0abc */ unsigned long PhysicalMediumInInf;
  /* 0x0ac0 */ struct _UNICODE_STRING ExportName;
  /* 0x0ac8 */ struct _UNICODE_STRING FilterClass;
  /* 0x0ad0 */ void* StatusProcessingThread;
  /* 0x0ad4 */ unsigned long StatusProcessingDbgX;
  /* 0x0ad8 */ struct _UNICODE_STRING FdoName;
  /* 0x0ae0 */ struct _NDIS_MINIPORT_BLOCK* NextOrphanedMiniport;
  /* 0x0ae4 */ long __PADDING__[1];
} NDIS_MINIPORT_BLOCK, *PNDIS_MINIPORT_BLOCK; /* size: 0x0ae8 */

