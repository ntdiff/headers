struct tagRID_DEVICE_INFO_MOUSE
{
  /* 0x0000 */ unsigned long dwId;
  /* 0x0004 */ unsigned long dwNumberOfButtons;
  /* 0x0008 */ unsigned long dwSampleRate;
  /* 0x000c */ int fHasHorizontalWheel;
}; /* size: 0x0010 */

struct tagRID_DEVICE_INFO_KEYBOARD
{
  /* 0x0000 */ unsigned long dwType;
  /* 0x0004 */ unsigned long dwSubType;
  /* 0x0008 */ unsigned long dwKeyboardMode;
  /* 0x000c */ unsigned long dwNumberOfFunctionKeys;
  /* 0x0010 */ unsigned long dwNumberOfIndicators;
  /* 0x0014 */ unsigned long dwNumberOfKeysTotal;
}; /* size: 0x0018 */

struct tagRID_DEVICE_INFO_HID
{
  /* 0x0000 */ unsigned long dwVendorId;
  /* 0x0004 */ unsigned long dwProductId;
  /* 0x0008 */ unsigned long dwVersionNumber;
  /* 0x000c */ unsigned short usUsagePage;
  /* 0x000e */ unsigned short usUsage;
}; /* size: 0x0010 */

struct tagRID_DEVICE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwType;
  union
  {
    /* 0x0008 */ struct tagRID_DEVICE_INFO_MOUSE mouse;
    /* 0x0008 */ struct tagRID_DEVICE_INFO_KEYBOARD keyboard;
    struct
    {
      /* 0x0008 */ struct tagRID_DEVICE_INFO_HID hid;
      /* 0x0018 */ long __PADDING__[2];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0020 */

