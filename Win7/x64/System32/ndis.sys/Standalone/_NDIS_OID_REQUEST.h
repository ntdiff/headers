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
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesWritten;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} QUERY, *PQUERY; /* size: 0x0020 */

typedef struct _SET
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned int InformationBufferLength;
  /* 0x0014 */ unsigned int BytesRead;
  /* 0x0018 */ unsigned int BytesNeeded;
  /* 0x001c */ long __PADDING__[1];
} SET, *PSET; /* size: 0x0020 */

typedef struct _METHOD
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0008 */ void* InformationBuffer;
  /* 0x0010 */ unsigned long InputBufferLength;
  /* 0x0014 */ unsigned long OutputBufferLength;
  /* 0x0018 */ unsigned long MethodId;
  /* 0x001c */ unsigned int BytesWritten;
  /* 0x0020 */ unsigned int BytesRead;
  /* 0x0024 */ unsigned int BytesNeeded;
} METHOD, *PMETHOD; /* size: 0x0028 */

typedef union _REQUEST_DATA
{
  union
  {
    /* 0x0000 */ struct _QUERY QUERY_INFORMATION;
    /* 0x0000 */ struct _SET SET_INFORMATION;
    /* 0x0000 */ struct _METHOD METHOD_INFORMATION;
  }; /* size: 0x0028 */
} REQUEST_DATA, *PREQUEST_DATA; /* size: 0x0028 */

typedef struct _NDIS_OID_REQUEST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _NDIS_REQUEST_TYPE RequestType;
  /* 0x0008 */ unsigned long PortNumber;
  /* 0x000c */ unsigned int Timeout;
  /* 0x0010 */ void* RequestId;
  /* 0x0018 */ void* RequestHandle;
  /* 0x0020 */ union _REQUEST_DATA DATA;
  /* 0x0048 */ unsigned char NdisReserved[128];
  /* 0x00c8 */ unsigned char MiniportReserved[16];
  /* 0x00d8 */ unsigned char SourceReserved[16];
  /* 0x00e8 */ unsigned char SupportedRevision;
  /* 0x00e9 */ unsigned char Reserved1;
  /* 0x00ea */ unsigned short Reserved2;
  /* 0x00ec */ long __PADDING__[1];
} NDIS_OID_REQUEST, *PNDIS_OID_REQUEST; /* size: 0x00f0 */

