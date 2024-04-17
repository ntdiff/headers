class CException
{
  /* 0x0008 */ long _lError;
}; /* size: 0x0010 */

class CExceptionContext
{
  /* 0x0000 */ class CTry* _pTopTry;
  /* 0x0008 */ unsigned char* _pLastNew;
  /* 0x0010 */ int _cbLastNew;
  /* 0x0014 */ int _fNewReadyForUnwind;
  /* 0x0018 */ class CException _exception;
  /* 0x0028 */ char buffer[256];
  /* 0x0128 */ class CExceptionContext::StackElement* _aStack;
  /* 0x0130 */ int _StackTop;
  /* 0x0134 */ int _StackSize;
}; /* size: 0x0138 */

