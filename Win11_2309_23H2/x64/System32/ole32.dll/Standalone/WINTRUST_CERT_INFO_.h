struct WINTRUST_CERT_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ const wchar_t* pcwszDisplayName;
  /* 0x0010 */ struct _CERT_CONTEXT* psCertContext;
  /* 0x0018 */ unsigned long chStores;
  /* 0x0020 */ void** pahStores;
  /* 0x0028 */ unsigned long dwFlags;
  /* 0x0030 */ struct _FILETIME* psftVerifyAsOf;
}; /* size: 0x0038 */

