typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _QUERY
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesWritten;
  /* 0x0010 */ unsigned int BytesNeeded;
} QUERY, *PQUERY; /* size: 0x0014 */

typedef struct _SET
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned int InformationBufferLength;
  /* 0x000c */ unsigned int BytesRead;
  /* 0x0010 */ unsigned int BytesNeeded;
} SET, *PSET; /* size: 0x0014 */

typedef struct _METHOD
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ void* InformationBuffer;
  /* 0x0008 */ unsigned long InputBufferLength;
  /* 0x000c */ unsigned long OutputBufferLength;
  /* 0x0010 */ unsigned long MethodId;
  /* 0x0014 */ unsigned int BytesWritten;
  /* 0x0018 */ unsigned int BytesRead;
  /* 0x001c */ unsigned int BytesNeeded;
} METHOD, *PMETHOD; /* size: 0x0020 */

typedef union _REQUEST_DATA
{
  union
  {
    /* 0x0000 */ struct _QUERY QUERY_INFORMATION;
    /* 0x0000 */ struct _SET SET_INFORMATION;
    /* 0x0000 */ struct _METHOD METHOD_INFORMATION;
  }; /* size: 0x0020 */
} REQUEST_DATA, *PREQUEST_DATA; /* size: 0x0020 */

typedef struct _NDIS_OID_REQUEST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _NDIS_REQUEST_TYPE RequestType;
  /* 0x0008 */ unsigned long PortNumber;
  /* 0x000c */ unsigned int Timeout;
  /* 0x0010 */ void* RequestId;
  /* 0x0014 */ void* RequestHandle;
  /* 0x0018 */ union _REQUEST_DATA DATA;
  /* 0x0038 */ unsigned char NdisReserved[64];
  /* 0x0078 */ unsigned char MiniportReserved[8];
  /* 0x0080 */ unsigned char SourceReserved[8];
  /* 0x0088 */ unsigned char SupportedRevision;
  /* 0x0089 */ unsigned char Reserved1;
  /* 0x008a */ unsigned short Reserved2;
} NDIS_OID_REQUEST, *PNDIS_OID_REQUEST; /* size: 0x008c */

