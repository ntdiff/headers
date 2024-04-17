struct WINTRUST_CATALOG_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwCatalogVersion;
  /* 0x0008 */ const wchar_t* pcwszCatalogFilePath;
  /* 0x0010 */ const wchar_t* pcwszMemberTag;
  /* 0x0018 */ const wchar_t* pcwszMemberFilePath;
  /* 0x0020 */ void* hMemberFile;
  /* 0x0028 */ unsigned char* pbCalculatedFileHash;
  /* 0x0030 */ unsigned long cbCalculatedFileHash;
  /* 0x0038 */ const struct _CTL_CONTEXT* pcCatalogContext;
  /* 0x0040 */ void* hCatAdmin;
}; /* size: 0x0048 */

