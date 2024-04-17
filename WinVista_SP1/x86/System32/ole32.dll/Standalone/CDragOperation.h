struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

class CPoint
{
  /* 0x0000 */ struct tagPOINT _pt;
}; /* size: 0x0008 */

class CDragOperation
{
  union
  {
    struct
    {
      /* 0x0000 */ struct IDataObject* _pDataObject;
      /* 0x0004 */ void* _DOBuffer;
      /* 0x0008 */ struct IDropSource* _pDropSource;
      /* 0x000c */ struct IDropSourceQueryEx* _pDSQueryEx;
      /* 0x0010 */ struct IDropSourceNotify* _pDSNotify;
      /* 0x0014 */ struct IDropTarget* _pDropTarget;
      /* 0x0018 */ struct IDropTarget* _pRealDropTarget;
      /* 0x001c */ void* _hFormats;
      /* 0x0020 */ class CPoint _cpt;
      /* 0x0028 */ unsigned long _dwOKEffects;
      /* 0x002c */ unsigned long* _pdwEffect;
      /* 0x0030 */ int _fEscapePressed;
      /* 0x0034 */ struct HICON__* _curOld;
      /* 0x0038 */ struct HWND__* _hwndLast;
      /* 0x003c */ unsigned long _grfKeyState;
      /* 0x0040 */ HRESULT _hrDragResult;
      /* 0x0044 */ int _fReleasedCapture;
      /* 0x0048 */ class CDragDefaultCursors* _pcddcDefault;
      /* 0x004c */ int _fUseWin31;
      /* 0x0050 */ unsigned long _dwFinalKeyState;
      /* 0x0054 */ class CPoint _cptFinalCursorPos;
    }; /* size: 0x005c */
    /* 0x0000 */ long s_wScrollInt;
  }; /* size: 0x005c */
}; /* size: 0x005c */

