typedef struct _NDIS_CLIENT_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorVersion;
  /* 0x0001 */ unsigned char MinorVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* ClCreateVcHandler /* function */;
  /* 0x0010 */ void* ClDeleteVcHandler /* function */;
  /* 0x0018 */ void* ClRequestHandler /* function */;
  /* 0x0020 */ void* ClRequestCompleteHandler /* function */;
  /* 0x0028 */ void* ClOpenAfCompleteHandler /* function */;
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
} NDIS_CLIENT_CHARACTERISTICS, *PNDIS_CLIENT_CHARACTERISTICS; /* size: 0x0098 */

