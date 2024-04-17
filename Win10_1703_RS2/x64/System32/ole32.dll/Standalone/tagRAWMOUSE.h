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

