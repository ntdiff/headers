struct tagSWindowData
{
  /* 0x0000 */ struct HWND__* hWnd;
  /* 0x0004 */ unsigned int wFirstMsg;
  /* 0x0008 */ unsigned int wLastMsg;
}; /* size: 0x000c */

class CAptCallCtrl
{
  /* 0x0000 */ struct IMessageFilter* _pMF;
  /* 0x0004 */ int _fInMsgFilter;
  /* 0x0008 */ class CCliModalLoop* _pTopCML;
  /* 0x000c */ struct tagSWindowData _WD[2];
}; /* size: 0x0024 */

