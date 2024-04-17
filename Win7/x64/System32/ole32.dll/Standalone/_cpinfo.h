typedef struct _cpinfo
{
  /* 0x0000 */ unsigned int MaxCharSize;
  /* 0x0004 */ unsigned char DefaultChar[2];
  /* 0x0006 */ unsigned char LeadByte[12];
  /* 0x0012 */ char __PADDING__[2];
} cpinfo, *Pcpinfo; /* size: 0x0014 */

