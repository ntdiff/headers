struct RTL_ACE_DATA
{
  /* 0x0000 */ unsigned char AceType;
  /* 0x0001 */ unsigned char InheritFlags;
  /* 0x0002 */ unsigned char AceFlags;
  /* 0x0004 */ unsigned long Mask;
  /* 0x0008 */ void** Sid;
}; /* size: 0x0010 */

