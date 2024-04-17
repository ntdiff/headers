struct WSAData
{
  /* 0x0000 */ unsigned short wVersion;
  /* 0x0002 */ unsigned short wHighVersion;
  /* 0x0004 */ unsigned short iMaxSockets;
  /* 0x0006 */ unsigned short iMaxUdpDg;
  /* 0x0008 */ char* lpVendorInfo;
  /* 0x0010 */ char szDescription[257];
  /* 0x0111 */ char szSystemStatus[129];
  /* 0x0192 */ char __PADDING__[6];
}; /* size: 0x0198 */

