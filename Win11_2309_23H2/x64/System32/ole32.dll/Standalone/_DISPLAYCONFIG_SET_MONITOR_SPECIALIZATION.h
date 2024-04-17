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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION
{
  /* 0x0000 */ struct DISPLAYCONFIG_DEVICE_INFO_HEADER header;
  union
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned int isSpecializationEnabled : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned int reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0014 */ unsigned int value;
  }; /* size: 0x0004 */
  /* 0x0018 */ struct _GUID specializationType;
  /* 0x0028 */ struct _GUID specializationSubType;
  /* 0x0038 */ wchar_t specializationApplicationName[128];
} DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION, *PDISPLAYCONFIG_SET_MONITOR_SPECIALIZATION; /* size: 0x0138 */

