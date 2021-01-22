union wil_details_ReportedState
{
  union
  {
    /* 0x0000 */ unsigned int exchange;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned int queuedForReporting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned int reportedDeviceUsage : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned int reportedDevicePotential : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned int reportedDeviceOpportunity : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned int reportedDevicePotentialOpportunity : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned int usageCount : 9; /* bit position: 5 */
      /* 0x0000 */ unsigned int usageCountRepresentsPotential : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned int opportunityCount : 7; /* bit position: 15 */
      /* 0x0000 */ unsigned int opportunityCountRepresentsPotential : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned int unused : 9; /* bit position: 23 */
    }; /* bitfield */
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

union wil_details_RecordedState
{
  union
  {
    /* 0x0000 */ unsigned int exchange;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned int recordedDeviceUsage : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned int recordedDevicePotential : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned int recordedDeviceOpportunity : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned int recordedDevicePotentialOpportunity : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned int recordedVariantDeviceUsage : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned int recordedVariant : 6; /* bit position: 5 */
      /* 0x0000 */ unsigned int unused : 21; /* bit position: 11 */
    }; /* bitfield */
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

struct wil_details_FeatureReportingCache
{
  /* 0x0000 */ union wil_details_ReportedState reported;
  /* 0x0004 */ union wil_details_RecordedState recorded;
}; /* size: 0x0008 */

