class Microsoft::WRL::ComPtr<IDropTarget>
{
  /* 0x0000 */ struct IDropTarget* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IEnterpriseDropTarget>
{
  /* 0x0000 */ struct IEnterpriseDropTarget* ptr_;
}; /* size: 0x0008 */

class CPrivDragDrop
{
  /* 0x0008 */ unsigned long _ulRefCnt;
  /* 0x0010 */ class Microsoft::WRL::ComPtr<IDropTarget> _pDropTarget;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<IDataObject> _pCurrentDataObject;
  /* 0x0020 */ class Microsoft::WRL::ComPtr<IEnterpriseDropTarget> _pEnterpriseDropTarget;
  /* 0x0028 */ struct HWND__* _hwnd;
  /* 0x0030 */ BOOL _fBrokerInstance;
  /* 0x0031 */ BOOL _fIsWinRt;
  /* 0x0038 */ struct CO_MTA_USAGE_COOKIE__* _mtaCookie;
}; /* size: 0x0040 */

