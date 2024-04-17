struct WINTRUST_CERT_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ const wchar_t* pcwszDisplayName;
  /* 0x0008 */ struct _CERT_CONTEXT* psCertContext;
  /* 0x000c */ unsigned long chStores;
  /* 0x0010 */ void** pahStores;
  /* 0x0014 */ unsigned long dwFlags;
  /* 0x0018 */ struct _FILETIME* psftVerifyAsOf;
}; /* size: 0x001c */

