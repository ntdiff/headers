struct WSAData
{
  /* 0x0000 */ unsigned short wVersion;
  /* 0x0002 */ unsigned short wHighVersion;
  /* 0x0004 */ char szDescription[257];
  /* 0x0105 */ char szSystemStatus[129];
  /* 0x0186 */ unsigned short iMaxSockets;
  /* 0x0188 */ unsigned short iMaxUdpDg;
  /* 0x018c */ char* lpVendorInfo;
}; /* size: 0x0190 */

