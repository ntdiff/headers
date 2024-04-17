typedef struct _COMMPROP
{
  /* 0x0000 */ unsigned short wPacketLength;
  /* 0x0002 */ unsigned short wPacketVersion;
  /* 0x0004 */ unsigned long dwServiceMask;
  /* 0x0008 */ unsigned long dwReserved1;
  /* 0x000c */ unsigned long dwMaxTxQueue;
  /* 0x0010 */ unsigned long dwMaxRxQueue;
  /* 0x0014 */ unsigned long dwMaxBaud;
  /* 0x0018 */ unsigned long dwProvSubType;
  /* 0x001c */ unsigned long dwProvCapabilities;
  /* 0x0020 */ unsigned long dwSettableParams;
  /* 0x0024 */ unsigned long dwSettableBaud;
  /* 0x0028 */ unsigned short wSettableData;
  /* 0x002a */ unsigned short wSettableStopParity;
  /* 0x002c */ unsigned long dwCurrentTxQueue;
  /* 0x0030 */ unsigned long dwCurrentRxQueue;
  /* 0x0034 */ unsigned long dwProvSpec1;
  /* 0x0038 */ unsigned long dwProvSpec2;
  /* 0x003c */ wchar_t wcProvChar[1];
  /* 0x003e */ char __PADDING__[2];
} COMMPROP, *PCOMMPROP; /* size: 0x0040 */

