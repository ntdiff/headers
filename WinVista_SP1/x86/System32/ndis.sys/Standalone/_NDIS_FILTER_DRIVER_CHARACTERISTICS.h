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
} NDIS_FILTER_DRIVER_CHARACTERISTICS, *PNDIS_FILTER_DRIVER_CHARACTERISTICS; /* size: 0x0074 */

