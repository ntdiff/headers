typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_PORT_CONTROL_STATE
{
  NdisPortControlStateUnknown = 0,
  NdisPortControlStateControlled = 1,
  NdisPortControlStateUncontrolled = 2,
} NDIS_PORT_CONTROL_STATE, *PNDIS_PORT_CONTROL_STATE;

typedef enum _NDIS_PORT_AUTHORIZATION_STATE
{
  NdisPortAuthorizationUnknown = 0,
  NdisPortAuthorized = 1,
  NdisPortUnauthorized = 2,
  NdisPortReauthorizing = 3,
} NDIS_PORT_AUTHORIZATION_STATE, *PNDIS_PORT_AUTHORIZATION_STATE;

typedef struct _NDIS_PORT_AUTHENTICATION_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _NDIS_PORT_CONTROL_STATE SendControlState;
  /* 0x0008 */ enum _NDIS_PORT_CONTROL_STATE RcvControlState;
  /* 0x000c */ enum _NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;
  /* 0x0010 */ enum _NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;
} NDIS_PORT_AUTHENTICATION_PARAMETERS, *PNDIS_PORT_AUTHENTICATION_PARAMETERS; /* size: 0x0014 */

