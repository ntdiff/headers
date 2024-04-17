typedef struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT
{
  /* 0x0000 */ unsigned long UnusedLong;
  /* 0x0004 */ void* UnusedPointer[25];
} RTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT, *PRTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT; /* size: 0x0068 */

typedef struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ void* VerifierEngLogStackTrace /* function */;
  /* 0x0008 */ void* VerifierEngReleaseStackTrace /* function */;
  /* 0x000c */ void* VerifierEngGetStackTraceAddressEx /* function */;
  /* 0x0010 */ struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE::_RTL_VERIFIER_PROVIDER_HELPER_TABLE_UNUSED_STRUCT UnusedStruct;
  /* 0x0078 */ void* VerifierEngSetHeapPathCaller /* function */;
} RTL_VERIFIER_PROVIDER_HELPER_TABLE, *PRTL_VERIFIER_PROVIDER_HELPER_TABLE; /* size: 0x007c */

