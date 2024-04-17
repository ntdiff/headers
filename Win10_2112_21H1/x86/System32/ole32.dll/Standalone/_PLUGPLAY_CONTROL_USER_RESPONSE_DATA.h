typedef enum _PNP_VETO_TYPE
{
  PNP_VetoTypeUnknown = 0,
  PNP_VetoLegacyDevice = 1,
  PNP_VetoPendingClose = 2,
  PNP_VetoWindowsApp = 3,
  PNP_VetoWindowsService = 4,
  PNP_VetoOutstandingOpen = 5,
  PNP_VetoDevice = 6,
  PNP_VetoDriver = 7,
  PNP_VetoIllegalDeviceRequest = 8,
  PNP_VetoInsufficientPower = 9,
  PNP_VetoNonDisableable = 10,
  PNP_VetoLegacyDriver = 11,
  PNP_VetoInsufficientRights = 12,
  PNP_VetoAlreadyRemoved = 13,
} PNP_VETO_TYPE, *PPNP_VETO_TYPE;

typedef struct _PLUGPLAY_CONTROL_USER_RESPONSE_DATA
{
  /* 0x0000 */ unsigned long Response;
  /* 0x0004 */ enum _PNP_VETO_TYPE VetoType;
  /* 0x0008 */ wchar_t* VetoName;
  /* 0x000c */ unsigned long VetoNameLength;
} PLUGPLAY_CONTROL_USER_RESPONSE_DATA, *PPLUGPLAY_CONTROL_USER_RESPONSE_DATA; /* size: 0x0010 */

