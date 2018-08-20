typedef struct _HIVE_LIST_ENTRY
{
  /* 0x0000 */ unsigned short* FileName;
  /* 0x0004 */ unsigned short* BaseName;
  /* 0x0008 */ unsigned short* RegRootName;
  /* 0x000c */ struct _CMHIVE* CmHive;
  /* 0x0010 */ unsigned long HHiveFlags;
  /* 0x0014 */ unsigned long CmHiveFlags;
  /* 0x0018 */ struct _CMHIVE* CmHive2;
  /* 0x001c */ unsigned char ThreadFinished;
  /* 0x001d */ unsigned char ThreadStarted;
  /* 0x001e */ unsigned char Allocate;
  /* 0x001f */ unsigned char WinPERequired;
} HIVE_LIST_ENTRY, *PHIVE_LIST_ENTRY; /* size: 0x0020 */

