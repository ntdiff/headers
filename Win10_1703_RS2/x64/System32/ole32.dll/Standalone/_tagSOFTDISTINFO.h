typedef struct _tagSOFTDISTINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long dwAdState;
  /* 0x0010 */ wchar_t* szTitle;
  /* 0x0018 */ wchar_t* szAbstract;
  /* 0x0020 */ wchar_t* szHREF;
  /* 0x0028 */ unsigned long dwInstalledVersionMS;
  /* 0x002c */ unsigned long dwInstalledVersionLS;
  /* 0x0030 */ unsigned long dwUpdateVersionMS;
  /* 0x0034 */ unsigned long dwUpdateVersionLS;
  /* 0x0038 */ unsigned long dwAdvertisedVersionMS;
  /* 0x003c */ unsigned long dwAdvertisedVersionLS;
  /* 0x0040 */ unsigned long dwReserved;
  /* 0x0044 */ long __PADDING__[1];
} tagSOFTDISTINFO, *PtagSOFTDISTINFO; /* size: 0x0048 */

