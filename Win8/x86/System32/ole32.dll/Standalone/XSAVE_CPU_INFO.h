struct XSAVE_CPU_INFO
{
  /* 0x0000 */ unsigned char Processor;
  /* 0x0002 */ unsigned short Family;
  /* 0x0004 */ unsigned short Model;
  /* 0x0006 */ unsigned short Stepping;
  /* 0x0008 */ unsigned short ExtendedModel;
  /* 0x000c */ unsigned long ExtendedFamily;
  /* 0x0010 */ unsigned __int64 MicrocodeVersion;
  /* 0x0018 */ unsigned long Reserved;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

