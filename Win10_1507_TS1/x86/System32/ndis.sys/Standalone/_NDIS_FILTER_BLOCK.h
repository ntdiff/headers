typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> >
{
  /* 0x0000 */ struct Rtl::KString* _p;
}; /* size: 0x0004 */

typedef enum _NDIS_FILTER_STATE
{
  NdisFilterDetached = 0,
  NdisFilterAttaching = 1,
  NdisFilterPaused = 2,
  NdisFilterRestarting = 3,
  NdisFilterRunning = 4,
  NdisFilterPausing = 5,
  NdisFilterDetaching = 6,
} NDIS_FILTER_STATE, *PNDIS_FILTER_STATE;

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ unsigned char ZeroBased;
  /* 0x0008 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x000c */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _PENDING_STACK_EXPANSION_FALLBACK_WORK
{
  /* 0x0000 */ unsigned char IssueOidRequest;
  /* 0x0001 */ unsigned char CompleteOidRequest;
  /* 0x0004 */ struct _NDIS_OID_REQUEST* DirectOidRequestsToComplete;
  /* 0x0008 */ struct _NDIS_STATUS_INDICATION* StatusIndications;
  /* 0x000c */ struct _NET_PNP_EVENT_NOTIFICATION* NetPnPEvents;
  /* 0x0010 */ struct _NET_DEVICE_PNP_EVENT* DevicePnPEvents;
  /* 0x0014 */ struct _NET_BUFFER_LIST* SentNblsToComplete;
  /* 0x0018 */ struct _NET_BUFFER_LIST* ReceivedNblsToComplete;
} PENDING_STACK_EXPANSION_FALLBACK_WORK, *PPENDING_STACK_EXPANSION_FALLBACK_WORK; /* size: 0x001c */

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
  NdisPhysicalMediumMax = 20,
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;

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

typedef enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
  NdisPauseFunctionsUnsupported = 0,
  NdisPauseFunctionsSendOnly = 1,
  NdisPauseFunctionsReceiveOnly = 2,
  NdisPauseFunctionsSendAndReceive = 3,
  NdisPauseFunctionsUnknown = 4,
} NDIS_SUPPORTED_PAUSE_FUNCTIONS, *PNDIS_SUPPORTED_PAUSE_FUNCTIONS;

typedef struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* SendNetBufferListsHandler /* function */;
  /* 0x000c */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0010 */ void* CancelSendNetBufferListsHandler /* function */;
  /* 0x0014 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x0018 */ void* ReturnNetBufferListsHandler /* function */;
} NDIS_FILTER_PARTIAL_CHARACTERISTICS, *PNDIS_FILTER_PARTIAL_CHARACTERISTICS; /* size: 0x001c */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _NDIS_PM_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long EnabledWoLPacketPatterns;
  /* 0x0008 */ unsigned long EnabledProtocolOffloads;
  /* 0x000c */ unsigned long WakeUpFlags;
  /* 0x0010 */ unsigned long MediaSpecificWakeUpEvents;
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0014 */

