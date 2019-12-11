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
} NDIS_PM_PARAMETERS, *PNDIS_PM_PARAMETERS; /* size: 0x0010 */

typedef struct _NDIS_FILTER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_FILTER_BLOCK* NextFilter;
  /* 0x0008 */ struct _NDIS_FILTER_DRIVER_BLOCK* FilterDriver;
  /* 0x000c */ void* FilterModuleContext;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0014 */ struct _UNICODE_STRING* FilterInstanceName;
  /* 0x0018 */ struct _UNICODE_STRING* FilterFriendlyName;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ enum _NDIS_FILTER_STATE State;
  /* 0x0024 */ struct _REFERENCE Ref;
  /* 0x002c */ int FakeStatus;
  /* 0x0030 */ struct _NDIS_FILTER_BLOCK* NextGlobalFilter;
  /* 0x0034 */ struct _NDIS_FILTER_BLOCK* LowerFilter;
  /* 0x0038 */ struct _NDIS_FILTER_BLOCK* HigherFilter;
  /* 0x003c */ struct _FILTER_PAUSE_RESTART_CONTEXT* AsyncOpContext;
  /* 0x0040 */ long NumOfPauseRestartRequests;
  /* 0x0044 */ unsigned long Lock;
  /* 0x0048 */ void* LockThread;
  /* 0x004c */ unsigned long LockDbg;
  /* 0x0050 */ struct _LIST_ENTRY OidRequestList;
  /* 0x0058 */ struct _NDIS_OID_REQUEST* PendingOidRequest;
  /* 0x005c */ struct _REFERENCE PnPRef;
  /* 0x0064 */ enum _NDIS_MEDIUM MediaType;
  /* 0x0068 */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;
  /* 0x006c */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0070 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x0078 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0080 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0088 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
  /* 0x008c */ unsigned long AutoNegotiationFlags;
  /* 0x0090 */ unsigned char XState;
  /* 0x0091 */ unsigned char Reserved1;
  /* 0x0092 */ unsigned char Reserved2;
  /* 0x0093 */ unsigned char Reserved3;
  /* 0x0094 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;
  /* 0x0098 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;
  /* 0x00a0 */ unsigned __int64 XmitLinkSpeedIndicateUp;
  /* 0x00a8 */ unsigned __int64 RcvLinkSpeedIndicateUp;
  /* 0x00b0 */ enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;
  /* 0x00b4 */ unsigned long AutoNegotiationFlagsIndicateUp;
  /* 0x00b8 */ void* NextRequestHandle;
  /* 0x00bc */ void* NextSendNetBufferListsHandler /* function */;
  /* 0x00c0 */ void* NextSendNetBufferListsContext;
  /* 0x00c4 */ void* NextSendNetBufferListsObject;
  /* 0x00c8 */ void* NextSendNetBufferListsCompleteHandler /* function */;
  /* 0x00cc */ void* NextSendNetBufferListsCompleteContext;
  /* 0x00d0 */ void* NextSendNetBufferListsCompleteObject;
  /* 0x00d4 */ void* NextIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x00d8 */ void* NextIndicateReceiveNetBufferListsContext;
  /* 0x00dc */ void* NextIndicateReceiveNetBufferListsObject;
  /* 0x00e0 */ void* NextReturnNetBufferListsHandler /* function */;
  /* 0x00e4 */ void* NextReturnNetBufferListsContext;
  /* 0x00e8 */ void* NextReturnNetBufferListsObject;
  /* 0x00ec */ void* NextIndicateStatusHandle;
  /* 0x00f0 */ void* NextDevicePnPEventNotifyHandle;
  /* 0x00f4 */ void* NextNetPnPEventHandle;
  /* 0x00f8 */ void* NextCancelSendNetBufferListsHandler /* function */;
  /* 0x00fc */ void* NextCancelSendNetBufferListsContext;
  /* 0x0100 */ void* SetFilterModuleOptionalHandlers /* function */;
  /* 0x0104 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;
  /* 0x0120 */ struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS SavedCharacteristics;
  /* 0x013c */ void* OidRequestHandler /* function */;
  /* 0x0140 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0144 */ void* CancelRequestHandler /* function */;
  /* 0x0148 */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x014c */ void* NetPnPEventHandler /* function */;
  /* 0x0150 */ void* StatusHandler /* function */;
  /* 0x0154 */ void* FilterSendNetBufferListsHandler /* function */;
  /* 0x0158 */ void* FilterIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x015c */ void* FilterCancelSendNetBufferListsHandler /* function */;
  /* 0x0160 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0164 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0168 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x016c */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0170 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0174 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0178 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x017c */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0180 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0184 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x0188 */ void* TcpOffloadEventHandler /* function */;
  /* 0x018c */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x0190 */ void* InitiateOffloadHandler /* function */;
  /* 0x0194 */ void* TerminateOffloadHandler /* function */;
  /* 0x0198 */ void* UpdateOffloadHandler /* function */;
  /* 0x019c */ void* InvalidateOffloadHandler /* function */;
  /* 0x01a0 */ void* QueryOffloadHandler /* function */;
  /* 0x01a4 */ void* TcpOffloadSendHandler /* function */;
  /* 0x01a8 */ void* TcpOffloadReceiveHandler /* function */;
  /* 0x01ac */ void* TcpOffloadDisconnectHandler /* function */;
  /* 0x01b0 */ void* TcpOffloadForwardHandler /* function */;
  /* 0x01b4 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x01b8 */ struct _NDIS_FILTER_TASK_OFFLOAD* Offload;
  /* 0x01bc */ struct _GUID InterfaceGuid;
  /* 0x01cc */ unsigned long IfIndex;
  /* 0x01d0 */ struct _NDIS_IF_BLOCK* IfBlock;
  /* 0x01d4 */ void* DirectOidRequestHandler /* function */;
  /* 0x01d8 */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x01dc */ void* NextDirectRequestHandle;
  /* 0x01e0 */ unsigned long DirectOidRequestCount;
  /* 0x01e4 */ void* CancelDirectOidRequestHandler /* function */;
  /* 0x01e8 */ struct _SINGLE_LIST_ENTRY WOLPatternList;
  /* 0x01ec */ struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;
  /* 0x01f0 */ struct _NDIS_PM_PARAMETERS PMCurrentParameters;
} NDIS_FILTER_BLOCK, *PNDIS_FILTER_BLOCK; /* size: 0x0200 */

