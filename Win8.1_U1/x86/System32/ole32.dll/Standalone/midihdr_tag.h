struct midihdr_tag
{
  /* 0x0000 */ char* lpData;
  /* 0x0004 */ unsigned long dwBufferLength;
  /* 0x0008 */ unsigned long dwBytesRecorded;
  /* 0x000c */ unsigned long dwUser;
  /* 0x0010 */ unsigned long dwFlags;
  /* 0x0014 */ struct midihdr_tag* lpNext;
  /* 0x0018 */ unsigned long reserved;
  /* 0x001c */ unsigned long dwOffset;
  /* 0x0020 */ unsigned long dwReserved[8];
}; /* size: 0x0040 */