typedef struct _NDIS_FILTER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_FILTER_BLOCK* NextFilter;
  /* 0x0008 */ struct _NDIS_FILTER_DRIVER_BLOCK* FilterDriver;
  /* 0x000c */ void* FilterModuleContext;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0014 */ class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > FilterInstanceName;
  /* 0x0018 */ struct _UNICODE_STRING* FilterFriendlyName;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ unsigned long StackFlags;
  /* 0x0024 */ enum _NDIS_FILTER_STATE State;
  /* 0x0028 */ struct _REFERENCE_EX Ref;
  /* 0x0034 */ int FakeStatus;
  /* 0x0038 */ struct _NDIS_FILTER_BLOCK* NextGlobalFilter;
  /* 0x003c */ struct _NDIS_FILTER_BLOCK* LowerFilter;
  /* 0x0040 */ struct _NDIS_FILTER_BLOCK* HigherFilter;
  /* 0x0044 */ struct _FILTER_PAUSE_RESTART_CONTEXT* AsyncOpContext;
  /* 0x0048 */ long NumOfPauseRestartRequests;
  /* 0x004c */ unsigned long Lock;
  /* 0x0050 */ void* LockThread;
  /* 0x0054 */ unsigned long LockDbg;
  /* 0x0058 */ struct _LIST_ENTRY OidRequestList;
  /* 0x0060 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  struct
  {
    /* 0x0064 */ struct _WORK_QUEUE_ITEM WorkItem;
    /* 0x0074 */ unsigned char WorkItemQueued;
    /* 0x0078 */ struct _PENDING_STACK_EXPANSION_FALLBACK_WORK PendingWork;
  } /* size: 0x0030 */ StackExpansionFallback;
  /* 0x0094 */ volatile unsigned char StatusIndicationsQueued;
  /* 0x0098 */ volatile long DroppedReceiveNbls;
  /* 0x009c */ volatile long DroppedSendNbls;
  /* 0x00a0 */ unsigned long DroppedStatusIndications;
  /* 0x00a4 */ unsigned long DroppedUncloneableStatusIndications;
  /* 0x00a8 */ struct _REFERENCE_EX PnPRef;
  /* 0x00b4 */ enum _NDIS_MEDIUM MediaType;
  /* 0x00b8 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;
  /* 0x00bc */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x00c0 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x00c8 */ unsigned __int64 XmitLinkSpeed;
  /* 0x00d0 */ unsigned __int64 RcvLinkSpeed;
  /* 0x00d8 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x00dc */ unsigned long AutoNegotiationFlags;
  /* 0x00e0 */ unsigned char XState;
  /* 0x00e1 */ unsigned char Reserved1;
  /* 0x00e2 */ unsigned char Reserved2;
  /* 0x00e3 */ unsigned char Reserved3;
  /* 0x00e4 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;
  /* 0x00e8 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;
  /* 0x00f0 */ unsigned __int64 XmitLinkSpeedIndicateUp;
  /* 0x00f8 */ unsigned __int64 RcvLinkSpeedIndicateUp;
  /* 0x0100 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;
  /* 0x0104 */ unsigned long AutoNegotiationFlagsIndicateUp;
  /* 0x0108 */ void* NextRequestHandle;
  /* 0x010c */ struct _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY* IterativeDataPathTracker[4];
  /* 0x0110 */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0114 */ void* NextSendNetBufferListsContext;
  /* 0x0118 */ struct NDIS_NBL_TRACKER_HANDLE__* NextSendNetBufferListsTracker;
  /* 0x011c */ struct _NDIS_OBJECT_HEADER* NextSendNetBufferListsObject;
  /* 0x0120 */ void* NextSendNetBufferListsCompleteHandler /* function */;
  /* 0x0124 */ void* NextSendNetBufferListsCompleteContext;
  /* 0x0128 */ struct NDIS_NBL_TRACKER_HANDLE__* NextSendNetBufferListsCompleteTracker;
  /* 0x012c */ struct _NDIS_OBJECT_HEADER* NextSendNetBufferListsCompleteObject;
  /* 0x0130 */ void* NextIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0134 */ void* NextIndicateReceiveNetBufferListsContext;
  /* 0x0138 */ struct NDIS_NBL_TRACKER_HANDLE__* NextIndicateReceiveNetBufferListsTracker;
  /* 0x013c */ struct _NDIS_OBJECT_HEADER* NextIndicateReceiveNetBufferListsObject;
  /* 0x0140 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x0144 */ void* NextReturnNetBufferListsContext;
  /* 0x0148 */ struct NDIS_NBL_TRACKER_HANDLE__* NextReturnNetBufferListsTracker;
  /* 0x014c */ struct _NDIS_OBJECT_HEADER* NextReturnNetBufferListsObject;
  /* 0x0150 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x0154 */ void* NextCancelSendNetBufferListsContext;
  /* 0x0158 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;
  /* 0x0174 */ void* FilterSendNetBufferListsHandler /* function */;
  /* 0x0178 */ void* FilterIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x017c */ void* FilterCancelSendNetBufferListsHandler /* function */;
  /* 0x0180 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0184 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0188 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x018c */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0190 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0194 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0198 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x019c */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x01a0 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x01a4 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x01a8 */ void* TcpOffloadEventHandler /* function */;
  /* 0x01ac */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x01b0 */ void* InitiateOffloadHandler /* function */;
  /* 0x01b4 */ void* TerminateOffloadHandler /* function */;
  /* 0x01b8 */ void* UpdateOffloadHandler /* function */;
  /* 0x01bc */ void* InvalidateOffloadHandler /* function */;
  /* 0x01c0 */ void* QueryOffloadHandler /* function */;
  /* 0x01c4 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x01c8 */ struct NDIS_NBL_TRACKER_HANDLE__* NblTracker;
  /* 0x01cc */ struct _NDIS_FILTER_TASK_OFFLOAD* Offload;
  /* 0x01d0 */ struct _GUID InterfaceGuid;
  /* 0x01e0 */ unsigned long IfIndex;
  /* 0x01e4 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x01e8 */ void* NextDirectRequestHandle;
  /* 0x01ec */ unsigned long DirectOidRequestCount;
  /* 0x01f0 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x01f4 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x01f8 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
  /* 0x020c */ struct NDIS_BIND_FILTER_LINK* Bind;
  /* 0x0210 */ void* VerifierContext;
  /* 0x0214 */ long __PADDING__[1];
} NDIS_FILTER_BLOCK, *PNDIS_FILTER_BLOCK; /* size: 0x0218 */

