typedef struct _SI_COPYFILE
{
  /* 0x0000 */ unsigned long SourceFileNameLength;
  /* 0x0004 */ unsigned long DestinationFileNameLength;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ wchar_t FileNameBuffer[1];
  /* 0x000e */ char __PADDING__[2];
} SI_COPYFILE, *PSI_COPYFILE; /* size: 0x0010 */

