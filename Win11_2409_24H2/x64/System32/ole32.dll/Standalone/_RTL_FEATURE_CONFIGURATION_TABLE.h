typedef struct _RTL_FEATURE_CONFIGURATION_INTERNAL
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
  /* 0x000c */ unsigned int ChangeTimeUpgrade : 1; /* bit position: 0 */
} RTL_FEATURE_CONFIGURATION_INTERNAL, *PRTL_FEATURE_CONFIGURATION_INTERNAL; /* size: 0x0010 */

typedef struct _RTL_FEATURE_CONFIGURATION_TABLE
{
  /* 0x0000 */ unsigned long FeatureCount;
  /* 0x0004 */ struct _RTL_FEATURE_CONFIGURATION_INTERNAL Features[1];
} RTL_FEATURE_CONFIGURATION_TABLE, *PRTL_FEATURE_CONFIGURATION_TABLE; /* size: 0x0014 */

