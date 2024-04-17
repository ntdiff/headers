class CFrameFilter
{
  /* 0x0018 */ struct HWND__* m_hwndObject;
  /* 0x0020 */ struct HWND__* m_hwndFrame;
  /* 0x0028 */ struct IOleInPlaceFrame* m_lpFrame;
  /* 0x0030 */ struct IOleInPlaceActiveObject* m_lpObject;
  /* 0x0038 */ void* m_lpfnPrevWndProc /* function */;
  /* 0x0040 */ int m_fObjectMenu;
  /* 0x0044 */ int m_fCurItemPopup;
  /* 0x0048 */ int m_fInMenuMode;
  /* 0x004c */ int m_fDiscardWmCommand;
  /* 0x0050 */ int m_fGotMenuCloseEvent;
  /* 0x0054 */ int m_fRemovedWndProc;
  /* 0x0058 */ unsigned int m_cmdId;
  /* 0x0060 */ unsigned __int64 m_uCurItemID;
  /* 0x0068 */ struct tagOLEMENU* m_lpOleMenu;
  /* 0x0070 */ struct HMENU__* m_hmenuCombined;
  /* 0x0078 */ struct HWND__* m_hwndFocusOnEnter;
  /* 0x0080 */ int m_cAltTab;
}; /* size: 0x0088 */

