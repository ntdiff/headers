struct wavehdr_tag
{
  /* 0x0000 */ char* lpData;
  /* 0x0008 */ unsigned long dwBufferLength;
  /* 0x000c */ unsigned long dwBytesRecorded;
  /* 0x0010 */ unsigned __int64 dwUser;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ unsigned long dwLoops;
  /* 0x0020 */ struct wavehdr_tag* lpNext;
  /* 0x0028 */ unsigned __int64 reserved;
}; /* size: 0x0030 */

