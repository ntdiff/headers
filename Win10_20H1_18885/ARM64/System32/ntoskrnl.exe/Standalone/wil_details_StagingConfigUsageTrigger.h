struct wil_details_StagingConfigWnfStateName
{
  /* 0x0000 */ unsigned int Data[2];
}; /* size: 0x0008 */

struct wil_details_StagingConfigUsageTrigger
{
  /* 0x0000 */ unsigned int featureId;
  /* 0x0004 */ struct wil_details_StagingConfigWnfStateName trigger;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned int serviceReportingKind : 16; /* bit position: 0 */
    /* 0x000c */ unsigned int isVariantConfig : 1; /* bit position: 16 */
    /* 0x000c */ unsigned int unused : 15; /* bit position: 17 */
  }; /* bitfield */
}; /* size: 0x0010 */

