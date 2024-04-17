class CDropTargetAdapter
{
  /* 0x0000 */ struct HWND__* _hwndOLE;
  /* 0x0004 */ struct HWND__* _hwnd31;
  /* 0x0008 */ unsigned long _dwEffectLast;
  /* 0x000c */ class CDragOperation* _pdo;
  /* 0x0010 */ void* _hDDInfo;
  /* 0x0014 */ BOOL _checkedForEnterpriseDropTarget;
  /* 0x0018 */ HRESULT _hrEnterpriseDropTargetCheck;
  /* 0x001c */ int _isEnterpriseDropTarget;
  /* 0x0020 */ int _supportsEvaluatingEdpPolicy;
}; /* size: 0x0024 */

