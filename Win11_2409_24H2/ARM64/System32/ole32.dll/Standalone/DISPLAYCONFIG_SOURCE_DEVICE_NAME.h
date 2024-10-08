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
  DISPLAYCONFIG_DEVICE_INFO_GET_ADVANCED_COLOR_INFO = 9,
  DISPLAYCONFIG_DEVICE_INFO_SET_ADVANCED_COLOR_STATE = 10,
  DISPLAYCONFIG_DEVICE_INFO_GET_SDR_WHITE_LEVEL = 11,
  DISPLAYCONFIG_DEVICE_INFO_GET_MONITOR_SPECIALIZATION = 12,
  DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION = 13,
  DISPLAYCONFIG_DEVICE_INFO_SET_RESERVED1 = 14,
  DISPLAYCONFIG_DEVICE_INFO_GET_ADVANCED_COLOR_INFO_2 = 15,
  DISPLAYCONFIG_DEVICE_INFO_SET_HDR_STATE = 16,
  DISPLAYCONFIG_DEVICE_INFO_SET_WCG_STATE = 17,
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

struct DISPLAYCONFIG_SOURCE_DEVICE_NAME
{
  /* 0x0000 */ struct DISPLAYCONFIG_DEVICE_INFO_HEADER header;
  /* 0x0014 */ wchar_t viewGdiDeviceName[32];
}; /* size: 0x0054 */

