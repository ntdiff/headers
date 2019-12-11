typedef enum _NDIS_PORT_AUTHORIZATION_STATE
{
  NdisPortAuthorizationUnknown = 0,
  NdisPortAuthorized = 1,
  NdisPortUnauthorized = 2,
  NdisPortReauthorizing = 3,
} NDIS_PORT_AUTHORIZATION_STATE, *PNDIS_PORT_AUTHORIZATION_STATE;

