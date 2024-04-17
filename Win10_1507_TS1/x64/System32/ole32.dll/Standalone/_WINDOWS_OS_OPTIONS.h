typedef struct _WINDOWS_OS_OPTIONS
{
  /* 0x0000 */ unsigned char Signature[8];
  /* 0x0008 */ unsigned long Version;
  /* 0x000c */ unsigned long Length;
  /* 0x0010 */ unsigned long OsLoadPathOffset;
  /* 0x0014 */ wchar_t OsLoadOptions[1];
  /* 0x0016 */ char __PADDING__[2];
} WINDOWS_OS_OPTIONS, *PWINDOWS_OS_OPTIONS; /* size: 0x0018 */

