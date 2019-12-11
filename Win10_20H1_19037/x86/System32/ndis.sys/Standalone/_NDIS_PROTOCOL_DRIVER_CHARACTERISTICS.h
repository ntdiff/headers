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
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char MajorNdisVersion;
  /* 0x0005 */ unsigned char MinorNdisVersion;
  /* 0x0006 */ unsigned char MajorDriverVersion;
  /* 0x0007 */ unsigned char MinorDriverVersion;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _UNICODE_STRING Name;
  /* 0x0014 */ void* SetOptionsHandler /* function */;
  /* 0x0018 */ void* BindAdapterHandlerEx /* function */;
  /* 0x001c */ void* UnbindAdapterHandlerEx /* function */;
  /* 0x0020 */ void* OpenAdapterCompleteHandlerEx /* function */;
  /* 0x0024 */ void* CloseAdapterCompleteHandlerEx /* function */;
  /* 0x0028 */ void* NetPnPEventHandler /* function */;
  /* 0x002c */ void* UninstallHandler /* function */;
  /* 0x0030 */ void* OidRequestCompleteHandler /* function */;
  /* 0x0034 */ void* StatusHandlerEx /* function */;
  /* 0x0038 */ void* ReceiveNetBufferListsHandler /* function */;
  /* 0x003c */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0040 */ void* DirectOidRequestCompleteHandler /* function */;
} NDIS_PROTOCOL_DRIVER_CHARACTERISTICS, *PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS; /* size: 0x0044 */

