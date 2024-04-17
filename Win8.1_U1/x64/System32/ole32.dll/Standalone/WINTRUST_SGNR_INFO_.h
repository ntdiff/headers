struct WINTRUST_SGNR_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ const wchar_t* pcwszDisplayName;
  /* 0x0010 */ struct _CMSG_SIGNER_INFO* psSignerInfo;
  /* 0x0018 */ unsigned long chStores;
  /* 0x0020 */ void** pahStores;
}; /* size: 0x0028 */

