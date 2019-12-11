typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_GFP_WILDCARD_MATCH_PROFILE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_GFP_TABLE_TYPE TableType;
  /* 0x000c */ unsigned long ProfileId;
  /* 0x0010 */ unsigned long NumSupportedEntries;
  /* 0x0014 */ unsigned long HeaderGroupWildcardMatchProfileArrayOffset;
  /* 0x0018 */ unsigned long HeaderGroupWildcardMatchProfileArrayNumElements;
  /* 0x001c */ unsigned long HeaderGroupWildcardMatchProfileArrayElementSize;
} NDIS_GFP_WILDCARD_MATCH_PROFILE, *PNDIS_GFP_WILDCARD_MATCH_PROFILE; /* size: 0x0020 */

