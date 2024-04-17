struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

class CPoint
{
  /* 0x0000 */ struct tagPOINT _pt;
}; /* size: 0x0008 */

enum PROCESS_DPI_AWARENESS
{
  PROCESS_DPI_UNINITIALIZED = -1,
  PROCESS_DPI_UNAWARE = 0,
  PROCESS_SYSTEM_DPI_AWARE = 1,
  PROCESS_PER_MONITOR_DPI_AWARE = 2,
};

class CDragOperation
{
  /* 0x000c */ struct IDataObject* _pDataObject;
  /* 0x0010 */ struct tagInterfaceData* _DOBuffer;
  /* 0x0014 */ struct IDropSource* _pDropSource;
  /* 0x0018 */ struct IDropSourceQueryEx* _pDSQueryEx;
  /* 0x001c */ struct IDropSourceNotify* _pDSNotify;
  /* 0x0020 */ struct IDropTarget* _pDropTarget;
  /* 0x0024 */ struct IDropTarget* _pRealDropTarget;
  /* 0x0028 */ void* _hFormats;
  /* 0x002c */ class CPoint _cpt;
  /* 0x0034 */ unsigned long _dwOKEffects;
  /* 0x0038 */ unsigned long _dwEffect;
  /* 0x003c */ unsigned long* _pdwEffect;
  /* 0x0040 */ int _fEscapePressed;
  /* 0x0044 */ struct HICON__* _curOld;
  /* 0x0048 */ struct HWND__* _hwndLast;
  /* 0x004c */ unsigned long _grfKeyState;
  /* 0x0050 */ HRESULT _hrDragResult;
  /* 0x0054 */ int _fMouseCaptured;
  /* 0x0058 */ class CDragDefaultCursors* _pcddcDefault;
  /* 0x005c */ int _fUseWin31;
  /* 0x0060 */ unsigned long _dwFinalKeyState;
  /* 0x0064 */ class CPoint _cptFinalCursorPos;
  /* 0x006c */ int _fWinRTDrag;
  /* 0x0070 */ void* _hDragInProgress;
  /* 0x0074 */ BOOL _fDropCompleted;
  /* 0x0078 */ void* _hDragSourceToken;
  /* 0x007c */ int _fSourceIsAppContainer;
  /* 0x0080 */ enum PROCESS_DPI_AWARENESS _sourceDpiAwareness;
  /* 0x0084 */ enum PROCESS_DPI_AWARENESS _targetDpiAwareness;
  /* 0x0088 */ BOOL _fConcurrentDrag;
  union
  {
    /* 0x0000 */ BOOL s_fDoDragDropInFlight;
    /* 0x0000 */ long s_wScrollInt;
  }; /* size: 0x0004 */
}; /* size: 0x008c */

