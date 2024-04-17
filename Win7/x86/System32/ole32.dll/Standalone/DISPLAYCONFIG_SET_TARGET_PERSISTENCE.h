enum DISPLAYCONFIG_DEVICE_INFO_TYPE
{
  DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME = 1,
  DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME = 2,
  DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_PREFERRED_MODE = 3,
  DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME = 4,
  DISPLAYCONFIG_DEVICE_INFO_SET_TARGET_PERSISTENCE = 5,
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

struct DISPLAYCONFIG_SET_TARGET_PERSISTENCE
{
  /* 0x0000 */ struct DISPLAYCONFIG_DEVICE_INFO_HEADER header;
  union
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned int bootPersistenceOn : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned int reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0014 */ unsigned int value;
  }; /* size: 0x0004 */
}; /* size: 0x0018 */

