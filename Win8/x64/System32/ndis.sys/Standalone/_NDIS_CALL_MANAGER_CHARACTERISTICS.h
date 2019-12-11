typedef struct _NDIS_CALL_MANAGER_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorVersion;
  /* 0x0001 */ unsigned char MinorVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* CmCreateVcHandler /* function */;
  /* 0x0010 */ void* CmDeleteVcHandler /* function */;
  /* 0x0018 */ void* CmOpenAfHandler /* function */;
  /* 0x0020 */ void* CmCloseAfHandler /* function */;
  /* 0x0028 */ void* CmRegisterSapHandler /* function */;
  /* 0x0030 */ void* CmDeregisterSapHandler /* function */;
  /* 0x0038 */ void* CmMakeCallHandler /* function */;
  /* 0x0040 */ void* CmCloseCallHandler /* function */;
  /* 0x0048 */ void* CmIncomingCallCompleteHandler /* function */;
  /* 0x0050 */ void* CmAddPartyHandler /* function */;
  /* 0x0058 */ void* CmDropPartyHandler /* function */;
  /* 0x0060 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0068 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x0070 */ void* CmModifyCallQoSHandler /* function */;
  /* 0x0078 */ void* CmRequestHandler /* function */;
  /* 0x0080 */ void* CmRequestCompleteHandler /* function */;
} NDIS_CALL_MANAGER_CHARACTERISTICS, *PNDIS_CALL_MANAGER_CHARACTERISTICS; /* size: 0x0088 */

