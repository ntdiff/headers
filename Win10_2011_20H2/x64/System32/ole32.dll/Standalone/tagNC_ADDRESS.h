struct tagNC_ADDRESS
{
  /* 0x0000 */ struct NET_ADDRESS_INFO_* pAddrInfo;
  /* 0x0008 */ unsigned short PortNumber;
  /* 0x000a */ unsigned char PrefixLength;
  /* 0x000b */ char __PADDING__[5];
}; /* size: 0x0010 */

