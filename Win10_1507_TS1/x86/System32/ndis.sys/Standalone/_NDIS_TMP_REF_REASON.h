typedef enum _NDIS_TMP_REF_REASON
{
  NdisAoAcTempRefNone = 0,
  NdisAoAcTempRefInit = 1,
  NdisAoAcTempRefPmInit = 2,
  NdisAoAcTempRefWake = 3,
  NdisAoAcTempRefLastDeref = 4,
  NdisAoAcTempRefClearStop = 5,
} NDIS_TMP_REF_REASON, *PNDIS_TMP_REF_REASON;

