class DefaultIBindStatusCallback
{
  /* 0x0020 */ struct IBindStatusCallback* m_pibsc;
  /* 0x0028 */ long m_lRef;
  /* 0x0030 */ struct IBinding* m_pBinding;
  /* 0x0038 */ struct HWND__* m_hwndParent;
  /* 0x0040 */ struct HWND__* m_hDlg;
  /* 0x0048 */ unsigned long m_ulProgress;
  /* 0x004c */ unsigned long m_ulProgressMax;
  /* 0x0050 */ wchar_t m_szStatusText[260];
  /* 0x0258 */ int m_fShown;
}; /* size: 0x0260 */

