typedef struct _PROPSHEETPAGEA
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  union
  {
    /* 0x0010 */ const char* pszTemplate;
    /* 0x0010 */ const struct DLGTEMPLATE* pResource;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0018 */ struct HICON__* hIcon;
    /* 0x0018 */ const char* pszIcon;
  }; /* size: 0x0008 */
  /* 0x0020 */ const char* pszTitle;
  /* 0x0028 */ void* pfnDlgProc /* function */;
  /* 0x0030 */ __int64 lParam;
  /* 0x0038 */ void* pfnCallback /* function */;
  /* 0x0040 */ unsigned int* pcRefParent;
  /* 0x0048 */ const char* pszHeaderTitle;
  /* 0x0050 */ const char* pszHeaderSubTitle;
  /* 0x0058 */ void* hActCtx;
  union
  {
    /* 0x0060 */ struct HBITMAP__* hbmHeader;
    /* 0x0060 */ const char* pszbmHeader;
  }; /* size: 0x0008 */
} PROPSHEETPAGEA, *PPROPSHEETPAGEA; /* size: 0x0068 */

