typedef union _PPM_POLICY_SETTINGS_MASK
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long PerfDecreaseTime : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long PerfIncreaseTime : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long PerfDecreasePolicy : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long PerfIncreasePolicy : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned long PerfDecreaseThreshold : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned long PerfIncreaseThreshold : 1; /* bit position: 5 */
        /* 0x0000 */ unsigned long PerfMinPolicy : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned long PerfMaxPolicy : 1; /* bit position: 7 */
        /* 0x0000 */ unsigned long PerfTimeCheck : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned long PerfBoostPolicy : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long PerfBoostMode : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long AllowThrottling : 1; /* bit position: 11 */
        /* 0x0000 */ unsigned long PerfHistoryCount : 1; /* bit position: 12 */
        /* 0x0000 */ unsigned long ParkingPerfState : 1; /* bit position: 13 */
        /* 0x0000 */ unsigned long LatencyHintPerf : 1; /* bit position: 14 */
        /* 0x0000 */ unsigned long LatencyHintUnpark : 1; /* bit position: 15 */
        /* 0x0000 */ unsigned long CoreParkingMinCores : 1; /* bit position: 16 */
        /* 0x0000 */ unsigned long CoreParkingMaxCores : 1; /* bit position: 17 */
        /* 0x0000 */ unsigned long CoreParkingDecreasePolicy : 1; /* bit position: 18 */
        /* 0x0000 */ unsigned long CoreParkingIncreasePolicy : 1; /* bit position: 19 */
        /* 0x0000 */ unsigned long CoreParkingDecreaseTime : 1; /* bit position: 20 */
        /* 0x0000 */ unsigned long CoreParkingIncreaseTime : 1; /* bit position: 21 */
        /* 0x0000 */ unsigned long CoreParkingOverUtilizationThreshold : 1; /* bit position: 22 */
        /* 0x0000 */ unsigned long CoreParkingDistributeUtility : 1; /* bit position: 23 */
        /* 0x0000 */ unsigned long CoreParkingConcurrencyThreshold : 1; /* bit position: 24 */
        /* 0x0000 */ unsigned long CoreParkingHeadroomThreshold : 1; /* bit position: 25 */
        /* 0x0000 */ unsigned long CoreParkingDistributionThreshold : 1; /* bit position: 26 */
        /* 0x0000 */ unsigned long IdleAllowScaling : 1; /* bit position: 27 */
        /* 0x0000 */ unsigned long IdleDisable : 1; /* bit position: 28 */
        /* 0x0000 */ unsigned long IdleTimeCheck : 1; /* bit position: 29 */
        /* 0x0000 */ unsigned long IdleDemoteThreshold : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long IdlePromoteThreshold : 1; /* bit position: 31 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long HeteroDecreaseTime : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long HeteroIncreaseTime : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long HeteroDecreaseThreshold : 1; /* bit position: 2 */
        /* 0x0004 */ unsigned long HeteroIncreaseThreshold : 1; /* bit position: 3 */
        /* 0x0004 */ unsigned long Class0FloorPerformance : 1; /* bit position: 4 */
        /* 0x0004 */ unsigned long Class1InitialPerformance : 1; /* bit position: 5 */
        /* 0x0004 */ unsigned long EnergyPerfPreference : 1; /* bit position: 6 */
        /* 0x0004 */ unsigned long AutonomousActivityWindow : 1; /* bit position: 7 */
        /* 0x0004 */ unsigned long AutonomousMode : 1; /* bit position: 8 */
        /* 0x0004 */ unsigned long DutyCycling : 1; /* bit position: 9 */
        /* 0x0004 */ unsigned long FrequencyCap : 1; /* bit position: 10 */
        /* 0x0004 */ unsigned long ThreadPolicy : 1; /* bit position: 11 */
        /* 0x0004 */ unsigned long ShortThreadPolicy : 1; /* bit position: 12 */
        /* 0x0004 */ unsigned long IdleStateMax : 1; /* bit position: 13 */
        /* 0x0004 */ unsigned long ResponsivenessDisableThreshold : 1; /* bit position: 14 */
        /* 0x0004 */ unsigned long ResponsivenessEnableThreshold : 1; /* bit position: 15 */
        /* 0x0004 */ unsigned long ResponsivenessDisableTime : 1; /* bit position: 16 */
        /* 0x0004 */ unsigned long ResponsivenessEnableTime : 1; /* bit position: 17 */
        /* 0x0004 */ unsigned long ResponsivenessEppCeiling : 1; /* bit position: 18 */
        /* 0x0004 */ unsigned long ResponsivenessPerfFloor : 1; /* bit position: 19 */
        /* 0x0004 */ unsigned long Spare : 12; /* bit position: 20 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} PPM_POLICY_SETTINGS_MASK, *PPPM_POLICY_SETTINGS_MASK; /* size: 0x0008 */

