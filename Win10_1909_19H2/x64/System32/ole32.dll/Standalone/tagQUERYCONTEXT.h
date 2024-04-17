struct tagCSPLATFORM
{
  /* 0x0000 */ unsigned long dwPlatformId;
  /* 0x0004 */ unsigned long dwVersionHi;
  /* 0x0008 */ unsigned long dwVersionLo;
  /* 0x000c */ unsigned long dwProcessorArch;
}; /* size: 0x0010 */

struct tagQUERYCONTEXT
{
  /* 0x0000 */ unsigned long dwContext;
  /* 0x0004 */ struct tagCSPLATFORM Platform;
  /* 0x0014 */ unsigned long Locale;
  /* 0x0018 */ unsigned long dwVersionHi;
  /* 0x001c */ unsigned long dwVersionLo;
}; /* size: 0x0020 */

