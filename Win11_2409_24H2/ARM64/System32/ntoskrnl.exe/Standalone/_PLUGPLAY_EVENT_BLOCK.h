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
  VetoEvent = 6,
  BlockedDriverEvent = 7,
  InvalidIDEvent = 8,
  DevicePropertyChangeEvent = 9,
  DeviceInstanceRemovalEvent = 10,
  DeviceInstanceStartedEvent = 11,
  MaxPlugEventCategory = 12,
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
  PNP_VetoAlreadyRemoved = 13,
} PNP_VETO_TYPE, *PPNP_VETO_TYPE;

typedef struct _PLUGPLAY_EVENT_BLOCK
{
  /* 0x0000 */ struct _GUID EventGuid;
  /* 0x0010 */ enum _PLUGPLAY_EVENT_CATEGORY EventCategory;
  /* 0x0018 */ unsigned long* Result;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long TotalSize;
  /* 0x0028 */ void* DeviceObject;
  union
  {
    union
    {
      struct
      {
        /* 0x0030 */ struct _GUID ClassGuid;
        /* 0x0040 */ wchar_t SymbolicLinkName[1];
        /* 0x0042 */ char __PADDING__[2];
      } /* size: 0x0014 */ DeviceClass;
      struct
      {
        /* 0x0030 */ wchar_t DeviceId[1];
      } /* size: 0x0002 */ TargetDevice;
      struct
      {
        /* 0x0030 */ wchar_t DeviceId[1];
      } /* size: 0x0002 */ InstallDevice;
      struct
      {
        /* 0x0030 */ void* NotificationStructure;
        /* 0x0038 */ wchar_t DeviceId[1];
        /* 0x003a */ char __PADDING__[6];
      } /* size: 0x0010 */ CustomNotification;
      struct
      {
        /* 0x0030 */ void* Notification;
      } /* size: 0x0008 */ ProfileNotification;
      struct
      {
        /* 0x0030 */ unsigned long NotificationCode;
        /* 0x0034 */ unsigned long NotificationData;
      } /* size: 0x0008 */ PowerNotification;
      struct
      {
        /* 0x0030 */ enum _PNP_VETO_TYPE VetoType;
        /* 0x0034 */ wchar_t DeviceIdVetoNameBuffer[1];
        /* 0x0036 */ char __PADDING__[2];
      } /* size: 0x0008 */ VetoNotification;
      struct
      {
        /* 0x0030 */ struct _GUID BlockedDriverGuid;
      } /* size: 0x0010 */ BlockedDriverNotification;
      struct
      {
        /* 0x0030 */ wchar_t ParentId[1];
      } /* size: 0x0002 */ InvalidIDNotification;
      struct
      {
        /* 0x0030 */ struct _GUID PowerSettingGuid;
        /* 0x0040 */ unsigned long Flags;
        /* 0x0044 */ unsigned long SessionId;
        /* 0x0048 */ unsigned long DataLength;
        /* 0x004c */ unsigned char Data[1];
        /* 0x004d */ char __PADDING__[3];
      } /* size: 0x0020 */ PowerSettingNotification;
      struct
      {
        /* 0x0030 */ wchar_t DeviceId[1];
      } /* size: 0x0002 */ PropertyChangeNotification;
      struct
      {
        /* 0x0030 */ wchar_t DeviceId[1];
      } /* size: 0x0002 */ DeviceInstanceNotification;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ u;
} PLUGPLAY_EVENT_BLOCK, *PPLUGPLAY_EVENT_BLOCK; /* size: 0x0050 */

