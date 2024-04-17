typedef struct _PROPSHEETPAGEA
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  union
  {
    /* 0x000c */ const char* pszTemplate;
    /* 0x000c */ const struct DLGTEMPLATE* pResource;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0010 */ struct HICON__* hIcon;
    /* 0x0010 */ const char* pszIcon;
  }; /* size: 0x0004 */
  /* 0x0014 */ const char* pszTitle;
  /* 0x0018 */ void* pfnDlgProc /* function */;
  /* 0x001c */ long lParam;
  /* 0x0020 */ void* pfnCallback /* function */;
  /* 0x0024 */ unsigned int* pcRefParent;
  /* 0x0028 */ const char* pszHeaderTitle;
  /* 0x002c */ const char* pszHeaderSubTitle;
  /* 0x0030 */ void* hActCtx;
  union
  {
    /* 0x0034 */ struct HBITMAP__* hbmHeader;
    /* 0x0034 */ const char* pszbmHeader;
  }; /* size: 0x0004 */
} PROPSHEETPAGEA, *PPROPSHEETPAGEA; /* size: 0x0038 */

