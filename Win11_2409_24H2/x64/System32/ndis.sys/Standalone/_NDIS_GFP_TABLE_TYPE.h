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

