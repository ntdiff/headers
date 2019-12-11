typedef enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION
{
  NdisGftHeaderGroupTranspositionActionUndefined = 0,
  NdisGftHeaderGroupTranspositionActionModify = 1,
  NdisGftHeaderGroupTranspositionActionIgnore = 2,
  NdisGftHeaderGroupTranspositionActionPush = 3,
  NdisGftHeaderGroupTranspositionActionPop = 4,
  NdisGftHeaderGroupTranspositionActionMax = 5,
} NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION, *PNDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION;

