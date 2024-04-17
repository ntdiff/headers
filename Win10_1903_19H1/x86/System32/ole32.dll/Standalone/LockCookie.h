struct LockCookie
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ unsigned long dwWriterSeqNum;
  /* 0x0008 */ unsigned short wReaderLevel;
  /* 0x000a */ unsigned short wWriterLevel;
  /* 0x000c */ unsigned long dwThreadID;
}; /* size: 0x0010 */

