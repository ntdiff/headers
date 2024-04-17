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
      /* 0x0008 */ struct tagInterfaceData* _DOBuffer;
      /* 0x0010 */ struct IDropSource* _pDropSource;
      /* 0x0018 */ struct IDropSourceQueryEx* _pDSQueryEx;
      /* 0x0020 */ struct IDropSourceNotify* _pDSNotify;
      /* 0x0028 */ struct IDropTarget* _pDropTarget;
      /* 0x0030 */ struct IDropTarget* _pRealDropTarget;
      /* 0x0038 */ void* _hFormats;
      /* 0x0040 */ class CPoint _cpt;
      /* 0x0048 */ unsigned long _dwOKEffects;
      /* 0x0050 */ unsigned long* _pdwEffect;
      /* 0x0058 */ int _fEscapePressed;
      /* 0x0060 */ struct HICON__* _curOld;
      /* 0x0068 */ struct HWND__* _hwndLast;
      /* 0x0070 */ unsigned long _grfKeyState;
      /* 0x0074 */ HRESULT _hrDragResult;
      /* 0x0078 */ int _fReleasedCapture;
      /* 0x0080 */ class CDragDefaultCursors* _pcddcDefault;
      /* 0x0088 */ int _fUseWin31;
      /* 0x008c */ unsigned long _dwFinalKeyState;
      /* 0x0090 */ class CPoint _cptFinalCursorPos;
    }; /* size: 0x008c */
    /* 0x0000 */ long s_wScrollInt;
  }; /* size: 0x008c */
}; /* size: 0x0098 */

