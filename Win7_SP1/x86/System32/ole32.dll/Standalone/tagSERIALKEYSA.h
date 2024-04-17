struct tagSERIALKEYSA
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ char* lpszActivePort;
  /* 0x000c */ char* lpszPort;
  /* 0x0010 */ unsigned int iBaudRate;
  /* 0x0014 */ unsigned int iPortState;
  /* 0x0018 */ unsigned int iActive;
}; /* size: 0x001c */

