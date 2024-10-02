typedef enum _NDIS_RSS_PROFILE
{
  NdisRssProfileClosest = 1,
  NdisRssProfileClosestStatic = 2,
  NdisRssProfileNuma = 3,
  NdisRssProfileNumaStatic = 4,
  NdisRssProfileConservative = 5,
  NdisRssProfileBalanced = 6,
  NdisRssProfileMaximum = 7,
} NDIS_RSS_PROFILE, *PNDIS_RSS_PROFILE;

