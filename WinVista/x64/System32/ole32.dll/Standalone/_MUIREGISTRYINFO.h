typedef struct _MUIREGISTRYINFO
{
  /* 0x0000 */ unsigned int Owned;
  /* 0x0004 */ unsigned short InstallLanguageFallback[4];
  /* 0x0010 */ struct _MUILANGUAGES* Installed;
  /* 0x0018 */ struct _MUISTRINGPOOL* Strings;
  /* 0x0020 */ struct _MUILANGCFGLIST* MachineConfig;
  /* 0x0028 */ struct _MUILANGCFGLIST* UserConfig;
  /* 0x0030 */ struct _MUILANGLIST* MachinePreferred;
  /* 0x0038 */ struct _MUILANGLIST* UserPreferred;
  /* 0x0040 */ struct _MUILANGLIST* MergedUser;
  /* 0x0048 */ struct _MUILANGLIST* MergedMachine;
  /* 0x0050 */ struct _MUILANGLIST* MergedFallback;
  /* 0x0058 */ unsigned long MUI_Locked;
  /* 0x005c */ unsigned long MUI_SE;
  /* 0x0060 */ unsigned long MUI_NumberAllowed;
  /* 0x0068 */ wchar_t* MUI_AllowedLanguage;
  /* 0x0070 */ wchar_t* MUI_InstalledSKU;
  /* 0x0078 */ unsigned long cbInstalledSKU;
  /* 0x007c */ unsigned long cbAllowedLanguage;
  /* 0x0080 */ wchar_t* MUI_DisallowedLanguage;
  /* 0x0088 */ unsigned long cbDisallowedLanguage;
  /* 0x008c */ long __PADDING__[1];
} MUIREGISTRYINFO, *PMUIREGISTRYINFO; /* size: 0x0090 */

