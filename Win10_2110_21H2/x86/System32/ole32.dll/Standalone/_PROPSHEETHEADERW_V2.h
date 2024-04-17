typedef struct _PROPSHEETHEADERW_V2
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HWND__* hwndParent;
  /* 0x000c */ struct HINSTANCE__* hInstance;
  union
  {
    /* 0x0010 */ struct HICON__* hIcon;
    /* 0x0010 */ const wchar_t* pszIcon;
  }; /* size: 0x0004 */
  /* 0x0014 */ const wchar_t* pszCaption;
  /* 0x0018 */ unsigned int nPages;
  union
  {
    /* 0x001c */ unsigned int nStartPage;
    /* 0x001c */ const wchar_t* pStartPage;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0020 */ const struct _PROPSHEETPAGEW* ppsp;
    /* 0x0020 */ struct _PSP** phpage;
  }; /* size: 0x0004 */
  /* 0x0024 */ void* pfnCallback /* function */;
  union
  {
    /* 0x0028 */ struct HBITMAP__* hbmWatermark;
    /* 0x0028 */ const wchar_t* pszbmWatermark;
  }; /* size: 0x0004 */
  /* 0x002c */ struct HPALETTE__* hplWatermark;
  union
  {
    /* 0x0030 */ struct HBITMAP__* hbmHeader;
    /* 0x0030 */ const wchar_t* pszbmHeader;
  }; /* size: 0x0004 */
} PROPSHEETHEADERW_V2, *PPROPSHEETHEADERW_V2; /* size: 0x0034 */

