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
      /* 0x0000 */ unsigned long SpinLock;
      /* 0x0004 */ void* Context;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned char Reserved[16];
  }; /* size: 0x0010 */
  /* 0x0010 */ union _NDIS_RW_LOCK_REFCOUNT RefCount[32];
} NDIS_RW_LOCK, *PNDIS_RW_LOCK; /* size: 0x0210 */

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

typedef struct _NDIS_FILTER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_FILTER_BLOCK* NextFilter;
  /* 0x0008 */ struct _NDIS_FILTER_DRIVER_BLOCK* FilterDriver;
  /* 0x000c */ void* FilterModuleContext;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0014 */ struct _UNICODE_STRING* FilterInstanceName;
  /* 0x0018 */ struct _UNICODE_STRING* FilterFriendlyName;
  /* 0x001c */ struct _NDIS_RW_LOCK ReadWriteLock;
  /* 0x022c */ unsigned long Flags;
  /* 0x0230 */ enum _NDIS_FILTER_STATE State;
  /* 0x0234 */ struct _REFERENCE Ref;
  /* 0x023c */ int FakeStatus;
  /* 0x0240 */ struct _NDIS_FILTER_BLOCK* NextGlobalFilter;
  /* 0x0244 */ struct _NDIS_FILTER_BLOCK* LowerFilter;
  /* 0x0248 */ struct _NDIS_FILTER_BLOCK* HigherFilter;
  /* 0x024c */ struct _FILTER_PAUSE_RESTART_CONTEXT* AsyncOpContext;
  /* 0x0250 */ long NumOfPauseRestartRequests;
  /* 0x0254 */ unsigned long Lock;
  /* 0x0258 */ void* LockThread;
  /* 0x025c */ unsigned long LockDbg;
  /* 0x0260 */ struct _LIST_ENTRY OidRequestList;
  /* 0x0268 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x026c */ struct _REFERENCE PnPRef;
  /* 0x0274 */ enum _NDIS_MEDIUM MediaType;
  /* 0x0278 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;
  /* 0x027c */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0280 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x0288 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0290 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0298 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x029c */ unsigned long AutoNegotiationFlags;
  /* 0x02a0 */ unsigned char XState;
  /* 0x02a1 */ unsigned char Reserved1;
  /* 0x02a2 */ unsigned char Reserved2;
  /* 0x02a3 */ unsigned char Reserved3;
  /* 0x02a4 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;
  /* 0x02a8 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;
  /* 0x02b0 */ unsigned __int64 XmitLinkSpeedIndicateUp;
  /* 0x02b8 */ unsigned __int64 RcvLinkSpeedIndicateUp;
  /* 0x02c0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;
  /* 0x02c4 */ unsigned long AutoNegotiationFlagsIndicateUp;
  /* 0x02c8 */ void* NextRequestHandle;
  /* 0x02cc */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x02d0 */ void* NextSendNetBufferListsContext;
  /* 0x02d4 */ void* NextSendNetBufferListsObject;
  /* 0x02d8 */ void* NextSendNetBufferListsCompleteHandler /* function */;
  /* 0x02dc */ void* NextSendNetBufferListsCompleteContext;
  /* 0x02e0 */ void* NextIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x02e4 */ void* NextIndicateReceiveNetBufferListsContext;
  /* 0x02e8 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x02ec */ void* NextReturnNetBufferListsContext;
  /* 0x02f0 */ void* NextIndicateStatusHandle;
  /* 0x02f4 */ void* NextDevicePnPEventNotifyHandle;
  /* 0x02f8 */ void* NextNetPnPEventHandle;
  /* 0x02fc */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x0300 */ void* NextCancelSendNetBufferListsContext;
  /* 0x0304 */ void* SetFilterModuleOptionalHandlers /* function */;
  /* 0x0308 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;
  /* 0x0324 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS SavedCharacteristics;
  /* 0x0340 */ void* OidRequestHandler /* function */;
  /* 0x0344 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0348 */ void* CancelRequestHandler /* function */;
  /* 0x034c */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0350 */ void* NetPnPEventHandler /* function */;
  /* 0x0354 */ void* StatusHandler /* function */;
  /* 0x0358 */ void* FilterSendNetBufferListsHandler /* function */;
  /* 0x035c */ void* FilterIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0360 */ void* FilterCancelSendNetBufferListsHandler /* function */;
  /* 0x0364 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0368 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x036c */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0370 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0374 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0378 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x037c */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0380 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0384 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0388 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x038c */ void* TcpOffloadEventHandler /* function */;
  /* 0x0390 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x0394 */ void* InitiateOffloadHandler /* function */;
  /* 0x0398 */ void* TerminateOffloadHandler /* function */;
  /* 0x039c */ void* UpdateOffloadHandler /* function */;
  /* 0x03a0 */ void* InvalidateOffloadHandler /* function */;
  /* 0x03a4 */ void* QueryOffloadHandler /* function */;
  /* 0x03a8 */ void* TcpOffloadSendHandler /* function */;
  /* 0x03ac */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x03b0 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x03b4 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x03b8 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x03bc */ struct _NDIS_FILTER_TASK_OFFLOAD* Offload;
  /* 0x03c0 */ struct _GUID InterfaceGuid;
  /* 0x03d0 */ unsigned long IfIndex;
  /* 0x03d4 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x03d8 */ void* DirectOidRequestHandler /* function */;
  /* 0x03dc */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x03e0 */ void* NextDirectRequestHandle;
  /* 0x03e4 */ unsigned long DirectOidRequestCount;
  /* 0x03e8 */ void* CancelDirectOidRequestHandler /* function */;
  /* 0x03ec */ long __PADDING__[1];
} NDIS_FILTER_BLOCK, *PNDIS_FILTER_BLOCK; /* size: 0x03f0 */

