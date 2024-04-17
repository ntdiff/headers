typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct CPageHolderTemplate
{
  /* 0x0012 */ wchar_t MenuName;
  /* 0x0014 */ wchar_t ClassName;
  /* 0x0016 */ wchar_t szCaption;
  /* 0x0018 */ unsigned short wPointSize;
  /* 0x001a */ wchar_t szFontName;
}; /* size: 0x001c */

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

typedef struct _PROPSHEETPAGEW
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
  union
  {
    /* 0x0060 */ struct HBITMAP__* hbmHeader;
    /* 0x0060 */ const wchar_t* pszbmHeader;
  }; /* size: 0x0008 */
} PROPSHEETPAGEW, *PPROPSHEETPAGEW; /* size: 0x0068 */

class CPageHolder
{
  /* 0x0008 */ struct _GUID m_clsid;
  /* 0x0018 */ struct HWND__* m_hWnd;
  /* 0x0020 */ unsigned int m_bActive : 1; /* bit position: 0 */
  /* 0x0024 */ unsigned int m_fSiteTranslateAcceleratorCalled;
  union
  {
    /* 0x0028 */ char* m_pszHelpFileA;
    /* 0x0028 */ wchar_t* m_pszHelpFileW;
  }; /* size: 0x0008 */
  /* 0x0030 */ unsigned long m_dwHelpContext;
  /* 0x0034 */ unsigned long m_lcid;
  /* 0x0038 */ struct CPageHolderTemplate m_dlgTemplate;
  /* 0x0058 */ struct IPropertyPage* m_pOlePropPage;
  union
  {
    /* 0x0060 */ struct _PROPSHEETPAGEA m_propSheetPageA;
    /* 0x0060 */ struct _PROPSHEETPAGEW m_propSheetPageW;
  }; /* size: 0x0068 */
  /* 0x00c8 */ long m_dispidStart;
  /* 0x00d0 */ class COlePropertySheet* m_pOlePropSheet;
  /* 0x00d8 */ int m_fUnicodePage;
}; /* size: 0x00e0 */

