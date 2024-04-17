typedef struct _PROPSHEETPAGEW_V1
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  union
  {
    /* 0x000c */ const wchar_t* pszTemplate;
    /* 0x000c */ const struct DLGTEMPLATE* pResource;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0010 */ struct HICON__* hIcon;
    /* 0x0010 */ const wchar_t* pszIcon;
  }; /* size: 0x0004 */
  /* 0x0014 */ const wchar_t* pszTitle;
  /* 0x0018 */ void* pfnDlgProc /* function */;
  /* 0x001c */ long lParam;
  /* 0x0020 */ void* pfnCallback /* function */;
  /* 0x0024 */ unsigned int* pcRefParent;
} PROPSHEETPAGEW_V1, *PPROPSHEETPAGEW_V1; /* size: 0x0028 */

