typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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

typedef struct _PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ enum _PNP_VETO_TYPE VetoType;
  /* 0x0018 */ wchar_t* VetoName;
  /* 0x0020 */ unsigned long VetoNameLength;
  /* 0x0024 */ long __PADDING__[1];
} PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA, *PPLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA; /* size: 0x0028 */

