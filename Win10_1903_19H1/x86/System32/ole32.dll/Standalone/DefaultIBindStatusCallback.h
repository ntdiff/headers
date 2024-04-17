class DefaultIBindStatusCallback
{
  /* 0x0010 */ struct IBindStatusCallback* m_pibsc;
  /* 0x0014 */ long m_lRef;
  /* 0x0018 */ struct IBinding* m_pBinding;
  /* 0x001c */ struct HWND__* m_hwndParent;
  /* 0x0020 */ struct HWND__* m_hDlg;
  /* 0x0024 */ unsigned long m_ulProgress;
  /* 0x0028 */ unsigned long m_ulProgressMax;
  /* 0x002c */ wchar_t m_szStatusText[260];
  /* 0x0234 */ int m_fShown;
}; /* size: 0x0238 */

