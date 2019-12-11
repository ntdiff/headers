enum OFFLOAD_STATE_TYPE
{
  NeighborOffloadConstState = 1,
  NeighborOffloadCachedState = 2,
  NeighborOffloadDelegatedState = 3,
  NeighborOffloadState = 4,
  Ip4OffloadConstState = 5,
  Ip4OffloadCachedState = 6,
  Ip4OffloadDelegatedState = 7,
  Ip4OffloadState = 8,
  Ip6OffloadConstState = 9,
  Ip6OffloadCachedState = 10,
  Ip6OffloadDelegatedState = 11,
  Ip6OffloadState = 12,
  TcpOffloadConstState = 13,
  TcpOffloadCachedState = 14,
  TcpOffloadDelegatedState = 15,
  TcpOffloadResourceState = 16,
  TcpOffloadState = 17,
  FilterReservedOffloadState = 254,
  MaximumOffloadState = 255,
};

