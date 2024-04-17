typedef struct _RTL_VERIFIER_HELPER_TABLE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ void* VerifierEngGetStackTraceAddress /* function */;
  /* 0x0010 */ void* VerifierEngNtdllHeapFreeCallback /* function */;
  /* 0x0018 */ void* VerifierEngLogStackTrace /* function */;
  /* 0x0020 */ const struct _UNICODE_STRING* UnicodeImageName;
  /* 0x0028 */ void* VerifierEngCommitDebugInfo /* function */;
  /* 0x0030 */ void* VerifierEngSetProcessDebugInformation /* function */;
  /* 0x0038 */ void* VerifierEngQueryImageFileExecutionOptionsEx /* function */;
  /* 0x0040 */ wchar_t* TargetDlls;
  /* 0x0048 */ unsigned long* AddressDphGlobalFlags;
  /* 0x0050 */ struct _RTL_VERIFIER_HEAP_TABLE* VerifierTable;
  /* 0x0058 */ struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR* VerifierDescriptor;
  /* 0x0060 */ void* OptionsKey;
  /* 0x0068 */ void* VerifierEngGetStackTraceAddressEx /* function */;
  /* 0x0070 */ void* VerifierEngReleaseStackTrace /* function */;
} RTL_VERIFIER_HELPER_TABLE, *PRTL_VERIFIER_HELPER_TABLE; /* size: 0x0078 */

