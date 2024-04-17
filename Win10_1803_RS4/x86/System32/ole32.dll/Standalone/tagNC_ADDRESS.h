struct tagNC_ADDRESS
{
  /* 0x0000 */ struct NET_ADDRESS_INFO_* pAddrInfo;
  /* 0x0004 */ unsigned short PortNumber;
  /* 0x0006 */ unsigned char PrefixLength;
  /* 0x0007 */ char __PADDING__[1];
}; /* size: 0x0008 */

