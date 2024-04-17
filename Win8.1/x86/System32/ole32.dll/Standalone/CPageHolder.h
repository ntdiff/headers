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

typedef struct _PROPSHEETPAGEW
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
  /* 0x0028 */ const wchar_t* pszHeaderTitle;
  /* 0x002c */ const wchar_t* pszHeaderSubTitle;
  /* 0x0030 */ void* hActCtx;
  union
  {
    /* 0x0034 */ struct HBITMAP__* hbmHeader;
    /* 0x0034 */ const wchar_t* pszbmHeader;
  }; /* size: 0x0004 */
} PROPSHEETPAGEW, *PPROPSHEETPAGEW; /* size: 0x0038 */

class CPageHolder
{
  /* 0x0004 */ struct _GUID m_clsid;
  /* 0x0014 */ struct HWND__* m_hWnd;
  /* 0x0018 */ unsigned int m_bActive : 1; /* bit position: 0 */
  /* 0x001c */ unsigned int m_fSiteTranslateAcceleratorCalled;
  union
  {
    /* 0x0020 */ char* m_pszHelpFileA;
    /* 0x0020 */ wchar_t* m_pszHelpFileW;
  }; /* size: 0x0004 */
  /* 0x0024 */ unsigned long m_dwHelpContext;
  /* 0x0028 */ unsigned long m_lcid;
  /* 0x002c */ struct CPageHolderTemplate m_dlgTemplate;
  /* 0x0048 */ struct IPropertyPage* m_pOlePropPage;
  union
  {
    /* 0x004c */ struct _PROPSHEETPAGEA m_propSheetPageA;
    /* 0x004c */ struct _PROPSHEETPAGEW m_propSheetPageW;
  }; /* size: 0x0038 */
  /* 0x0084 */ long m_dispidStart;
  /* 0x0088 */ class COlePropertySheet* m_pOlePropSheet;
  /* 0x008c */ int m_fUnicodePage;
}; /* size: 0x0090 */

