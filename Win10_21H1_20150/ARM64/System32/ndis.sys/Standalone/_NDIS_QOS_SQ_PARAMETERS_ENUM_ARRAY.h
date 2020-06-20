typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_QOS_SQ_TYPE
{
  NdisQosSqTypeUndefined = 0,
  NdisQosSqTypeStandard = 1,
  NdisQosSqTypeGFT = 2,
  NdisQosSqTypeMax = 3,
} NDIS_QOS_SQ_TYPE, *PNDIS_QOS_SQ_TYPE;

typedef struct _NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_QOS_SQ_TYPE SqType;
  /* 0x000c */ unsigned long FirstSqId;
  /* 0x0010 */ unsigned long MaxSqsToReturn;
  union
  {
    /* 0x0014 */ unsigned long SqArrayOffset;
    /* 0x0014 */ unsigned long SqParamsArrayOffset;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0018 */ unsigned long SqArrayNumElements;
    /* 0x0018 */ unsigned long SqParamsArrayNumElements;
  }; /* size: 0x0004 */
  union
  {
    /* 0x001c */ unsigned long SqArrayElementSize;
    /* 0x001c */ unsigned long SqParamsArrayElementSize;
  }; /* size: 0x0004 */
} NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY, *PNDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY; /* size: 0x0020 */

