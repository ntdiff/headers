struct tagVS_FIXEDFILEINFO
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ unsigned long dwStrucVersion;
  /* 0x0008 */ unsigned long dwFileVersionMS;
  /* 0x000c */ unsigned long dwFileVersionLS;
  /* 0x0010 */ unsigned long dwProductVersionMS;
  /* 0x0014 */ unsigned long dwProductVersionLS;
  /* 0x0018 */ unsigned long dwFileFlagsMask;
  /* 0x001c */ unsigned long dwFileFlags;
  /* 0x0020 */ unsigned long dwFileOS;
  /* 0x0024 */ unsigned long dwFileType;
  /* 0x0028 */ unsigned long dwFileSubtype;
  /* 0x002c */ unsigned long dwFileDateMS;
  /* 0x0030 */ unsigned long dwFileDateLS;
}; /* size: 0x0034 */

