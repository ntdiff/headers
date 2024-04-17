enum tagPOINTER_DEVICE_TYPE
{
  POINTER_DEVICE_TYPE_INTEGRATED_PEN = 1,
  POINTER_DEVICE_TYPE_EXTERNAL_PEN = 2,
  POINTER_DEVICE_TYPE_TOUCH = 3,
  POINTER_DEVICE_TYPE_TOUCH_PAD = 4,
  POINTER_DEVICE_TYPE_MAX = -1,
};

struct tagPOINTER_DEVICE_INFO
{
  /* 0x0000 */ unsigned long displayOrientation;
  /* 0x0008 */ void* device;
  /* 0x0010 */ enum tagPOINTER_DEVICE_TYPE pointerDeviceType;
  /* 0x0018 */ struct HMONITOR__* monitor;
  /* 0x0020 */ unsigned long startingCursorId;
  /* 0x0024 */ unsigned short maxActiveContacts;
  /* 0x0026 */ wchar_t productString[520];
  /* 0x0436 */ char __PADDING__[2];
}; /* size: 0x0438 */

