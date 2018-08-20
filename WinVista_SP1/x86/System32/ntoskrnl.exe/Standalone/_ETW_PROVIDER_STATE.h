typedef enum _ETW_PROVIDER_STATE
{
  EtwProviderStateFree = 0,
  EtwProviderStateTransition = 1,
  EtwProviderStateActive = 2,
  EtwProviderStateMax = 3,
} ETW_PROVIDER_STATE, *PETW_PROVIDER_STATE;

