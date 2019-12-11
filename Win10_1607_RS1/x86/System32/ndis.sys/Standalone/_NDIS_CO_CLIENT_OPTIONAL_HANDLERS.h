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
  /* 0x000c */ void* ClDeleteVcHandler /* function */;
  /* 0x0010 */ void* ClOidRequestHandler /* function */;
  /* 0x0014 */ void* ClOidRequestCompleteHandler /* function */;
  /* 0x0018 */ void* ClOpenAfCompleteHandlerEx /* function */;
  /* 0x001c */ void* ClCloseAfCompleteHandler /* function */;
  /* 0x0020 */ void* ClRegisterSapCompleteHandler /* function */;
  /* 0x0024 */ void* ClDeregisterSapCompleteHandler /* function */;
  /* 0x0028 */ void* ClMakeCallCompleteHandler /* function */;
  /* 0x002c */ void* ClModifyCallQoSCompleteHandler /* function */;
  /* 0x0030 */ void* ClCloseCallCompleteHandler /* function */;
  /* 0x0034 */ void* ClAddPartyCompleteHandler /* function */;
  /* 0x0038 */ void* ClDropPartyCompleteHandler /* function */;
  /* 0x003c */ void* ClIncomingCallHandler /* function */;
  /* 0x0040 */ void* ClIncomingCallQoSChangeHandler /* function */;
  /* 0x0044 */ void* ClIncomingCloseCallHandler /* function */;
  /* 0x0048 */ void* ClIncomingDropPartyHandler /* function */;
  /* 0x004c */ void* ClCallConnectedHandler /* function */;
  /* 0x0050 */ void* ClNotifyCloseAfHandler /* function */;
} NDIS_CO_CLIENT_OPTIONAL_HANDLERS, *PNDIS_CO_CLIENT_OPTIONAL_HANDLERS; /* size: 0x0054 */

