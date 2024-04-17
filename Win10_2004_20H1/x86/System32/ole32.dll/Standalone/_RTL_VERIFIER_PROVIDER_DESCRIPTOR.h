typedef struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ struct _RTL_VERIFIER_DLL_DESCRIPTOR* ProviderDlls;
  /* 0x0008 */ void* ProviderDllLoadCallback /* function */;
  /* 0x000c */ void* ProviderDllUnloadCallback /* function */;
  /* 0x0010 */ wchar_t* VerifierImage;
  /* 0x0014 */ unsigned long VerifierFlags;
  /* 0x0018 */ unsigned long VerifierDebug;
  /* 0x001c */ void* RtlpGetStackTraceAddress;
  /* 0x0020 */ void* RtlpDebugPageHeapCreate;
  /* 0x0024 */ void* RtlpDebugPageHeapDestroy;
  /* 0x0028 */ void* ProviderNtdllHeapFreeCallback /* function */;
} RTL_VERIFIER_PROVIDER_DESCRIPTOR, *PRTL_VERIFIER_PROVIDER_DESCRIPTOR; /* size: 0x002c */

