struct CO_ADDRESS_FAMILY
{
  /* 0x0000 */ unsigned long AddressFamily;
  /* 0x0004 */ unsigned long MajorVersion;
  /* 0x0008 */ unsigned long MinorVersion;
}; /* size: 0x000c */

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

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Reserved;
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
  /* 0x0078 */ void* CmOidRequestHandler /* function */;
  /* 0x0080 */ void* CmOidRequestCompleteHandler /* function */;
  /* 0x0088 */ void* CmNotifyCloseAfCompleteHandler /* function */;
} NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS, *PNDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS; /* size: 0x0090 */

typedef struct _NDIS_AF_LIST
{
  /* 0x0000 */ struct _NDIS_AF_LIST* NextAf;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* Open;
  /* 0x0010 */ struct CO_ADDRESS_FAMILY AddressFamily;
  /* 0x0020 */ struct _NDIS_CALL_MANAGER_CHARACTERISTICS CmChars;
  /* 0x00a8 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;
  /* 0x0138 */ unsigned long NdisMajorVersion;
  /* 0x013c */ long __PADDING__[1];
} NDIS_AF_LIST, *PNDIS_AF_LIST; /* size: 0x0140 */

