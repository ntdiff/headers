typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef union _NDIS_RW_LOCK_REFCOUNT
{
  union
  {
    /* 0x0000 */ unsigned int RefCount;
    /* 0x0000 */ unsigned char cacheLine[16];
  }; /* size: 0x0010 */
} NDIS_RW_LOCK_REFCOUNT, *PNDIS_RW_LOCK_REFCOUNT; /* size: 0x0010 */

typedef struct _NDIS_RW_LOCK
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 SpinLock;
      /* 0x0008 */ void* Context;
    }; /* size: 0x0010 */
    /* 0x0000 */ unsigned char Reserved[16];
  }; /* size: 0x0010 */
  /* 0x0010 */ union _NDIS_RW_LOCK_REFCOUNT RefCount[64];
} NDIS_RW_LOCK, *PNDIS_RW_LOCK; /* size: 0x0410 */

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
  /* 0x0010 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0018 */ void* CancelSendNetBufferListsHandler /* function */;
  /* 0x0020 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x0028 */ void* ReturnNetBufferListsHandler /* function */;
} NDIS_FILTER_PARTIAL_CHARACTERISTICS, *PNDIS_FILTER_PARTIAL_CHARACTERISTICS; /* size: 0x0030 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NDIS_FILTER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_FILTER_BLOCK* NextFilter;
  /* 0x0010 */ struct _NDIS_FILTER_DRIVER_BLOCK* FilterDriver;
  /* 0x0018 */ void* FilterModuleContext;
  /* 0x0020 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0028 */ struct _UNICODE_STRING* FilterInstanceName;
  /* 0x0030 */ struct _UNICODE_STRING* FilterFriendlyName;
  /* 0x0038 */ struct _NDIS_RW_LOCK ReadWriteLock;
  /* 0x0448 */ unsigned long Flags;
  /* 0x044c */ enum _NDIS_FILTER_STATE State;
  /* 0x0450 */ struct _REFERENCE Ref;
  /* 0x0460 */ int FakeStatus;
  /* 0x0468 */ struct _NDIS_FILTER_BLOCK* NextGlobalFilter;
  /* 0x0470 */ struct _NDIS_FILTER_BLOCK* LowerFilter;
  /* 0x0478 */ struct _NDIS_FILTER_BLOCK* HigherFilter;
  /* 0x0480 */ struct _FILTER_PAUSE_RESTART_CONTEXT* AsyncOpContext;
  /* 0x0488 */ long NumOfPauseRestartRequests;
  /* 0x0490 */ unsigned __int64 Lock;
  /* 0x0498 */ void* LockThread;
  /* 0x04a0 */ unsigned long LockDbg;
  /* 0x04a8 */ struct _LIST_ENTRY OidRequestList;
  /* 0x04b8 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x04c0 */ struct _REFERENCE PnPRef;
  /* 0x04d0 */ enum _NDIS_MEDIUM MediaType;
  /* 0x04d4 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;
  /* 0x04d8 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x04dc */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x04e0 */ unsigned __int64 XmitLinkSpeed;
  /* 0x04e8 */ unsigned __int64 RcvLinkSpeed;
  /* 0x04f0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x04f4 */ unsigned long AutoNegotiationFlags;
  /* 0x04f8 */ unsigned char XState;
  /* 0x04f9 */ unsigned char Reserved1;
  /* 0x04fa */ unsigned char Reserved2;
  /* 0x04fb */ unsigned char Reserved3;
  /* 0x04fc */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;
  /* 0x0500 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;
  /* 0x0508 */ unsigned __int64 XmitLinkSpeedIndicateUp;
  /* 0x0510 */ unsigned __int64 RcvLinkSpeedIndicateUp;
  /* 0x0518 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;
  /* 0x051c */ unsigned long AutoNegotiationFlagsIndicateUp;
  /* 0x0520 */ void* NextRequestHandle;
  /* 0x0528 */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0530 */ void* NextSendNetBufferListsContext;
  /* 0x0538 */ void* NextSendNetBufferListsObject;
  /* 0x0540 */ void* NextSendNetBufferListsCompleteHandler /* function */;
  /* 0x0548 */ void* NextSendNetBufferListsCompleteContext;
  /* 0x0550 */ void* NextIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0558 */ void* NextIndicateReceiveNetBufferListsContext;
  /* 0x0560 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x0568 */ void* NextReturnNetBufferListsContext;
  /* 0x0570 */ void* NextIndicateStatusHandle;
  /* 0x0578 */ void* NextDevicePnPEventNotifyHandle;
  /* 0x0580 */ void* NextNetPnPEventHandle;
  /* 0x0588 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x0590 */ void* NextCancelSendNetBufferListsContext;
  /* 0x0598 */ void* SetFilterModuleOptionalHandlers /* function */;
  /* 0x05a0 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;
  /* 0x05d0 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS SavedCharacteristics;
  /* 0x0600 */ void* OidRequestHandler /* function */;
  /* 0x0608 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0610 */ void* CancelRequestHandler /* function */;
  /* 0x0618 */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0620 */ void* NetPnPEventHandler /* function */;
  /* 0x0628 */ void* StatusHandler /* function */;
  /* 0x0630 */ void* FilterSendNetBufferListsHandler /* function */;
  /* 0x0638 */ void* FilterIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0640 */ void* FilterCancelSendNetBufferListsHandler /* function */;
  /* 0x0648 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0650 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0658 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0660 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0668 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0670 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0678 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0680 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0688 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0690 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x0698 */ void* TcpOffloadEventHandler /* function */;
  /* 0x06a0 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x06a8 */ void* InitiateOffloadHandler /* function */;
  /* 0x06b0 */ void* TerminateOffloadHandler /* function */;
  /* 0x06b8 */ void* UpdateOffloadHandler /* function */;
  /* 0x06c0 */ void* InvalidateOffloadHandler /* function */;
  /* 0x06c8 */ void* QueryOffloadHandler /* function */;
  /* 0x06d0 */ void* TcpOffloadSendHandler /* function */;
  /* 0x06d8 */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x06e0 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x06e8 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x06f0 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x06f8 */ struct _NDIS_FILTER_TASK_OFFLOAD* Offload;
  /* 0x0700 */ struct _GUID InterfaceGuid;
  /* 0x0710 */ unsigned long IfIndex;
  /* 0x0718 */ struct _NDIS_IF_BLOCK* IfBlock;
} NDIS_FILTER_BLOCK, *PNDIS_FILTER_BLOCK; /* size: 0x0720 */

