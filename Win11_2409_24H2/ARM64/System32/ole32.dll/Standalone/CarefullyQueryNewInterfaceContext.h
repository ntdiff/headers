enum CarefullyQueryNewInterfaceContext::ClaimsToImplementEverythingState
{
  ClaimsToImplementEverythingUnknown = 0,
  DoesClaimToImplementEverything = 1,
  DoesNotClaimToImplementEverything = 2,
};

class CarefullyQueryNewInterfaceContext
{
  /* 0x0000 */ struct IUnknown* const _punk;
  /* 0x0008 */ enum CarefullyQueryNewInterfaceContext::ClaimsToImplementEverythingState _state;
}; /* size: 0x0010 */

