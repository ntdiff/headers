typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_PM_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long EnabledWoLPacketPatterns;
  /* 0x0008 */ unsigned long EnabledProtocolOffloads;
  /* 0x000c */ unsigned long WakeUpFlags;
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0010 */

typedef struct _NDIS_FILTER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_FILTER_BLOCK* NextFilter;
  /* 0x0010 */ struct _NDIS_FILTER_DRIVER_BLOCK* FilterDriver;
  /* 0x0018 */ void* FilterModuleContext;
  /* 0x0020 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0028 */ struct _UNICODE_STRING* FilterInstanceName;
  /* 0x0030 */ struct _UNICODE_STRING* FilterFriendlyName;
  /* 0x0038 */ unsigned long Flags;
  /* 0x003c */ enum _NDIS_FILTER_STATE State;
  /* 0x0040 */ struct _REFERENCE Ref;
  /* 0x0050 */ int FakeStatus;
  /* 0x0058 */ struct _NDIS_FILTER_BLOCK* NextGlobalFilter;
  /* 0x0060 */ struct _NDIS_FILTER_BLOCK* LowerFilter;
  /* 0x0068 */ struct _NDIS_FILTER_BLOCK* HigherFilter;
  /* 0x0070 */ struct _FILTER_PAUSE_RESTART_CONTEXT* AsyncOpContext;
  /* 0x0078 */ long NumOfPauseRestartRequests;
  /* 0x0080 */ unsigned __int64 Lock;
  /* 0x0088 */ void* LockThread;
  /* 0x0090 */ unsigned long LockDbg;
  /* 0x0098 */ struct _LIST_ENTRY OidRequestList;
  /* 0x00a8 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x00b0 */ struct _REFERENCE PnPRef;
  /* 0x00c0 */ enum _NDIS_MEDIUM MediaType;
  /* 0x00c4 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;
  /* 0x00c8 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x00cc */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x00d0 */ unsigned __int64 XmitLinkSpeed;
  /* 0x00d8 */ unsigned __int64 RcvLinkSpeed;
  /* 0x00e0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x00e4 */ unsigned long AutoNegotiationFlags;
  /* 0x00e8 */ unsigned char XState;
  /* 0x00e9 */ unsigned char Reserved1;
  /* 0x00ea */ unsigned char Reserved2;
  /* 0x00eb */ unsigned char Reserved3;
  /* 0x00ec */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;
  /* 0x00f0 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;
  /* 0x00f8 */ unsigned __int64 XmitLinkSpeedIndicateUp;
  /* 0x0100 */ unsigned __int64 RcvLinkSpeedIndicateUp;
  /* 0x0108 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;
  /* 0x010c */ unsigned long AutoNegotiationFlagsIndicateUp;
  /* 0x0110 */ void* NextRequestHandle;
  /* 0x0118 */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x0120 */ void* NextSendNetBufferListsContext;
  /* 0x0128 */ void* NextSendNetBufferListsObject;
  /* 0x0130 */ void* NextSendNetBufferListsCompleteHandler /* function */;
  /* 0x0138 */ void* NextSendNetBufferListsCompleteContext;
  /* 0x0140 */ void* NextSendNetBufferListsCompleteObject;
  /* 0x0148 */ void* NextIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0150 */ void* NextIndicateReceiveNetBufferListsContext;
  /* 0x0158 */ void* NextIndicateReceiveNetBufferListsObject;
  /* 0x0160 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x0168 */ void* NextReturnNetBufferListsContext;
  /* 0x0170 */ void* NextReturnNetBufferListsObject;
  /* 0x0178 */ void* NextIndicateStatusHandle;
  /* 0x0180 */ void* NextDevicePnPEventNotifyHandle;
  /* 0x0188 */ void* NextNetPnPEventHandle;
  /* 0x0190 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x0198 */ void* NextCancelSendNetBufferListsContext;
  /* 0x01a0 */ void* SetFilterModuleOptionalHandlers /* function */;
  /* 0x01a8 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;
  /* 0x01d8 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS SavedCharacteristics;
  /* 0x0208 */ void* OidRequestHandler /* function */;
  /* 0x0210 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0218 */ void* CancelRequestHandler /* function */;
  /* 0x0220 */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0228 */ void* NetPnPEventHandler /* function */;
  /* 0x0230 */ void* StatusHandler /* function */;
  /* 0x0238 */ void* FilterSendNetBufferListsHandler /* function */;
  /* 0x0240 */ void* FilterIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0248 */ void* FilterCancelSendNetBufferListsHandler /* function */;
  /* 0x0250 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0258 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0260 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0268 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0270 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0278 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0280 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0288 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0290 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0298 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x02a0 */ void* TcpOffloadEventHandler /* function */;
  /* 0x02a8 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x02b0 */ void* InitiateOffloadHandler /* function */;
  /* 0x02b8 */ void* TerminateOffloadHandler /* function */;
  /* 0x02c0 */ void* UpdateOffloadHandler /* function */;
  /* 0x02c8 */ void* InvalidateOffloadHandler /* function */;
  /* 0x02d0 */ void* QueryOffloadHandler /* function */;
  /* 0x02d8 */ void* TcpOffloadSendHandler /* function */;
  /* 0x02e0 */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x02e8 */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x02f0 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x02f8 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x0300 */ struct _NDIS_FILTER_TASK_OFFLOAD* Offload;
  /* 0x0308 */ struct _GUID InterfaceGuid;
  /* 0x0318 */ unsigned long IfIndex;
  /* 0x0320 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x0328 */ void* DirectOidRequestHandler /* function */;
  /* 0x0330 */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x0338 */ void* NextDirectRequestHandle;
  /* 0x0340 */ unsigned long DirectOidRequestCount;
  /* 0x0348 */ void* CancelDirectOidRequestHandler /* function */;
  /* 0x0350 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x0358 */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x0360 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
} NDIS_FILTER_BLOCK, *PNDIS_FILTER_BLOCK; /* size: 0x0370 */

