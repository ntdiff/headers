typedef struct _WINTRUST_DATA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ void* pPolicyCallbackData;
  /* 0x0010 */ void* pSIPClientData;
  /* 0x0018 */ unsigned long dwUIChoice;
  /* 0x001c */ unsigned long fdwRevocationChecks;
  /* 0x0020 */ unsigned long dwUnionChoice;
  union
  {
    /* 0x0028 */ struct WINTRUST_FILE_INFO_* pFile;
    /* 0x0028 */ struct WINTRUST_CATALOG_INFO_* pCatalog;
    /* 0x0028 */ struct WINTRUST_BLOB_INFO_* pBlob;
    /* 0x0028 */ struct WINTRUST_SGNR_INFO_* pSgnr;
    /* 0x0028 */ struct WINTRUST_CERT_INFO_* pCert;
    /* 0x0028 */ struct WINTRUST_DETACHED_SIG_INFO_* pDetachedSig;
  }; /* size: 0x0008 */
  /* 0x0030 */ unsigned long dwStateAction;
  /* 0x0038 */ void* hWVTStateData;
  /* 0x0040 */ wchar_t* pwszURLReference;
  /* 0x0048 */ unsigned long dwProvFlags;
  /* 0x004c */ unsigned long dwUIContext;
  /* 0x0050 */ struct WINTRUST_SIGNATURE_SETTINGS_* pSignatureSettings;
} WINTRUST_DATA, *PWINTRUST_DATA; /* size: 0x0058 */

