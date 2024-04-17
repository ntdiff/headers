typedef struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT
{
  /* 0x0000 */ unsigned long UnusedLong;
  /* 0x0008 */ void* UnusedPointer[25];
} RTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT, *PRTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT; /* size: 0x00d0 */

typedef struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ void* VerifierEngLogStackTrace /* function */;
  /* 0x0010 */ void* VerifierEngReleaseStackTrace /* function */;
  /* 0x0018 */ void* VerifierEngGetStackTraceAddressEx /* function */;
  /* 0x0020 */ struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT UnusedStruct;
  /* 0x00f0 */ void* VerifierEngSetHeapPathCaller /* function */;
} RTL_VERIFIER_PROVIDER_HELPER_TABLE, *PRTL_VERIFIER_PROVIDER_HELPER_TABLE; /* size: 0x00f8 */

