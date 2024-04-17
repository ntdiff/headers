struct tagTOUCHINPUT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
  /* 0x0008 */ void* hSource;
  /* 0x0010 */ unsigned long dwID;
  /* 0x0014 */ unsigned long dwFlags;
  /* 0x0018 */ unsigned long dwMask;
  /* 0x001c */ unsigned long dwTime;
  /* 0x0020 */ unsigned __int64 dwExtraInfo;
  /* 0x0028 */ unsigned long cxContact;
  /* 0x002c */ unsigned long cyContact;
}; /* size: 0x0030 */

