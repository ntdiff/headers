typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ unsigned char ZeroBased;
  /* 0x0010 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x0018 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _NDIS_FILTER_DRIVER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char MajorNdisVersion;
  /* 0x0005 */ unsigned char MinorNdisVersion;
  /* 0x0006 */ unsigned char MajorDriverVersion;
  /* 0x0007 */ unsigned char MinorDriverVersion;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ struct _UNICODE_STRING FriendlyName;
  /* 0x0020 */ struct _UNICODE_STRING UniqueName;
  /* 0x0030 */ struct _UNICODE_STRING ServiceName;
  /* 0x0040 */ void* SetOptionsHandler /* function */;
  /* 0x0048 */ void* SetFilterModuleOptionsHandler /* function */;
  /* 0x0050 */ void* AttachHandler /* function */;
  /* 0x0058 */ void* DetachHandler /* function */;
  /* 0x0060 */ void* RestartHandler /* function */;
  /* 0x0068 */ void* PauseHandler /* function */;
  /* 0x0070 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0078 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0080 */ void* CancelSendNetBufferListsHandler /* function */;
  /* 0x0088 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x0090 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0098 */ void* OidRequestHandler /* function */;
  /* 0x00a0 */ void* OidRequestCompleteHandler /* function */;
  /* 0x00a8 */ void* CancelOidRequestHandler /* function */;
  /* 0x00b0 */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x00b8 */ void* NetPnPEventHandler /* function */;
  /* 0x00c0 */ void* StatusHandler /* function */;
  /* 0x00c8 */ void* DirectOidRequestHandler /* function */;
  /* 0x00d0 */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x00d8 */ void* CancelDirectOidRequestHandler /* function */;
} NDIS_FILTER_DRIVER_CHARACTERISTICS, *PNDIS_FILTER_DRIVER_CHARACTERISTICS; /* size: 0x00e0 */

typedef enum _NDIS_FILTER_TYPE
{
  NdisFilterTypeMonitoring = 1,
  NdisFilterTypeModifying = 2,
} NDIS_FILTER_TYPE, *PNDIS_FILTER_TYPE;

typedef enum _NDIS_FILTER_RUN_TYPE
{
  NdisFilterRunTypeMandatory = 1,
  NdisFilterRunTypeOptional = 2,
} NDIS_FILTER_RUN_TYPE, *PNDIS_FILTER_RUN_TYPE;

typedef struct _NDIS_FILTER_DRIVER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_FILTER_DRIVER_BLOCK* NextFilterDriver;
  /* 0x0010 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0018 */ struct _NDIS_FILTER_BLOCK* FilterQueue;
  /* 0x0020 */ void* FilterDriverContext;
  /* 0x0028 */ unsigned __int64 Lock;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0038 */ struct _LIST_ENTRY DeviceList;
  /* 0x0048 */ struct _REFERENCE_EX Ref;
  /* 0x0060 */ struct _NDIS_FILTER_DRIVER_CHARACTERISTICS DefaultFilterCharacteristics;
  /* 0x0140 */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x0148 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x0150 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x0158 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x0160 */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x0168 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x0170 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x0178 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x0180 */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x0188 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x0190 */ void* TcpOffloadEventHandler /* function */;
  /* 0x0198 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x01a0 */ void* InitiateOffloadHandler /* function */;
  /* 0x01a8 */ void* TerminateOffloadHandler /* function */;
  /* 0x01b0 */ void* UpdateOffloadHandler /* function */;
  /* 0x01b8 */ void* InvalidateOffloadHandler /* function */;
  /* 0x01c0 */ void* QueryOffloadHandler /* function */;
  /* 0x01c8 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x01d0 */ enum _NDIS_FILTER_TYPE FilterType;
  /* 0x01d4 */ enum _NDIS_FILTER_RUN_TYPE FilterRunType;
  /* 0x01d8 */ struct _UNICODE_STRING FilterClass;
  /* 0x01e8 */ struct _UNICODE_STRING ImageName;
} NDIS_FILTER_DRIVER_BLOCK, *PNDIS_FILTER_DRIVER_BLOCK; /* size: 0x01f8 */

