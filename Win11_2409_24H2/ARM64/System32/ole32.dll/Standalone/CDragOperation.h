class Microsoft::WRL::ComPtr<IDropTarget>
{
  /* 0x0000 */ struct IDropTarget* ptr_;
}; /* size: 0x0008 */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

class CPoint
{
  /* 0x0000 */ struct tagPOINT _pt;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IDragDropExtensionForOLE>
{
  /* 0x0000 */ struct IDragDropExtensionForOLE* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IUnknown>
{
  /* 0x0000 */ struct IUnknown* ptr_;
}; /* size: 0x0008 */

class DragDropTelemetry::DragDropSession
{
}; /* size: 0x0148 */

class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (__cdecl*)(void *),&CoTaskMemFree,wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t> > >
{
}; /* size: 0x0008 */

class CDragOperation
{
  /* 0x0010 */ struct IDataObject* _pDataObject;
  /* 0x0018 */ struct tagInterfaceData* _DOBuffer;
  /* 0x0020 */ struct IDropSource* _pDropSource;
  /* 0x0028 */ struct IDropSourceNotify* _pDSNotify;
  /* 0x0030 */ class CDropTargetAdapter* _pDropTargetAdapter;
  /* 0x0038 */ void* m_dropTargetFromWindowProperty;
  /* 0x0040 */ class Microsoft::WRL::ComPtr<IDropTarget> m_nonRPCSSRegisteredDropTarget;
  /* 0x0048 */ void* _hFormats;
  /* 0x0050 */ class CPoint _cpt;
  /* 0x0058 */ unsigned long _dwOKEffects;
  /* 0x005c */ unsigned long _dwEffect;
  /* 0x0060 */ unsigned long* _pdwEffect;
  /* 0x0068 */ int _fEscapePressed;
  /* 0x0070 */ struct HICON__* _curOld;
  /* 0x0078 */ struct HWND__* _hwndLast;
  /* 0x0080 */ unsigned long _grfKeyState;
  /* 0x0084 */ HRESULT _hrDragResult;
  /* 0x0088 */ int _fMouseCaptured;
  /* 0x0090 */ class CDragDefaultCursors* _pcddcDefault;
  /* 0x0098 */ BOOL m_hasHDROPClipboardFormat;
  /* 0x009c */ unsigned long _dwFinalKeyState;
  /* 0x00a0 */ class CPoint _cptFinalCursorPos;
  /* 0x00a8 */ int _fWinRTDrag;
  /* 0x00b0 */ void* _hDragInProgress;
  /* 0x00b8 */ BOOL _fDropCompleted;
  /* 0x00c0 */ void* _hDragSourceToken;
  /* 0x00c8 */ int _fSourceIsAppContainer;
  /* 0x00cc */ BOOL _fConcurrentDrag;
  /* 0x00cd */ BOOL _fWinRtExtensionLoadAttempted;
  union
  {
    /* 0x0000 */ BOOL s_fDoDragDropInFlight;
    /* 0x0000 */ long s_wScrollInt;
  }; /* size: 0x0004 */
  /* 0x00d0 */ class Microsoft::WRL::ComPtr<IDragDropExtensionForOLE> _spWinRtExtension;
  /* 0x00d8 */ class Microsoft::WRL::ComPtr<IUnknown> _spWinRtExclusionToken;
  /* 0x00e0 */ class DragDropTelemetry::DragDropSession _telemetrySession;
  /* 0x0228 */ BOOL m_isEdpActive;
  /* 0x0229 */ BOOL m_isTargetWinRt;
  /* 0x0230 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (__cdecl*)(void *),&CoTaskMemFree,wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t> > > m_sourceEnterpriseId;
  /* 0x0238 */ class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (__cdecl*)(void *),&CoTaskMemFree,wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t> > > m_dataObjectEnterpriseId;
  /* 0x0240 */ BOOL m_dataObjectHasEnterpriseId;
  /* 0x0241 */ BOOL m_backgroundContainerDrag;
}; /* size: 0x0248 */

