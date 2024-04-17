struct tagRAWKEYBOARD
{
  /* 0x0000 */ unsigned short MakeCode;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned short Reserved;
  /* 0x0006 */ unsigned short VKey;
  /* 0x0008 */ unsigned int Message;
  /* 0x000c */ unsigned long ExtraInformation;
}; /* size: 0x0010 */

