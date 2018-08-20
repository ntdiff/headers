typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _PLUGPLAY_EVENT_CATEGORY
{
  HardwareProfileChangeEvent = 0,
  TargetDeviceChangeEvent = 1,
  DeviceClassChangeEvent = 2,
  CustomDeviceEvent = 3,
  DeviceInstallEvent = 4,
  DeviceArrivalEvent = 5,
  PowerEvent = 6,
  VetoEvent = 7,
  BlockedDriverEvent = 8,
  InvalidIDEvent = 9,
  PowerSettingChange = 10,
  MaxPlugEventCategory = 11,
} PLUGPLAY_EVENT_CATEGORY, *PPLUGPLAY_EVENT_CATEGORY;

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
} PNP_VETO_TYPE, *PPNP_VETO_TYPE;

typedef struct _PLUGPLAY_EVENT_BLOCK
{
  /* 0x0000 */ struct _GUID EventGuid;
  /* 0x0010 */ enum _PLUGPLAY_EVENT_CATEGORY EventCategory;
  /* 0x0014 */ unsigned long* Result;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned long TotalSize;
  /* 0x0020 */ void* DeviceObject;
  union // _TAG_UNNAMED_112
  {
    union
    {
      struct // _TAG_UNNAMED_113
      {
        /* 0x0024 */ struct _GUID ClassGuid;
        /* 0x0034 */ wchar_t SymbolicLinkName[1];
        /* 0x0036 */ char __PADDING__[2];
      } /* size: 0x0014 */ DeviceClass;
      struct // _TAG_UNNAMED_114
      {
        /* 0x0024 */ wchar_t DeviceIds[1];
      } /* size: 0x0002 */ TargetDevice;
      struct // _TAG_UNNAMED_115
      {
        /* 0x0024 */ wchar_t DeviceId[1];
      } /* size: 0x0002 */ InstallDevice;
      struct // _TAG_UNNAMED_116
      {
        /* 0x0024 */ void* NotificationStructure;
        /* 0x0028 */ wchar_t DeviceIds[1];
        /* 0x002a */ char __PADDING__[2];
      } /* size: 0x0008 */ CustomNotification;
      struct // _TAG_UNNAMED_117
      {
        /* 0x0024 */ void* Notification;
      } /* size: 0x0004 */ ProfileNotification;
      struct // _TAG_UNNAMED_118
      {
        /* 0x0024 */ unsigned long NotificationCode;
        /* 0x0028 */ unsigned long NotificationData;
      } /* size: 0x0008 */ PowerNotification;
      struct // _TAG_UNNAMED_119
      {
        /* 0x0024 */ enum _PNP_VETO_TYPE VetoType;
        /* 0x0028 */ wchar_t DeviceIdVetoNameBuffer[1];
        /* 0x002a */ char __PADDING__[2];
      } /* size: 0x0008 */ VetoNotification;
      struct // _TAG_UNNAMED_120
      {
        /* 0x0024 */ struct _GUID BlockedDriverGuid;
      } /* size: 0x0010 */ BlockedDriverNotification;
      struct // _TAG_UNNAMED_121
      {
        /* 0x0024 */ wchar_t ParentId[1];
      } /* size: 0x0002 */ InvalidIDNotification;
      struct // _TAG_UNNAMED_122
      {
        /* 0x0024 */ struct _GUID PowerSettingGuid;
        /* 0x0034 */ unsigned char PowerSettingChanged;
        /* 0x0038 */ unsigned long DataLength;
        /* 0x003c */ unsigned char Data[1];
        /* 0x003d */ char __PADDING__[3];
      } /* size: 0x001c */ PowerSettingNotification;
    }; /* size: 0x001c */
  } /* size: 0x001c */ u;
} PLUGPLAY_EVENT_BLOCK, *PPLUGPLAY_EVENT_BLOCK; /* size: 0x0040 */

