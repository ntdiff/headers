typedef struct _RTL_VERIFIER_HELPER_TABLE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ void* VerifierEngGetStackTraceAddress /* function */;
  /* 0x0008 */ void* VerifierEngNtdllHeapFreeCallback /* function */;
  /* 0x000c */ void* VerifierEngLogStackTrace /* function */;
  /* 0x0010 */ const struct _UNICODE_STRING* UnicodeImageName;
  /* 0x0014 */ void* VerifierEngCommitDebugInfo /* function */;
  /* 0x0018 */ void* VerifierEngSetProcessDebugInformation /* function */;
  /* 0x001c */ void* VerifierEngQueryImageFileExecutionOptionsEx /* function */;
  /* 0x0020 */ wchar_t* TargetDlls;
  /* 0x0024 */ unsigned long* AddressDphGlobalFlags;
  /* 0x0028 */ struct _RTL_VERIFIER_HEAP_TABLE* VerifierTable;
  /* 0x002c */ struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR* VerifierDescriptor;
  /* 0x0030 */ void* OptionsKey;
  /* 0x0034 */ void* VerifierEngGetStackTraceAddressEx /* function */;
  /* 0x0038 */ void* VerifierEngReleaseStackTrace /* function */;
} RTL_VERIFIER_HELPER_TABLE, *PRTL_VERIFIER_HELPER_TABLE; /* size: 0x003c */

