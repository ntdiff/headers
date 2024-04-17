typedef struct _MUILANGLIST
{
  /* 0x0000 */ unsigned int TotalSize;
  /* 0x0004 */ unsigned short NumLanguages;
  /* 0x0006 */ unsigned short MaxNumLanguages;
  /* 0x0008 */ unsigned char bUseUseMachineConfigList;
  /* 0x000c */ struct _MUIREGISTRYINFO* RegInfo;
  /* 0x0010 */ struct _MUILANGLISTNODE* Languages;
  /* 0x0018 */ unsigned __int64 ullMask;
  /* 0x0020 */ unsigned int uConsoleFlag;
  /* 0x0024 */ wchar_t Checksum[10];
} MUILANGLIST, *PMUILANGLIST; /* size: 0x0038 */

