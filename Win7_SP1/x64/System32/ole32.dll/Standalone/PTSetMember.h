class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

class PTSetMember
{
  /* 0x0010 */ unsigned long _dlTree;
  /* 0x0014 */ unsigned long _dlName;
  /* 0x0018 */ unsigned long _ulLevel;
  /* 0x001c */ class CDfName _dfnName;
  /* 0x005e */ const unsigned short _uType;
}; /* size: 0x0060 */

