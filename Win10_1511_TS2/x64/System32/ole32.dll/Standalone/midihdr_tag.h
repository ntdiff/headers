struct midihdr_tag
{
  /* 0x0000 */ char* lpData;
  /* 0x0008 */ unsigned long dwBufferLength;
  /* 0x000c */ unsigned long dwBytesRecorded;
  /* 0x0010 */ unsigned __int64 dwUser;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ struct midihdr_tag* lpNext;
  /* 0x0024 */ unsigned __int64 reserved;
  /* 0x002c */ unsigned long dwOffset;
  /* 0x0030 */ unsigned __int64 dwReserved[8];
}; /* size: 0x0070 */

