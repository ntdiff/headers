typedef struct _HIVE_LIST_ENTRY
{
  /* 0x0000 */ unsigned short* FileName;
  /* 0x0008 */ unsigned short* BaseName;
  /* 0x0010 */ unsigned short* RegRootName;
  /* 0x0018 */ struct _CMHIVE* CmHive;
  /* 0x0020 */ unsigned long HHiveFlags;
  /* 0x0024 */ unsigned long CmHiveFlags;
  /* 0x0028 */ struct _CMHIVE* CmHive2;
  /* 0x0030 */ unsigned char ThreadFinished;
  /* 0x0031 */ unsigned char ThreadStarted;
  /* 0x0032 */ unsigned char Allocate;
  /* 0x0033 */ unsigned char WinPERequired;
  /* 0x0034 */ long __PADDING__[1];
} HIVE_LIST_ENTRY, *PHIVE_LIST_ENTRY; /* size: 0x0038 */

