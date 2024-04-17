typedef struct _CRYPT_PROVIDER_FUNCTIONS
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ void* pfnAlloc /* function */;
  /* 0x0010 */ void* pfnFree /* function */;
  /* 0x0018 */ void* pfnAddStore2Chain /* function */;
  /* 0x0020 */ void* pfnAddSgnr2Chain /* function */;
  /* 0x0028 */ void* pfnAddCert2Chain /* function */;
  /* 0x0030 */ void* pfnAddPrivData2Chain /* function */;
  /* 0x0038 */ void* pfnInitialize /* function */;
  /* 0x0040 */ void* pfnObjectTrust /* function */;
  /* 0x0048 */ void* pfnSignatureTrust /* function */;
  /* 0x0050 */ void* pfnCertificateTrust /* function */;
  /* 0x0058 */ void* pfnFinalPolicy /* function */;
  /* 0x0060 */ void* pfnCertCheckPolicy /* function */;
  /* 0x0068 */ void* pfnTestFinalPolicy /* function */;
  /* 0x0070 */ struct _CRYPT_PROVUI_FUNCS* psUIpfns;
  /* 0x0078 */ void* pfnCleanupPolicy /* function */;
} CRYPT_PROVIDER_FUNCTIONS, *PCRYPT_PROVIDER_FUNCTIONS; /* size: 0x0080 */

