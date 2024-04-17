typedef struct _CRYPT_PROVIDER_FUNCTIONS
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ void* pfnAlloc /* function */;
  /* 0x0008 */ void* pfnFree /* function */;
  /* 0x000c */ void* pfnAddStore2Chain /* function */;
  /* 0x0010 */ void* pfnAddSgnr2Chain /* function */;
  /* 0x0014 */ void* pfnAddCert2Chain /* function */;
  /* 0x0018 */ void* pfnAddPrivData2Chain /* function */;
  /* 0x001c */ void* pfnInitialize /* function */;
  /* 0x0020 */ void* pfnObjectTrust /* function */;
  /* 0x0024 */ void* pfnSignatureTrust /* function */;
  /* 0x0028 */ void* pfnCertificateTrust /* function */;
  /* 0x002c */ void* pfnFinalPolicy /* function */;
  /* 0x0030 */ void* pfnCertCheckPolicy /* function */;
  /* 0x0034 */ void* pfnTestFinalPolicy /* function */;
  /* 0x0038 */ struct _CRYPT_PROVUI_FUNCS* psUIpfns;
  /* 0x003c */ void* pfnCleanupPolicy /* function */;
} CRYPT_PROVIDER_FUNCTIONS, *PCRYPT_PROVIDER_FUNCTIONS; /* size: 0x0040 */

