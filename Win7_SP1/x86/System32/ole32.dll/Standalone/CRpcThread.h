class CRpcThread
{
  /* 0x0000 */ void* _hWakeup;
  /* 0x0004 */ int _fDone;
  /* 0x0008 */ void* _fn /* function */;
  /* 0x000c */ void* _param;
  /* 0x0010 */ class CRpcThread* _pNext;
  /* 0x0014 */ unsigned long _dwThreadID;
  /* 0x0018 */ struct HINSTANCE__* _hInstOle32;
}; /* size: 0x001c */

