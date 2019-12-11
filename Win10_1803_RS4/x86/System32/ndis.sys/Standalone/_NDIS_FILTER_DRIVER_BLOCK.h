typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ unsigned char ZeroBased;
  /* 0x0008 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x000c */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_FILTER_DRIVER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char MajorNdisVersion;
  /* 0x0005 */ unsigned char MinorNdisVersion;
  /* 0x0006 */ unsigned char MajorDriverVersion;
  /* 0x0007 */ unsigned char MinorDriverVersion;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _UNICODE_STRING FriendlyName;
  /* 0x0014 */ struct _UNICODE_STRING UniqueName;
  /* 0x001c */ struct _UNICODE_STRING ServiceName;
  /* 0x0024 */ void* SetOptionsHandler /* function */;
  /* 0x0028 */ void* SetFilterModuleOptionsHandler /* function */;
  /* 0x002c */ void* AttachHandler /* function */;
  /* 0x0030 */ void* DetachHandler /* function */;
  /* 0x0034 */ void* RestartHandler /* function */;
  /* 0x0038 */ void* PauseHandler /* function */;
  /* 0x003c */ void* SendNetBufferListsHandler /* function */;
  /* 0x0040 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0044 */ void* CancelSendNetBufferListsHandler /* function */;
  /* 0x0048 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x004c */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0050 */ void* OidRequestHandler /* function */;
  /* 0x0054 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0058 */ void* CancelOidRequestHandler /* function */;
  /* 0x005c */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0060 */ void* NetPnPEventHandler /* function */;
  /* 0x0064 */ void* StatusHandler /* function */;
  /* 0x0068 */ void* DirectOidRequestHandler /* function */;
  /* 0x006c */ void* DirectOidRequestCompleteHandler /* function */;
  /* 0x0070 */ void* CancelDirectOidRequestHandler /* function */;
  /* 0x0074 */ void* SynchronousOidRequestHandler /* function */;
  /* 0x0078 */ void* SynchronousOidRequestCompleteHandler /* function */;
} NDIS_FILTER_DRIVER_CHARACTERISTICS, *PNDIS_FILTER_DRIVER_CHARACTERISTICS; /* size: 0x007c */

class KRef<NDIS_BIND_FILTER_DRIVER>
{
  /* 0x0000 */ class KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder* _p;
}; /* size: 0x0004 */

typedef struct _NDIS_FILTER_DRIVER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_FILTER_DRIVER_BLOCK* NextFilterDriver;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x000c */ struct _NDIS_FILTER_BLOCK* FilterQueue;
  /* 0x0010 */ void* FilterDriverContext;
  /* 0x0014 */ unsigned long Lock;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ struct _LIST_ENTRY DeviceList;
  /* 0x0024 */ struct _REFERENCE_EX Ref;
  /* 0x0030 */ struct _NDIS_FILTER_DRIVER_CHARACTERISTICS DefaultFilterCharacteristics;
  /* 0x00ac */ void* InitiateOffloadCompleteHandler /* function */;
  /* 0x00b0 */ void* TerminateOffloadCompleteHandler /* function */;
  /* 0x00b4 */ void* UpdateOffloadCompleteHandler /* function */;
  /* 0x00b8 */ void* InvalidateOffloadCompleteHandler /* function */;
  /* 0x00bc */ void* QueryOffloadCompleteHandler /* function */;
  /* 0x00c0 */ void* IndicateOffloadEventHandler /* function */;
  /* 0x00c4 */ void* TcpOffloadSendCompleteHandler /* function */;
  /* 0x00c8 */ void* TcpOffloadReceiveCompleteHandler /* function */;
  /* 0x00cc */ void* TcpOffloadDisconnectCompleteHandler /* function */;
  /* 0x00d0 */ void* TcpOffloadForwardCompleteHandler /* function */;
  /* 0x00d4 */ void* TcpOffloadEventHandler /* function */;
  /* 0x00d8 */ void* TcpOffloadReceiveIndicateHandler /* function */;
  /* 0x00dc */ void* InitiateOffloadHandler /* function */;
  /* 0x00e0 */ void* TerminateOffloadHandler /* function */;
  /* 0x00e4 */ void* UpdateOffloadHandler /* function */;
  /* 0x00e8 */ void* InvalidateOffloadHandler /* function */;
  /* 0x00ec */ void* QueryOffloadHandler /* function */;
  /* 0x00f0 */ void* TcpOffloadReceiveReturnHandler /* function */;
  /* 0x00f4 */ class KRef<NDIS_BIND_FILTER_DRIVER> Bind;
  /* 0x00f8 */ struct _UNICODE_STRING ImageName;
} NDIS_FILTER_DRIVER_BLOCK, *PNDIS_FILTER_DRIVER_BLOCK; /* size: 0x0100 */

