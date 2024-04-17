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

