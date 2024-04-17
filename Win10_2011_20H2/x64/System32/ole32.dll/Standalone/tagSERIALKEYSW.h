struct tagSERIALKEYSW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ wchar_t* lpszActivePort;
  /* 0x0010 */ wchar_t* lpszPort;
  /* 0x0018 */ unsigned int iBaudRate;
  /* 0x001c */ unsigned int iPortState;
  /* 0x0020 */ unsigned int iActive;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

