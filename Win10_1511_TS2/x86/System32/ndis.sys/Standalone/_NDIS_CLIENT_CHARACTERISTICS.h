typedef struct _NDIS_CLIENT_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorVersion;
  /* 0x0001 */ unsigned char MinorVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* ClCreateVcHandler /* function */;
  /* 0x000c */ void* ClDeleteVcHandler /* function */;
  /* 0x0010 */ void* ClRequestHandler /* function */;
  /* 0x0014 */ void* ClRequestCompleteHandler /* function */;
  /* 0x0018 */ void* ClOpenAfCompleteHandler /* function */;
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
} NDIS_CLIENT_CHARACTERISTICS, *PNDIS_CLIENT_CHARACTERISTICS; /* size: 0x0050 */

