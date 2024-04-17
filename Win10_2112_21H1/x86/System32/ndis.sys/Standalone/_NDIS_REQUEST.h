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
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesWritten;
  /* 0x0010 */ unsigned int BytesNeeded;
} NDIS_REQUEST::_DATA::_QUERY_INFORMATION, *PNDIS_REQUEST::_DATA::_QUERY_INFORMATION; /* size: 0x0014 */

typedef struct _NDIS_REQUEST::_DATA::_SET_INFORMATION
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesRead;
  /* 0x0010 */ unsigned int BytesNeeded;
} NDIS_REQUEST::_DATA::_SET_INFORMATION, *PNDIS_REQUEST::_DATA::_SET_INFORMATION; /* size: 0x0014 */

typedef union _NDIS_REQUEST::_DATA
{
  union
  {
    /* 0x0000 */ struct _NDIS_REQUEST::_DATA::_QUERY_INFORMATION QUERY_INFORMATION;
    /* 0x0000 */ struct _NDIS_REQUEST::_DATA::_SET_INFORMATION SET_INFORMATION;
  }; /* size: 0x0014 */
} NDIS_REQUEST::_DATA, *PNDIS_REQUEST::_DATA; /* size: 0x0014 */

typedef struct _NDIS_REQUEST
{
  /* 0x0000 */ unsigned char MacReserved[16];
  /* 0x0010 */ enum _NDIS_REQUEST_TYPE RequestType;
  /* 0x0014 */ union _NDIS_REQUEST::_DATA DATA;
  /* 0x0028 */ unsigned char NdisReserved[36];
  union
  {
    /* 0x004c */ unsigned char CallMgrReserved[8];
    /* 0x004c */ unsigned char ProtocolReserved[8];
  }; /* size: 0x0008 */
  /* 0x0054 */ unsigned char MiniportReserved[8];
} NDIS_REQUEST, *PNDIS_REQUEST; /* size: 0x005c */

