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

typedef struct _QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesWritten;
  /* 0x0010 */ unsigned int BytesNeeded;
} QUERY_INFORMATION, *PQUERY_INFORMATION; /* size: 0x0014 */

typedef struct _SET_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesRead;
  /* 0x0010 */ unsigned int BytesNeeded;
} SET_INFORMATION, *PSET_INFORMATION; /* size: 0x0014 */

typedef union _DATA
{
  union
  {
    /* 0x0000 */ struct _QUERY_INFORMATION QUERY_INFORMATION;
    /* 0x0000 */ struct _SET_INFORMATION SET_INFORMATION;
  }; /* size: 0x0014 */
} DATA, *PDATA; /* size: 0x0014 */

typedef struct _NDIS_REQUEST
{
  /* 0x0000 */ unsigned char MacReserved[16];
  /* 0x0010 */ enum _NDIS_REQUEST_TYPE RequestType;
  /* 0x0014 */ union _DATA DATA;
  /* 0x0028 */ unsigned char NdisReserved[36];
  union
  {
    /* 0x004c */ unsigned char CallMgrReserved[8];
    /* 0x004c */ unsigned char ProtocolReserved[8];
  }; /* size: 0x0008 */
  /* 0x0054 */ unsigned char MiniportReserved[8];
} NDIS_REQUEST, *PNDIS_REQUEST; /* size: 0x005c */

typedef struct _NDIS_CO_AF_BLOCK
{
  /* 0x0000 */ struct _NDIS_CO_AF_BLOCK* NextAf;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ long References;
  /* 0x000c */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0010 */ struct _NDIS_CALL_MANAGER_CHARACTERISTICS* CallMgrEntries;
  /* 0x0014 */ struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS* CallMgrChars;
  /* 0x0018 */ struct _NDIS_OPEN_BLOCK* CallMgrOpen;
  /* 0x001c */ void* CallMgrContext;
  /* 0x0020 */ struct _NDIS_CLIENT_CHARACTERISTICS ClientEntries;
  /* 0x0070 */ struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;
  /* 0x00c4 */ struct _NDIS_OPEN_BLOCK* ClientOpen;
  /* 0x00c8 */ void* ClientContext;
  /* 0x00cc */ unsigned long Lock;
  /* 0x00d0 */ unsigned long CmMajorNdisVersion;
  /* 0x00d4 */ unsigned long ClMajorNdisVersion;
  /* 0x00d8 */ struct _NDIS_REQUEST* Ndis5CmRequest;
  /* 0x00dc */ struct _NDIS_REQUEST Request;
  /* 0x0138 */ struct _NDIS_REQUEST* CloseAfNdisRequest;
  /* 0x013c */ unsigned char CloseAfRequested;
  /* 0x013d */ char __PADDING__[3];
} NDIS_CO_AF_BLOCK, *PNDIS_CO_AF_BLOCK; /* size: 0x0140 */

