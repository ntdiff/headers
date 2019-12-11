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

typedef enum _NDIS_REQUEST_TYPE
{
  NdisRequestQueryInformation = 0,
  NdisRequestSetInformation = 1,
  NdisRequestQueryStatistics = 2,
  NdisRequestOpen = 3,
  NdisRequestClose = 4,
  NdisRequestSend = 5,
  NdisRequestTransferData = 6,
  NdisRequestReset = 7,
  NdisRequestGeneric1 = 8,
  NdisRequestGeneric2 = 9,
  NdisRequestGeneric3 = 10,
  NdisRequestGeneric4 = 11,
  NdisRequestMethod = 12,
} NDIS_REQUEST_TYPE, *PNDIS_REQUEST_TYPE;

typedef struct _NDIS_REQUEST::_DATA::_QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesWritten;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} NDIS_REQUEST::_DATA::_QUERY_INFORMATION, *PNDIS_REQUEST::_DATA::_QUERY_INFORMATION; /* size: 0x0020 */

typedef struct _NDIS_REQUEST::_DATA::_SET_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesRead;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} NDIS_REQUEST::_DATA::_SET_INFORMATION, *PNDIS_REQUEST::_DATA::_SET_INFORMATION; /* size: 0x0020 */

typedef union _NDIS_REQUEST::_DATA
{
  union
  {
    /* 0x0000 */ struct _NDIS_REQUEST::_DATA::_QUERY_INFORMATION QUERY_INFORMATION;
    /* 0x0000 */ struct _NDIS_REQUEST::_DATA::_SET_INFORMATION SET_INFORMATION;
  }; /* size: 0x0020 */
} NDIS_REQUEST::_DATA, *PNDIS_REQUEST::_DATA; /* size: 0x0020 */

typedef struct _NDIS_REQUEST
{
  /* 0x0000 */ unsigned char MacReserved[32];
  /* 0x0020 */ enum _NDIS_REQUEST_TYPE RequestType;
  /* 0x0028 */ union _NDIS_REQUEST::_DATA DATA;
  /* 0x0048 */ unsigned char NdisReserved[72];
  union
  {
    /* 0x0090 */ unsigned char CallMgrReserved[16];
    /* 0x0090 */ unsigned char ProtocolReserved[16];
  }; /* size: 0x0010 */
  /* 0x00a0 */ unsigned char MiniportReserved[16];
} NDIS_REQUEST, *PNDIS_REQUEST; /* size: 0x00b0 */

typedef struct _NDIS_CO_AF_BLOCK
{
  /* 0x0000 */ struct _NDIS_CO_AF_BLOCK* NextAf;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ long References;
  /* 0x0010 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0018 */ struct _NDIS_CALL_MANAGER_CHARACTERISTICS* CallMgrEntries;
  /* 0x0020 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS* CallMgrChars;
  /* 0x0028 */ struct _NDIS_OPEN_BLOCK* CallMgrOpen;
  /* 0x0030 */ void* CallMgrContext;
  /* 0x0038 */ struct _NDIS_CLIENT_CHARACTERISTICS ClientEntries;
  /* 0x00d0 */ struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;
  /* 0x0170 */ struct _NDIS_OPEN_BLOCK* ClientOpen;
  /* 0x0178 */ void* ClientContext;
  /* 0x0180 */ unsigned __int64 Lock;
  /* 0x0188 */ unsigned long CmMajorNdisVersion;
  /* 0x018c */ unsigned long ClMajorNdisVersion;
  /* 0x0190 */ struct _NDIS_REQUEST* Ndis5CmRequest;
  /* 0x0198 */ struct _NDIS_REQUEST Request;
  /* 0x0248 */ struct _NDIS_REQUEST* CloseAfNdisRequest;
  /* 0x0250 */ unsigned char CloseAfRequested;
  /* 0x0251 */ char __PADDING__[7];
} NDIS_CO_AF_BLOCK, *PNDIS_CO_AF_BLOCK; /* size: 0x0258 */

