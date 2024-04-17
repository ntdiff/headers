class CProcGen
{
  /* 0x0000 */ const unsigned char* _pProcFormatString;
  /* 0x0008 */ unsigned short _offset;
  /* 0x000a */ unsigned short _stackSize;
  /* 0x000c */ unsigned long _clientBufferSize;
  /* 0x0010 */ unsigned long _serverBufferSize;
  /* 0x0014 */ int _fClientMustSize;
  /* 0x0018 */ int _fServerMustSize;
  /* 0x001c */ int _fClientCorrCheck;
  /* 0x0020 */ int _fServerCorrCheck;
  /* 0x0024 */ unsigned short _usFloatArgMask;
  /* 0x0026 */ unsigned short _usFloatSlots;
  /* 0x0028 */ class CTypeGen* _pTypeGen;
}; /* size: 0x0030 */

