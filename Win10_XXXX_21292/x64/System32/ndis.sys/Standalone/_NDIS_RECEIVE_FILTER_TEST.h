typedef enum _NDIS_RECEIVE_FILTER_TEST
{
  NdisReceiveFilterTestUndefined = 0,
  NdisReceiveFilterTestEqual = 1,
  NdisReceiveFilterTestMaskEqual = 2,
  NdisReceiveFilterTestNotEqual = 3,
  NdisReceiveFilterTestMaximum = 4,
} NDIS_RECEIVE_FILTER_TEST, *PNDIS_RECEIVE_FILTER_TEST;

