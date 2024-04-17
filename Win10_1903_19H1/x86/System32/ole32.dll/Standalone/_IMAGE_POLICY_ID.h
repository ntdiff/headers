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
  ImagePolicyIdMaximum = 12,
} IMAGE_POLICY_ID, *PIMAGE_POLICY_ID;

