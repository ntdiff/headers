typedef struct _TASKDIALOGCONFIG
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ struct HWND__* hwndParent;
  /* 0x000c */ struct HINSTANCE__* hInstance;
  /* 0x0014 */ int dwFlags;
  /* 0x0018 */ int dwCommonButtons;
  /* 0x001c */ const wchar_t* pszWindowTitle;
  union
  {
    /* 0x0024 */ struct HICON__* hMainIcon;
    /* 0x0024 */ const wchar_t* pszMainIcon;
  }; /* size: 0x0008 */
  /* 0x002c */ const wchar_t* pszMainInstruction;
  /* 0x0034 */ const wchar_t* pszContent;
  /* 0x003c */ unsigned int cButtons;
  /* 0x0040 */ const struct _TASKDIALOG_BUTTON* pButtons;
  /* 0x0048 */ int nDefaultButton;
  /* 0x004c */ unsigned int cRadioButtons;
  /* 0x0050 */ const struct _TASKDIALOG_BUTTON* pRadioButtons;
  /* 0x0058 */ int nDefaultRadioButton;
  /* 0x005c */ const wchar_t* pszVerificationText;
  /* 0x0064 */ const wchar_t* pszExpandedInformation;
  /* 0x006c */ const wchar_t* pszExpandedControlText;
  /* 0x0074 */ const wchar_t* pszCollapsedControlText;
  union
  {
    /* 0x007c */ struct HICON__* hFooterIcon;
    /* 0x007c */ const wchar_t* pszFooterIcon;
  }; /* size: 0x0008 */
  /* 0x0084 */ const wchar_t* pszFooter;
  /* 0x008c */ void* pfCallback /* function */;
  /* 0x0094 */ __int64 lpCallbackData;
  /* 0x009c */ unsigned int cxWidth;
} TASKDIALOGCONFIG, *PTASKDIALOGCONFIG; /* size: 0x00a0 */

