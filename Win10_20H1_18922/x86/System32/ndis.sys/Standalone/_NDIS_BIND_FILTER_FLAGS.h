typedef enum _NDIS_BIND_FILTER_FLAGS
{
  NdisBindFilter_Optional = 1,
  NdisBindFilter_Monitoring = 2,
  NdisBindFilter_UnbindOnAttach = 4,
  NdisBindFilter_UnbindOnDetach = 8,
  NdisBindFilter_NoStartAtBootHint = 16,
} NDIS_BIND_FILTER_FLAGS, *PNDIS_BIND_FILTER_FLAGS;

