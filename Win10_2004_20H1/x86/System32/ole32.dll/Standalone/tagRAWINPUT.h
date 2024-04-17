struct tagRAWINPUTHEADER
{
  /* 0x0000 */ unsigned long dwType;
  /* 0x0004 */ unsigned long dwSize;
  /* 0x0008 */ void* hDevice;
  /* 0x000c */ unsigned int wParam;
}; /* size: 0x0010 */

struct tagRAWMOUSE
{
  /* 0x0000 */ unsigned short usFlags;
  union
  {
    /* 0x0004 */ unsigned long ulButtons;
    struct
    {
      /* 0x0004 */ unsigned short usButtonFlags;
      /* 0x0006 */ unsigned short usButtonData;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long ulRawButtons;
  /* 0x000c */ long lLastX;
  /* 0x0010 */ long lLastY;
  /* 0x0014 */ unsigned long ulExtraInformation;
}; /* size: 0x0018 */

struct tagRAWKEYBOARD
{
  /* 0x0000 */ unsigned short MakeCode;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned short Reserved;
  /* 0x0006 */ unsigned short VKey;
  /* 0x0008 */ unsigned int Message;
  /* 0x000c */ unsigned long ExtraInformation;
}; /* size: 0x0010 */

struct tagRAWHID
{
  /* 0x0000 */ unsigned long dwSizeHid;
  /* 0x0004 */ unsigned long dwCount;
  /* 0x0008 */ unsigned char bRawData[1];
  /* 0x0009 */ char __PADDING__[3];
}; /* size: 0x000c */

struct tagRAWINPUT
{
  /* 0x0000 */ struct tagRAWINPUTHEADER header;
  union
  {
    union
    {
      /* 0x0010 */ struct tagRAWMOUSE mouse;
      /* 0x0010 */ struct tagRAWKEYBOARD keyboard;
      /* 0x0010 */ struct tagRAWHID hid;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ data;
}; /* size: 0x0028 */

