class Microsoft::WRL::ComPtr<IDropTarget>
{
  /* 0x0000 */ struct IDropTarget* ptr_;
}; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0004 */

class CPrivDragDrop
{
  /* 0x0004 */ unsigned long _ulRefCnt;
  /* 0x0008 */ class Microsoft::WRL::ComPtr<IDropTarget> _pDropTarget;
  /* 0x000c */ class Microsoft::WRL::ComPtr<IDataObject> _pCurrentDataObject;
  /* 0x0010 */ struct HWND__* _hwnd;
  /* 0x0014 */ BOOL _fBrokerInstance;
  /* 0x0018 */ struct CO_MTA_USAGE_COOKIE__* _mtaCookie;
}; /* size: 0x001c */

