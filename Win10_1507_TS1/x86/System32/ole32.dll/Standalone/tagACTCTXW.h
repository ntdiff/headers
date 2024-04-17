struct tagACTCTXW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ const wchar_t* lpSource;
  /* 0x000c */ unsigned short wProcessorArchitecture;
  /* 0x000e */ unsigned short wLangId;
  /* 0x0010 */ const wchar_t* lpAssemblyDirectory;
  /* 0x0014 */ const wchar_t* lpResourceName;
  /* 0x0018 */ const wchar_t* lpApplicationName;
  /* 0x001c */ struct HINSTANCE__* hModule;
}; /* size: 0x0020 */

