typedef struct _RTL_FEATURE_CONFIGURATION
{
  /* 0x0000 */ unsigned int FeatureId;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned int Priority : 4; /* bit position: 0 */
    /* 0x0004 */ unsigned int EnabledState : 2; /* bit position: 4 */
    /* 0x0004 */ unsigned int IsWexpConfiguration : 1; /* bit position: 6 */
    /* 0x0004 */ unsigned int HasSubscriptions : 1; /* bit position: 7 */
    /* 0x0004 */ unsigned int Variant : 6; /* bit position: 8 */
    /* 0x0004 */ unsigned int VariantPayloadKind : 2; /* bit position: 14 */
  }; /* bitfield */
  /* 0x0008 */ unsigned int VariantPayload;
} RTL_FEATURE_CONFIGURATION, *PRTL_FEATURE_CONFIGURATION; /* size: 0x000c */

typedef struct _SYSTEM_FEATURE_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ChangeStamp;
  /* 0x0008 */ struct _RTL_FEATURE_CONFIGURATION Configuration;
  /* 0x0014 */ long __PADDING__[1];
} SYSTEM_FEATURE_CONFIGURATION_INFORMATION, *PSYSTEM_FEATURE_CONFIGURATION_INFORMATION; /* size: 0x0018 */

