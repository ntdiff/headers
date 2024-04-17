typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPT_PROVIDER_DATA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ struct _WINTRUST_DATA* pWintrustData;
  /* 0x0008 */ int fOpenedFile;
  /* 0x000c */ struct HWND__* hWndParent;
  /* 0x0010 */ struct _GUID* pgActionID;
  /* 0x0014 */ unsigned long hProv;
  /* 0x0018 */ unsigned long dwError;
  /* 0x001c */ unsigned long dwRegSecuritySettings;
  /* 0x0020 */ unsigned long dwRegPolicySettings;
  /* 0x0024 */ struct _CRYPT_PROVIDER_FUNCTIONS* psPfns;
  /* 0x0028 */ unsigned long cdwTrustStepErrors;
  /* 0x002c */ unsigned long* padwTrustStepErrors;
  /* 0x0030 */ unsigned long chStores;
  /* 0x0034 */ void** pahStores;
  /* 0x0038 */ unsigned long dwEncoding;
  /* 0x003c */ void* hMsg;
  /* 0x0040 */ unsigned long csSigners;
  /* 0x0044 */ struct _CRYPT_PROVIDER_SGNR* pasSigners;
  /* 0x0048 */ unsigned long csProvPrivData;
  /* 0x004c */ struct _CRYPT_PROVIDER_PRIVDATA* pasProvPrivData;
  /* 0x0050 */ unsigned long dwSubjectChoice;
  /* 0x0054 */ struct _PROVDATA_SIP* pPDSip;
  /* 0x0058 */ char* pszUsageOID;
  /* 0x005c */ int fRecallWithState;
  /* 0x0060 */ struct _FILETIME sftSystemTime;
  /* 0x0068 */ char* pszCTLSignerUsageOID;
  /* 0x006c */ unsigned long dwProvFlags;
  /* 0x0070 */ unsigned long dwFinalError;
  /* 0x0074 */ struct _CERT_USAGE_MATCH* pRequestUsage;
  /* 0x0078 */ unsigned long dwTrustPubSettings;
  /* 0x007c */ unsigned long dwUIStateFlags;
} CRYPT_PROVIDER_DATA, *PCRYPT_PROVIDER_DATA; /* size: 0x0080 */

