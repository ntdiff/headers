typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_FRAME_HEADER
{
  NdisFrameHeaderUndefined = 0,
  NdisFrameHeaderMac = 1,
  NdisFrameHeaderMaximum = 2,
} NDIS_FRAME_HEADER, *PNDIS_FRAME_HEADER;

typedef enum _NDIS_RECEIVE_FILTER_TEST
{
  NdisReceiveFilterTestUndefined = 0,
  NdisReceiveFilterTestEqual = 1,
  NdisReceiveFilterTestMaskEqual = 2,
  NdisReceiveFilterTestMaximum = 3,
} NDIS_RECEIVE_FILTER_TEST, *PNDIS_RECEIVE_FILTER_TEST;

typedef enum _NDIS_MAC_HEADER_FIELD
{
  NdisMacHeaderFieldUndefined = 0,
  NdisMacHeaderFieldDestinationAddress = 1,
  NdisMacHeaderFieldSourceAddress = 2,
  NdisMacHeaderFieldProtocol = 3,
  NdisMacHeaderFieldVlanId = 4,
  NdisMacHeaderFieldPriority = 5,
  NdisMacHeaderFieldMaximum = 6,
} NDIS_MAC_HEADER_FIELD, *PNDIS_MAC_HEADER_FIELD;

typedef union _HEADER_FIELD
{
  /* 0x0000 */ enum _NDIS_MAC_HEADER_FIELD MacHeaderField;
} HEADER_FIELD, *PHEADER_FIELD; /* size: 0x0004 */

typedef union _FIELD_VALUE
{
  union
  {
    /* 0x0000 */ unsigned char FieldByteValue;
    /* 0x0000 */ unsigned short FieldShortValue;
    /* 0x0000 */ unsigned long FieldLongValue;
    /* 0x0000 */ unsigned __int64 FieldLong64Value;
    /* 0x0000 */ unsigned char FieldByteArrayValue[16];
  }; /* size: 0x0010 */
} FIELD_VALUE, *PFIELD_VALUE; /* size: 0x0010 */

typedef union _RESULT_VALUE
{
  union
  {
    /* 0x0000 */ unsigned char ResultByteValue;
    /* 0x0000 */ unsigned short ResultShortValue;
    /* 0x0000 */ unsigned long ResultLongValue;
    /* 0x0000 */ unsigned __int64 ResultLong64Value;
    /* 0x0000 */ unsigned char ResultByteArrayValue[16];
  }; /* size: 0x0010 */
} RESULT_VALUE, *PRESULT_VALUE; /* size: 0x0010 */

typedef struct _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_FRAME_HEADER FrameHeader;
  /* 0x000c */ enum _NDIS_RECEIVE_FILTER_TEST ReceiveFilterTest;
  /* 0x0010 */ union _HEADER_FIELD HeaderField;
  /* 0x0018 */ union _FIELD_VALUE FieldValue;
  /* 0x0028 */ union _RESULT_VALUE ResultValue;
} NDIS_RECEIVE_FILTER_FIELD_PARAMETERS, *PNDIS_RECEIVE_FILTER_FIELD_PARAMETERS; /* size: 0x0038 */

