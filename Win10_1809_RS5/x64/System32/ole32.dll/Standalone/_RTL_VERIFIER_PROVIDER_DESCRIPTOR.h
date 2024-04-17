typedef struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ struct _RTL_VERIFIER_DLL_DESCRIPTOR* ProviderDlls;
  /* 0x0010 */ void* ProviderDllLoadCallback /* function */;
  /* 0x0018 */ void* ProviderDllUnloadCallback /* function */;
  /* 0x0020 */ wchar_t* VerifierImage;
  /* 0x0028 */ unsigned long VerifierFlags;
  /* 0x002c */ unsigned long VerifierDebug;
  /* 0x0030 */ void* RtlpGetStackTraceAddress;
  /* 0x0038 */ void* RtlpDebugPageHeapCreate;
  /* 0x0040 */ void* RtlpDebugPageHeapDestroy;
  /* 0x0048 */ void* ProviderNtdllHeapFreeCallback /* function */;
} RTL_VERIFIER_PROVIDER_DESCRIPTOR, *PRTL_VERIFIER_PROVIDER_DESCRIPTOR; /* size: 0x0050 */

