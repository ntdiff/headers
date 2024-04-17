struct wavehdr_tag
{
  /* 0x0000 */ char* lpData;
  /* 0x0004 */ unsigned long dwBufferLength;
  /* 0x0008 */ unsigned long dwBytesRecorded;
  /* 0x000c */ unsigned long dwUser;
  /* 0x0010 */ unsigned long dwFlags;
  /* 0x0014 */ unsigned long dwLoops;
  /* 0x0018 */ struct wavehdr_tag* lpNext;
  /* 0x001c */ unsigned long reserved;
}; /* size: 0x0020 */

