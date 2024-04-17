class CException
{
  /* 0x0004 */ long _lError;
}; /* size: 0x0008 */

class CExceptionContext
{
  /* 0x0000 */ class CTry* _pTopTry;
  /* 0x0004 */ unsigned char* _pLastNew;
  /* 0x0008 */ int _cbLastNew;
  /* 0x000c */ int _fNewReadyForUnwind;
  /* 0x0010 */ class CException _exception;
  /* 0x0018 */ char buffer[256];
  /* 0x0118 */ class CExceptionContext::StackElement* _aStack;
  /* 0x011c */ int _StackTop;
  /* 0x0120 */ int _StackSize;
}; /* size: 0x0124 */

