typedef struct _PROPSHEETHEADERA_V2
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HWND__* hwndParent;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  union
  {
    /* 0x0018 */ struct HICON__* hIcon;
    /* 0x0018 */ const char* pszIcon;
  }; /* size: 0x0008 */
  /* 0x0020 */ const char* pszCaption;
  /* 0x0028 */ unsigned int nPages;
  union
  {
    /* 0x0030 */ unsigned int nStartPage;
    /* 0x0030 */ const char* pStartPage;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ const struct _PROPSHEETPAGEA* ppsp;
    /* 0x0038 */ struct _PSP** phpage;
  }; /* size: 0x0008 */
  /* 0x0040 */ void* pfnCallback /* function */;
  union
  {
    /* 0x0048 */ struct HBITMAP__* hbmWatermark;
    /* 0x0048 */ const char* pszbmWatermark;
  }; /* size: 0x0008 */
  /* 0x0050 */ struct HPALETTE__* hplWatermark;
  union
  {
    /* 0x0058 */ struct HBITMAP__* hbmHeader;
    /* 0x0058 */ const char* pszbmHeader;
  }; /* size: 0x0008 */
} PROPSHEETHEADERA_V2, *PPROPSHEETHEADERA_V2; /* size: 0x0060 */

