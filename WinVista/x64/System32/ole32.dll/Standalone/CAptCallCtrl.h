struct tagSWindowData
{
  /* 0x0000 */ struct HWND__* hWnd;
  /* 0x0008 */ unsigned int wFirstMsg;
  /* 0x000c */ unsigned int wLastMsg;
}; /* size: 0x0010 */

class CAptCallCtrl
{
  /* 0x0000 */ struct IMessageFilter* _pMF;
  /* 0x0008 */ int _fInMsgFilter;
  /* 0x0010 */ class CCliModalLoop* _pTopCML;
  /* 0x0018 */ struct tagSWindowData _WD[2];
}; /* size: 0x0038 */

