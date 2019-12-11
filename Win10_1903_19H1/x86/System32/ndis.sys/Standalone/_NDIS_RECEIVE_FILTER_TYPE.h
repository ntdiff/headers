typedef enum _NDIS_RECEIVE_FILTER_TYPE
{
  NdisReceiveFilterTypeUndefined = 0,
  NdisReceiveFilterTypeVMQueue = 1,
  NdisReceiveFilterTypePacketCoalescing = 2,
  NdisReceiveFilterTypeMaximum = 3,
} NDIS_RECEIVE_FILTER_TYPE, *PNDIS_RECEIVE_FILTER_TYPE;

