typedef struct _MUIREGISTRYINFO
{
  /* 0x0000 */ unsigned int Owned;
  /* 0x0004 */ unsigned short InstallLanguageFallback[4];
  /* 0x000c */ unsigned long Generation;
  /* 0x0010 */ unsigned long ProcessGeneration;
  /* 0x0014 */ struct _MUILANGUAGES* Installed;
  /* 0x0018 */ struct _MUISTRINGPOOL* Strings;
  /* 0x001c */ struct _MUILANGCFGLIST* MachineConfig;
  /* 0x0020 */ struct _MUILANGCFGLIST* UserConfig;
  /* 0x0024 */ struct _MUILANGLIST* MachinePreferred;
  /* 0x0028 */ struct _MUILANGLIST* UserPreferred;
  /* 0x002c */ struct _MUILANGLIST* ProcessPreferred;
  /* 0x0030 */ struct _MUILANGLIST* MergedUser;
  /* 0x0034 */ struct _MUILANGLIST* MergedMachine;
  /* 0x0038 */ struct _MUILANGLIST* MergedFallback;
  /* 0x003c */ struct _MUIREGISTRYINFO* PrevRegInfo;
  /* 0x0040 */ unsigned long MUI_Locked;
  /* 0x0044 */ unsigned long MUI_SE;
  /* 0x0048 */ unsigned long MUI_NumberAllowed;
  /* 0x004c */ wchar_t* MUI_AllowedLanguage;
  /* 0x0050 */ wchar_t* MUI_InstalledSKU;
  /* 0x0054 */ unsigned long cbInstalledSKU;
  /* 0x0058 */ unsigned long cbAllowedLanguage;
  /* 0x005c */ wchar_t* MUI_DisallowedLanguage;
  /* 0x0060 */ unsigned long cbDisallowedLanguage;
} MUIREGISTRYINFO, *PMUIREGISTRYINFO; /* size: 0x0064 */

