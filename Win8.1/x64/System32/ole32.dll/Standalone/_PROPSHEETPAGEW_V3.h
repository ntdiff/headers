typedef struct _PROPSHEETPAGEW_V3
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  union
  {
    /* 0x0010 */ const wchar_t* pszTemplate;
    /* 0x0010 */ const struct DLGTEMPLATE* pResource;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0018 */ struct HICON__* hIcon;
    /* 0x0018 */ const wchar_t* pszIcon;
  }; /* size: 0x0008 */
  /* 0x0020 */ const wchar_t* pszTitle;
  /* 0x0028 */ void* pfnDlgProc /* function */;
  /* 0x0030 */ __int64 lParam;
  /* 0x0038 */ void* pfnCallback /* function */;
  /* 0x0040 */ unsigned int* pcRefParent;
  /* 0x0048 */ const wchar_t* pszHeaderTitle;
  /* 0x0050 */ const wchar_t* pszHeaderSubTitle;
  /* 0x0058 */ void* hActCtx;
} PROPSHEETPAGEW_V3, *PPROPSHEETPAGEW_V3; /* size: 0x0060 */

