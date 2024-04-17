typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPT_PROVIDER_DATA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ struct _WINTRUST_DATA* pWintrustData;
  /* 0x0010 */ int fOpenedFile;
  /* 0x0018 */ struct HWND__* hWndParent;
  /* 0x0020 */ struct _GUID* pgActionID;
  /* 0x0028 */ unsigned __int64 hProv;
  /* 0x0030 */ unsigned long dwError;
  /* 0x0034 */ unsigned long dwRegSecuritySettings;
  /* 0x0038 */ unsigned long dwRegPolicySettings;
  /* 0x0040 */ struct _CRYPT_PROVIDER_FUNCTIONS* psPfns;
  /* 0x0048 */ unsigned long cdwTrustStepErrors;
  /* 0x0050 */ unsigned long* padwTrustStepErrors;
  /* 0x0058 */ unsigned long chStores;
  /* 0x0060 */ void** pahStores;
  /* 0x0068 */ unsigned long dwEncoding;
  /* 0x0070 */ void* hMsg;
  /* 0x0078 */ unsigned long csSigners;
  /* 0x0080 */ struct _CRYPT_PROVIDER_SGNR* pasSigners;
  /* 0x0088 */ unsigned long csProvPrivData;
  /* 0x0090 */ struct _CRYPT_PROVIDER_PRIVDATA* pasProvPrivData;
  /* 0x0098 */ unsigned long dwSubjectChoice;
  /* 0x00a0 */ struct _PROVDATA_SIP* pPDSip;
  /* 0x00a8 */ char* pszUsageOID;
  /* 0x00b0 */ int fRecallWithState;
  /* 0x00b4 */ struct _FILETIME sftSystemTime;
  /* 0x00c0 */ char* pszCTLSignerUsageOID;
  /* 0x00c8 */ unsigned long dwProvFlags;
  /* 0x00cc */ unsigned long dwFinalError;
  /* 0x00d0 */ struct _CERT_USAGE_MATCH* pRequestUsage;
  /* 0x00d8 */ unsigned long dwTrustPubSettings;
  /* 0x00dc */ unsigned long dwUIStateFlags;
  /* 0x00e0 */ struct _CRYPT_PROVIDER_SIGSTATE* pSigState;
  /* 0x00e8 */ struct WINTRUST_SIGNATURE_SETTINGS_* pSigSettings;
} CRYPT_PROVIDER_DATA, *PCRYPT_PROVIDER_DATA; /* size: 0x00f0 */

