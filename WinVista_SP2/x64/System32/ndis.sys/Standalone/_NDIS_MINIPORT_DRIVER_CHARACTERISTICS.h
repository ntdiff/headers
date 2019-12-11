typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char MajorNdisVersion;
  /* 0x0005 */ unsigned char MinorNdisVersion;
  /* 0x0006 */ unsigned char MajorDriverVersion;
  /* 0x0007 */ unsigned char MinorDriverVersion;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ void* SetOptionsHandler /* function */;
  /* 0x0018 */ void* InitializeHandlerEx /* function */;
  /* 0x0020 */ void* HaltHandlerEx /* function */;
  /* 0x0028 */ void* UnloadHandler /* function */;
  /* 0x0030 */ void* PauseHandler /* function */;
  /* 0x0038 */ void* RestartHandler /* function */;
  /* 0x0040 */ void* OidRequestHandler /* function */;
  /* 0x0048 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0050 */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0058 */ void* CancelSendHandler /* function */;
  /* 0x0060 */ void* CheckForHangHandlerEx /* function */;
  /* 0x0068 */ void* ResetHandlerEx /* function */;
  /* 0x0070 */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0078 */ void* ShutdownHandlerEx /* function */;
  /* 0x0080 */ void* CancelOidRequestHandler /* function */;
  /* 0x0088 */ void* DirectOidRequestHandler /* function */;
  /* 0x0090 */ void* CancelDirectOidRequestHandler /* function */;
} NDIS_MINIPORT_DRIVER_CHARACTERISTICS, *PNDIS_MINIPORT_DRIVER_CHARACTERISTICS; /* size: 0x0098 */

