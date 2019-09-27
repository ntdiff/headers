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

