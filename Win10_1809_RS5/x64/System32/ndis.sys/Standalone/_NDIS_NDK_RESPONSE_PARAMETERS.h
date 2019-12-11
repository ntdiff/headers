typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_NDK_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long MaxQpCount;
  /* 0x000c */ unsigned long MaxCqCount;
  /* 0x0010 */ unsigned long MaxMrCount;
  /* 0x0014 */ unsigned long MaxPdCount;
  /* 0x0018 */ unsigned long MaxInboundReadLimit;
  /* 0x001c */ unsigned long MaxOutboundReadLimit;
  /* 0x0020 */ unsigned long MaxMwCount;
  /* 0x0024 */ unsigned long MaxSrqCount;
  /* 0x0028 */ unsigned __int64 MissingCounterMask;
  /* 0x0030 */ struct _NDK_ADAPTER_INFO* NdkInfo;
} NDIS_NDK_CAPABILITIES, *PNDIS_NDK_CAPABILITIES; /* size: 0x0038 */

typedef struct _NDIS_NDK_RESPONSE_PARAMETERS
{
  /* 0x0000 */ unsigned char CapabilitiesAvailable;
  /* 0x0008 */ struct _NDIS_NDK_CAPABILITIES ReceivedCapabilities;
} NDIS_NDK_RESPONSE_PARAMETERS, *PNDIS_NDK_RESPONSE_PARAMETERS; /* size: 0x0040 */

