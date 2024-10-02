typedef enum _IMAGE_POLICY_ENTRY_TYPE
{
  ImagePolicyEntryTypeNone = 0,
  ImagePolicyEntryTypeBool = 1,
  ImagePolicyEntryTypeInt8 = 2,
  ImagePolicyEntryTypeUInt8 = 3,
  ImagePolicyEntryTypeInt16 = 4,
  ImagePolicyEntryTypeUInt16 = 5,
  ImagePolicyEntryTypeInt32 = 6,
  ImagePolicyEntryTypeUInt32 = 7,
  ImagePolicyEntryTypeInt64 = 8,
  ImagePolicyEntryTypeUInt64 = 9,
  ImagePolicyEntryTypeAnsiString = 10,
  ImagePolicyEntryTypeUnicodeString = 11,
  ImagePolicyEntryTypeOverride = 12,
  ImagePolicyEntryTypeMaximum = 13,
} IMAGE_POLICY_ENTRY_TYPE, *PIMAGE_POLICY_ENTRY_TYPE;

typedef enum _IMAGE_POLICY_ID
{
  ImagePolicyIdNone = 0,
  ImagePolicyIdEtw = 1,
  ImagePolicyIdDebug = 2,
  ImagePolicyIdCrashDump = 3,
  ImagePolicyIdCrashDumpKey = 4,
  ImagePolicyIdCrashDumpKeyGuid = 5,
  ImagePolicyIdParentSd = 6,
  ImagePolicyIdParentSdRev = 7,
  ImagePolicyIdSvn = 8,
  ImagePolicyIdDeviceId = 9,
  ImagePolicyIdCapability = 10,
  ImagePolicyIdScenarioId = 11,
  ImagePolicyIdCapabilityOverridable = 12,
  ImagePolicyIdTrustletIdOverridable = 13,
  ImagePolicyIdMaximum = 14,
} IMAGE_POLICY_ID, *PIMAGE_POLICY_ID;

typedef struct _IMAGE_POLICY_ENTRY
{
  /* 0x0000 */ enum _IMAGE_POLICY_ENTRY_TYPE Type;
  /* 0x0004 */ enum _IMAGE_POLICY_ID PolicyId;
  union
  {
    union
    {
      /* 0x0008 */ const void* None;
      /* 0x0008 */ unsigned char BoolValue;
      /* 0x0008 */ char Int8Value;
      /* 0x0008 */ unsigned char UInt8Value;
      /* 0x0008 */ short Int16Value;
      /* 0x0008 */ unsigned short UInt16Value;
      /* 0x0008 */ int Int32Value;
      /* 0x0008 */ unsigned int UInt32Value;
      /* 0x0008 */ __int64 Int64Value;
      /* 0x0008 */ unsigned __int64 UInt64Value;
      /* 0x0008 */ const char* AnsiStringValue;
      /* 0x0008 */ const wchar_t* UnicodeStringValue;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} IMAGE_POLICY_ENTRY, *PIMAGE_POLICY_ENTRY; /* size: 0x0010 */

