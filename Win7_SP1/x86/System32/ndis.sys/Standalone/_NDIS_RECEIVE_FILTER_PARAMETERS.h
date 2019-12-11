typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_RECEIVE_FILTER_TYPE
{
  NdisReceiveFilterTypeUndefined = 0,
  NdisReceiveFilterTypeVMQueue = 1,
  NdisReceiveFilterTypeMaximum = 2,
} NDIS_RECEIVE_FILTER_TYPE, *PNDIS_RECEIVE_FILTER_TYPE;

typedef struct _NDIS_RECEIVE_FILTER_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_RECEIVE_FILTER_TYPE FilterType;
  /* 0x000c */ unsigned long QueueId;
  /* 0x0010 */ unsigned long FilterId;
  /* 0x0014 */ unsigned long FieldParametersArrayOffset;
  /* 0x0018 */ unsigned long FieldParametersArrayNumElements;
  /* 0x001c */ unsigned long FieldParametersArrayElementSize;
  /* 0x0020 */ unsigned long RequestedFilterIdBitCount;
} NDIS_RECEIVE_FILTER_PARAMETERS, *PNDIS_RECEIVE_FILTER_PARAMETERS; /* size: 0x0024 */

