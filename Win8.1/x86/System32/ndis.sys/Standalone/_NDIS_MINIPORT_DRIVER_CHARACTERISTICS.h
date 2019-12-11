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
  /* 0x000c */ void* SetOptionsHandler /* function */;
  /* 0x0010 */ void* InitializeHandlerEx /* function */;
  /* 0x0014 */ void* HaltHandlerEx /* function */;
  /* 0x0018 */ void* UnloadHandler /* function */;
  /* 0x001c */ void* PauseHandler /* function */;
  /* 0x0020 */ void* RestartHandler /* function */;
  /* 0x0024 */ void* OidRequestHandler /* function */;
  /* 0x0028 */ void* SendNetBufferListsHandler /* function */;
  /* 0x002c */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0030 */ void* CancelSendHandler /* function */;
  /* 0x0034 */ void* CheckForHangHandlerEx /* function */;
  /* 0x0038 */ void* ResetHandlerEx /* function */;
  /* 0x003c */ void* DevicePnPEventNotifyHandler /* function */;
  /* 0x0040 */ void* ShutdownHandlerEx /* function */;
  /* 0x0044 */ void* CancelOidRequestHandler /* function */;
  /* 0x0048 */ void* DirectOidRequestHandler /* function */;
  /* 0x004c */ void* CancelDirectOidRequestHandler /* function */;
} NDIS_MINIPORT_DRIVER_CHARACTERISTICS, *PNDIS_MINIPORT_DRIVER_CHARACTERISTICS; /* size: 0x0050 */

