typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* ClCreateVcHandler /* function */;
  /* 0x0010 */ void* ClDeleteVcHandler /* function */;
  /* 0x0018 */ void* ClOidRequestHandler /* function */;
  /* 0x0020 */ void* ClOidRequestCompleteHandler /* function */;
  /* 0x0028 */ void* ClOpenAfCompleteHandlerEx /* function */;
  /* 0x0030 */ void* ClCloseAfCompleteHandler /* function */;
  /* 0x0038 */ void* ClRegisterSapCompleteHandler /* function */;
  /* 0x0040 */ void* ClDeregisterSapCompleteHandler /* function */;
  /* 0x0048 */ void* ClMakeCallCompleteHandler /* function */;
  /* 0x0050 */ void* ClModifyCallQoSCompleteHandler /* function */;
  /* 0x0058 */ void* ClCloseCallCompleteHandler /* function */;
  /* 0x0060 */ void* ClAddPartyCompleteHandler /* function */;
  /* 0x0068 */ void* ClDropPartyCompleteHandler /* function */;
  /* 0x0070 */ void* ClIncomingCallHandler /* function */;
  /* 0x0078 */ void* ClIncomingCallQoSChangeHandler /* function */;
  /* 0x0080 */ void* ClIncomingCloseCallHandler /* function */;
  /* 0x0088 */ void* ClIncomingDropPartyHandler /* function */;
  /* 0x0090 */ void* ClCallConnectedHandler /* function */;
  /* 0x0098 */ void* ClNotifyCloseAfHandler /* function */;
} NDIS_CO_CLIENT_OPTIONAL_HANDLERS, *PNDIS_CO_CLIENT_OPTIONAL_HANDLERS; /* size: 0x00a0 */

