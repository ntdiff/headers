class CRpcThread
{
  /* 0x0000 */ void* _hWakeup;
  /* 0x0008 */ int _fDone;
  /* 0x0010 */ void* _fn /* function */;
  /* 0x0018 */ void* _param;
  /* 0x0020 */ class CRpcThread* _pNext;
  /* 0x0028 */ unsigned long _dwThreadID;
  /* 0x0030 */ struct HINSTANCE__* _hInstOle32;
}; /* size: 0x0038 */

