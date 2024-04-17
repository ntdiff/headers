typedef struct _XSAVE_FEATURE
{
  /* 0x0000 */ unsigned long FeatureId;
  union
  {
    /* 0x0008 */ struct _XSAVE_VENDORS* Vendors;
    /* 0x0008 */ unsigned __int64 Unused;
  }; /* size: 0x0008 */
} XSAVE_FEATURE, *PXSAVE_FEATURE; /* size: 0x0010 */

typedef struct _XSAVE_POLICY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long MaxSaveAreaLength;
  /* 0x0010 */ unsigned __int64 FeatureBitmask;
  /* 0x0018 */ unsigned long NumberOfFeatures;
  /* 0x0020 */ struct _XSAVE_FEATURE Features[1];
} XSAVE_POLICY, *PXSAVE_POLICY; /* size: 0x0030 */

typedef struct _SYSTEM_PROCESSOR_POLICY_INFORMATION
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long PolicyId;
  /* 0x0008 */ struct _XSAVE_POLICY Policy;
} SYSTEM_PROCESSOR_POLICY_INFORMATION, *PSYSTEM_PROCESSOR_POLICY_INFORMATION; /* size: 0x0038 */

