struct WINTRUST_SGNR_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ const wchar_t* pcwszDisplayName;
  /* 0x0008 */ struct _CMSG_SIGNER_INFO* psSignerInfo;
  /* 0x000c */ unsigned long chStores;
  /* 0x0010 */ void** pahStores;
}; /* size: 0x0014 */

