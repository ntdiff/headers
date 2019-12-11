struct wil_details_FeatureProperties
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int enabledState : 2; /* bit position: 0 */
    /* 0x0000 */ unsigned int isVariant : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int queuedForReporting : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int hasNotificationState : 2; /* bit position: 4 */
    /* 0x0000 */ unsigned int usageCount : 9; /* bit position: 6 */
    /* 0x0000 */ unsigned int usageCountRepresentsPotential : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned int reportedDeviceUsage : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned int reportedDevicePotential : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned int reportedDeviceOpportunity : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned int reportedDevicePotentialOpportunity : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned int recordedDeviceUsage : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned int recordedDevicePotential : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned int recordedDeviceOpportunity : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned int recordedDevicePotentialOpportunity : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned int opportunityCount : 7; /* bit position: 24 */
    /* 0x0000 */ unsigned int opportunityCountRepresentsPotential : 1; /* bit position: 31 */
  }; /* bitfield */
}; /* size: 0x0004 */

struct wil_details_VariantProperties
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int enabledState : 2; /* bit position: 0 */
    /* 0x0000 */ unsigned int isVariant : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int queuedForReporting : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int hasNotificationState : 2; /* bit position: 4 */
    /* 0x0000 */ unsigned int recordedDeviceUsage : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned int variant : 6; /* bit position: 7 */
    /* 0x0000 */ unsigned int unused : 19; /* bit position: 13 */
  }; /* bitfield */
}; /* size: 0x0004 */

union wil_details_FeaturePropertyCache
{
  union
  {
    /* 0x0000 */ struct wil_details_FeatureProperties cache;
    /* 0x0000 */ struct wil_details_VariantProperties variant;
    /* 0x0000 */ volatile long var;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

