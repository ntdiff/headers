class CFrameFilter
{
  /* 0x0010 */ struct HWND__* m_hwndObject;
  /* 0x0014 */ struct HWND__* m_hwndFrame;
  /* 0x0018 */ struct IOleInPlaceFrame* m_lpFrame;
  /* 0x001c */ struct IOleInPlaceActiveObject* m_lpObject;
  /* 0x0020 */ void* m_lpfnPrevWndProc /* function */;
  /* 0x0024 */ int m_fObjectMenu;
  /* 0x0028 */ int m_fCurItemPopup;
  /* 0x002c */ int m_fInMenuMode;
  /* 0x0030 */ int m_fDiscardWmCommand;
  /* 0x0034 */ int m_fGotMenuCloseEvent;
  /* 0x0038 */ int m_fRemovedWndProc;
  /* 0x003c */ unsigned int m_cmdId;
  /* 0x0040 */ unsigned int m_uCurItemID;
  /* 0x0044 */ struct tagOLEMENU* m_lpOleMenu;
  /* 0x0048 */ struct HMENU__* m_hmenuCombined;
  /* 0x004c */ struct HWND__* m_hwndFocusOnEnter;
  /* 0x0050 */ int m_cAltTab;
}; /* size: 0x0054 */

