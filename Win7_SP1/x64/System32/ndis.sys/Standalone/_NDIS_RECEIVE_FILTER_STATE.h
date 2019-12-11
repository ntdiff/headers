typedef enum _NDIS_RECEIVE_FILTER_STATE
{
  NdisReceiveFilterStateUndefined = 0,
  NdisReceiveFilterStateAddedToList = 1,
  NdisReceiveFilterStateSet = 2,
  NdisReceiveFilterStateCleared = 3,
  NdisReceiveFilterStateMaximum = 4,
} NDIS_RECEIVE_FILTER_STATE, *PNDIS_RECEIVE_FILTER_STATE;

