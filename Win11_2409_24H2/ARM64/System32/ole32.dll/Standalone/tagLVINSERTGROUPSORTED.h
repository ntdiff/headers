struct tagLVGROUP
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int mask;
  /* 0x0008 */ wchar_t* pszHeader;
  /* 0x0010 */ int cchHeader;
  /* 0x0018 */ wchar_t* pszFooter;
  /* 0x0020 */ int cchFooter;
  /* 0x0024 */ int iGroupId;
  /* 0x0028 */ unsigned int stateMask;
  /* 0x002c */ unsigned int state;
  /* 0x0030 */ unsigned int uAlign;
  /* 0x0038 */ wchar_t* pszSubtitle;
  /* 0x0040 */ unsigned int cchSubtitle;
  /* 0x0048 */ wchar_t* pszTask;
  /* 0x0050 */ unsigned int cchTask;
  /* 0x0058 */ wchar_t* pszDescriptionTop;
  /* 0x0060 */ unsigned int cchDescriptionTop;
  /* 0x0068 */ wchar_t* pszDescriptionBottom;
  /* 0x0070 */ unsigned int cchDescriptionBottom;
  /* 0x0074 */ int iTitleImage;
  /* 0x0078 */ int iExtendedImage;
  /* 0x007c */ int iFirstItem;
  /* 0x0080 */ unsigned int cItems;
  /* 0x0088 */ wchar_t* pszSubsetTitle;
  /* 0x0090 */ unsigned int cchSubsetTitle;
  /* 0x0094 */ long __PADDING__[1];
}; /* size: 0x0098 */

struct tagLVINSERTGROUPSORTED
{
  /* 0x0000 */ void* pfnGroupCompare /* function */;
  /* 0x0008 */ void* pvData;
  /* 0x0010 */ struct tagLVGROUP lvGroup;
}; /* size: 0x00a8 */

