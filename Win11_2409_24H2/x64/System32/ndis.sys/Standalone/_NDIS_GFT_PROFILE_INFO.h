typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_GFT_PROFILE_TYPE
{
  NdisGftProfileTypeUndefined = 0,
  NdisGftProfileTypeExactMatch = 1,
  NdisGftProfileTypeHeaderTransposition = 2,
  NdisGftProfileTypeWildcardMatch = 3,
  NdisGftProfileTypeMax = 4,
} NDIS_GFT_PROFILE_TYPE, *PNDIS_GFT_PROFILE_TYPE;

typedef enum _NDIS_GFP_TABLE_TYPE
{
  NdisGfpTableTypeUndefined = 0,
  NdisGfpTableTypeWildcardIngress = 1,
  NdisGfpTableTypeWildcardEgress = 2,
  NdisGfpTableTypeExactMatchIngress = 3,
  NdisGfpTableTypeExactMatchEgress = 4,
  NdisGfpTableTypePacketDirect = 5,
  NdisGfpTableTypeMax = 6,
} NDIS_GFP_TABLE_TYPE, *PNDIS_GFP_TABLE_TYPE;

typedef struct _NDIS_GFT_PROFILE_INFO
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_GFT_PROFILE_TYPE ProfileType;
  /* 0x000c */ enum _NDIS_GFP_TABLE_TYPE TableType;
  /* 0x0010 */ unsigned long ProfileId;
  /* 0x0014 */ unsigned long NumSupportedFlowEntries;
  /* 0x0018 */ unsigned long NumCurrentFlowEntries;
  /* 0x001c */ unsigned long HeaderGroupArrayOffset;
  /* 0x0020 */ unsigned long HeaderGroupArrayNumElements;
  /* 0x0024 */ unsigned long HeaderGroupArrayElementSize;
} NDIS_GFT_PROFILE_INFO, *PNDIS_GFT_PROFILE_INFO; /* size: 0x0028 */

