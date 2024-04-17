class CProcGen
{
  /* 0x0000 */ const unsigned char* _pProcFormatString;
  /* 0x0004 */ unsigned short _offset;
  /* 0x0006 */ unsigned short _stackSize;
  /* 0x0008 */ unsigned long _clientBufferSize;
  /* 0x000c */ unsigned long _serverBufferSize;
  /* 0x0010 */ int _fClientMustSize;
  /* 0x0014 */ int _fServerMustSize;
  /* 0x0018 */ int _fClientCorrCheck;
  /* 0x001c */ int _fServerCorrCheck;
  /* 0x0020 */ unsigned short _usFloatArgMask;
  /* 0x0022 */ unsigned short _usFloatSlots;
  /* 0x0024 */ class CTypeGen* _pTypeGen;
}; /* size: 0x0028 */

