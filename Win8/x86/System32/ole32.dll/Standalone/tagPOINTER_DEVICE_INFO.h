enum tagPOINTER_DEVICE_TYPE
{
  POINTER_DEVICE_TYPE_INTEGRATED_PEN = 1,
  POINTER_DEVICE_TYPE_EXTERNAL_PEN = 2,
  POINTER_DEVICE_TYPE_TOUCH = 3,
  POINTER_DEVICE_TYPE_MAX = -1,
};

struct tagPOINTER_DEVICE_INFO
{
  /* 0x0000 */ unsigned long displayOrientation;
  /* 0x0004 */ void* device;
  /* 0x0008 */ enum tagPOINTER_DEVICE_TYPE pointerDeviceType;
  /* 0x000c */ struct HMONITOR__* monitor;
  /* 0x0010 */ unsigned long startingCursorId;
  /* 0x0014 */ unsigned short maxActiveContacts;
  /* 0x0016 */ wchar_t productString[520];
  /* 0x0426 */ char __PADDING__[2];
}; /* size: 0x0428 */

