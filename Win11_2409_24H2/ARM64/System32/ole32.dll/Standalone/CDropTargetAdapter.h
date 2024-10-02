class CDropTargetAdapter
{
  /* 0x0000 */ struct HWND__* _hwndOLE;
  /* 0x0008 */ struct HWND__* _hwnd31;
  /* 0x0010 */ unsigned long _dwEffectLast;
  /* 0x0018 */ class CDragOperation* _pdo;
  /* 0x0020 */ void* _hDDInfo;
  /* 0x0028 */ BOOL _checkedForEnterpriseDropTarget;
  /* 0x002c */ HRESULT _hrEnterpriseDropTargetCheck;
  /* 0x0030 */ int _isEnterpriseDropTarget;
  /* 0x0034 */ int _supportsEvaluatingEdpPolicy;
}; /* size: 0x0038 */

