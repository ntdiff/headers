typedef struct _WINTRUST_DATA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ void* pPolicyCallbackData;
  /* 0x0008 */ void* pSIPClientData;
  /* 0x000c */ unsigned long dwUIChoice;
  /* 0x0010 */ unsigned long fdwRevocationChecks;
  /* 0x0014 */ unsigned long dwUnionChoice;
  union
  {
    /* 0x0018 */ struct WINTRUST_FILE_INFO_* pFile;
    /* 0x0018 */ struct WINTRUST_CATALOG_INFO_* pCatalog;
    /* 0x0018 */ struct WINTRUST_BLOB_INFO_* pBlob;
    /* 0x0018 */ struct WINTRUST_SGNR_INFO_* pSgnr;
    /* 0x0018 */ struct WINTRUST_CERT_INFO_* pCert;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long dwStateAction;
  /* 0x0020 */ void* hWVTStateData;
  /* 0x0024 */ wchar_t* pwszURLReference;
  /* 0x0028 */ unsigned long dwProvFlags;
  /* 0x002c */ unsigned long dwUIContext;
  /* 0x0030 */ struct WINTRUST_SIGNATURE_SETTINGS_* pSignatureSettings;
} WINTRUST_DATA, *PWINTRUST_DATA; /* size: 0x0034 */

