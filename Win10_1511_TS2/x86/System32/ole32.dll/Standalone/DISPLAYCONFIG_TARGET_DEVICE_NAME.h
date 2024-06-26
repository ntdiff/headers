enum DISPLAYCONFIG_DEVICE_INFO_TYPE
{
  DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME = 1,
  DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME = 2,
  DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_PREFERRED_MODE = 3,
  DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME = 4,
  DISPLAYCONFIG_DEVICE_INFO_SET_TARGET_PERSISTENCE = 5,
  DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_BASE_TYPE = 6,
  DISPLAYCONFIG_DEVICE_INFO_GET_SUPPORT_VIRTUAL_RESOLUTION = 7,
  DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION = 8,
  DISPLAYCONFIG_DEVICE_INFO_FORCE_UINT32 = -1,
};

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

struct DISPLAYCONFIG_DEVICE_INFO_HEADER
{
  /* 0x0000 */ enum DISPLAYCONFIG_DEVICE_INFO_TYPE type;
  /* 0x0004 */ unsigned int size;
  /* 0x0008 */ struct _LUID adapterId;
  /* 0x0010 */ unsigned int id;
}; /* size: 0x0014 */

struct DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned int friendlyNameFromEdid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned int friendlyNameForced : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned int edidIdsValid : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned int reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned int value;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

enum DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY
{
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_OTHER = -1,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_HD15 = 0,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SVIDEO = 1,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_COMPOSITE_VIDEO = 2,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_COMPONENT_VIDEO = 3,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DVI = 4,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_HDMI = 5,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_LVDS = 6,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_D_JPN = 8,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SDI = 9,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EXTERNAL = 10,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EMBEDDED = 11,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EXTERNAL = 12,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EMBEDDED = 13,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SDTVDONGLE = 14,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_MIRACAST = 15,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_INTERNAL = -2147483648,
  DISPLAYCONFIG_OUTPUT_TECHNOLOGY_FORCE_UINT32 = -1,
};

struct DISPLAYCONFIG_TARGET_DEVICE_NAME
{
  /* 0x0000 */ struct DISPLAYCONFIG_DEVICE_INFO_HEADER header;
  /* 0x0014 */ struct DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS flags;
  /* 0x0018 */ enum DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology;
  /* 0x001c */ unsigned short edidManufactureId;
  /* 0x001e */ unsigned short edidProductCodeId;
  /* 0x0020 */ unsigned int connectorInstance;
  /* 0x0024 */ wchar_t monitorFriendlyDeviceName[64];
  /* 0x00a4 */ wchar_t monitorDevicePath[128];
}; /* size: 0x01a4 */

