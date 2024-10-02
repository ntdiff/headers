typedef struct _RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET
{
  /* 0x0000 */ unsigned long Data[2];
} RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET, *PRTL_FEATURE_USAGE_SUBSCRIPTION_TARGET; /* size: 0x0008 */

typedef struct _RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS
{
  /* 0x0000 */ unsigned int FeatureId;
  /* 0x0004 */ unsigned short ReportingKind;
  /* 0x0006 */ unsigned short ReportingOptions;
  /* 0x0008 */ struct _RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET ReportingTarget;
} RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS, *PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS; /* size: 0x0010 */

