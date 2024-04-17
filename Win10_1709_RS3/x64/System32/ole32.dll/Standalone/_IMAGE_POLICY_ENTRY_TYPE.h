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
  ImagePolicyEntryTypeMaximum = 12,
} IMAGE_POLICY_ENTRY_TYPE, *PIMAGE_POLICY_ENTRY_TYPE;

