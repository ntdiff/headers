typedef enum _NDIS_PARAMETER_TYPE
{
  NdisParameterInteger = 0,
  NdisParameterHexInteger = 1,
  NdisParameterString = 2,
  NdisParameterMultiString = 3,
  NdisParameterBinary = 4,
} NDIS_PARAMETER_TYPE, *PNDIS_PARAMETER_TYPE;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

struct BINARY_DATA
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0008 */ void* Buffer;
}; /* size: 0x0010 */

typedef struct _NDIS_CONFIGURATION_PARAMETER
{
  /* 0x0000 */ enum _NDIS_PARAMETER_TYPE ParameterType;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long IntegerData;
      /* 0x0008 */ struct _UNICODE_STRING StringData;
      /* 0x0008 */ struct BINARY_DATA BinaryData;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ ParameterData;
} NDIS_CONFIGURATION_PARAMETER, *PNDIS_CONFIGURATION_PARAMETER; /* size: 0x0018 */

