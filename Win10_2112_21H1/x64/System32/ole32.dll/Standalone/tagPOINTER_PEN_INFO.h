struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

enum tagPOINTER_BUTTON_CHANGE_TYPE
{
  POINTER_CHANGE_NONE = 0,
  POINTER_CHANGE_FIRSTBUTTON_DOWN = 1,
  POINTER_CHANGE_FIRSTBUTTON_UP = 2,
  POINTER_CHANGE_SECONDBUTTON_DOWN = 3,
  POINTER_CHANGE_SECONDBUTTON_UP = 4,
  POINTER_CHANGE_THIRDBUTTON_DOWN = 5,
  POINTER_CHANGE_THIRDBUTTON_UP = 6,
  POINTER_CHANGE_FOURTHBUTTON_DOWN = 7,
  POINTER_CHANGE_FOURTHBUTTON_UP = 8,
  POINTER_CHANGE_FIFTHBUTTON_DOWN = 9,
  POINTER_CHANGE_FIFTHBUTTON_UP = 10,
};

struct tagPOINTER_INFO
{
  /* 0x0000 */ unsigned long pointerType;
  /* 0x0004 */ unsigned int pointerId;
  /* 0x0008 */ unsigned int frameId;
  /* 0x000c */ unsigned int pointerFlags;
  /* 0x0010 */ void* sourceDevice;
  /* 0x0018 */ struct HWND__* hwndTarget;
  /* 0x0020 */ struct tagPOINT ptPixelLocation;
  /* 0x0028 */ struct tagPOINT ptHimetricLocation;
  /* 0x0030 */ struct tagPOINT ptPixelLocationRaw;
  /* 0x0038 */ struct tagPOINT ptHimetricLocationRaw;
  /* 0x0040 */ unsigned long dwTime;
  /* 0x0044 */ unsigned int historyCount;
  /* 0x0048 */ int InputData;
  /* 0x004c */ unsigned long dwKeyStates;
  /* 0x0050 */ unsigned __int64 PerformanceCount;
  /* 0x0058 */ enum tagPOINTER_BUTTON_CHANGE_TYPE ButtonChangeType;
  /* 0x005c */ long __PADDING__[1];
}; /* size: 0x0060 */

struct tagPOINTER_PEN_INFO
{
  /* 0x0000 */ struct tagPOINTER_INFO pointerInfo;
  /* 0x0060 */ unsigned int penFlags;
  /* 0x0064 */ unsigned int penMask;
  /* 0x0068 */ unsigned int pressure;
  /* 0x006c */ unsigned int rotation;
  /* 0x0070 */ int tiltX;
  /* 0x0074 */ int tiltY;
}; /* size: 0x0078 */

