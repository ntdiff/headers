typedef union _PPM_POLICY_SETTINGS_MASK
{
  union
  {
    /* 0x0000 */ unsigned __int64 Buffer[2];
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 PerfDecreaseTime : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 PerfIncreaseTime : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 PerfDecreasePolicy : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned __int64 PerfIncreasePolicy : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned __int64 PerfDecreaseThreshold : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned __int64 PerfIncreaseThreshold : 1; /* bit position: 5 */
        /* 0x0000 */ unsigned __int64 PerfMinPolicy : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned __int64 PerfMaxPolicy : 1; /* bit position: 7 */
        /* 0x0000 */ unsigned __int64 PerfTimeCheck : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned __int64 PerfBoostPolicy : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned __int64 PerfBoostMode : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned __int64 ThrottlingPolicy : 1; /* bit position: 11 */
        /* 0x0000 */ unsigned __int64 PerfHistoryCount : 1; /* bit position: 12 */
        /* 0x0000 */ unsigned __int64 ParkingPerfState : 1; /* bit position: 13 */
        /* 0x0000 */ unsigned __int64 LatencyHintPerf : 1; /* bit position: 14 */
        /* 0x0000 */ unsigned __int64 LatencyHintEpp : 1; /* bit position: 15 */
        /* 0x0000 */ unsigned __int64 LatencyHintUnpark : 1; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 CPMinCores : 1; /* bit position: 17 */
        /* 0x0000 */ unsigned __int64 CPMaxCores : 1; /* bit position: 18 */
        /* 0x0000 */ unsigned __int64 CPDecreasePolicy : 1; /* bit position: 19 */
        /* 0x0000 */ unsigned __int64 CPIncreasePolicy : 1; /* bit position: 20 */
        /* 0x0000 */ unsigned __int64 CPDecreaseTime : 1; /* bit position: 21 */
        /* 0x0000 */ unsigned __int64 CPIncreaseTime : 1; /* bit position: 22 */
        /* 0x0000 */ unsigned __int64 CPOverUtilizationThreshold : 1; /* bit position: 23 */
        /* 0x0000 */ unsigned __int64 CPDistributeUtility : 1; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 CPConcurrencyThreshold : 1; /* bit position: 25 */
        /* 0x0000 */ unsigned __int64 CPHeadroomThreshold : 1; /* bit position: 26 */
        /* 0x0000 */ unsigned __int64 CPDistributeThreshold : 1; /* bit position: 27 */
        /* 0x0000 */ unsigned __int64 IdleAllowScaling : 1; /* bit position: 28 */
        /* 0x0000 */ unsigned __int64 IdleDisabled : 1; /* bit position: 29 */
        /* 0x0000 */ unsigned __int64 IdleTimeCheck : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned __int64 IdleDemoteThreshold : 1; /* bit position: 31 */
        /* 0x0000 */ unsigned __int64 IdlePromoteThreshold : 1; /* bit position: 32 */
        /* 0x0000 */ unsigned __int64 EnergyPerfPreference : 1; /* bit position: 33 */
        /* 0x0000 */ unsigned __int64 AutonomousActivityWindow : 1; /* bit position: 34 */
        /* 0x0000 */ unsigned __int64 AutonomousMode : 1; /* bit position: 35 */
        /* 0x0000 */ unsigned __int64 DutyCycling : 1; /* bit position: 36 */
        /* 0x0000 */ unsigned __int64 FrequencyCap : 1; /* bit position: 37 */
        /* 0x0000 */ unsigned __int64 IdleStateMax : 1; /* bit position: 38 */
        /* 0x0000 */ unsigned __int64 ResponsivenessDisableThreshold : 1; /* bit position: 39 */
        /* 0x0000 */ unsigned __int64 ResponsivenessEnableThreshold : 1; /* bit position: 40 */
        /* 0x0000 */ unsigned __int64 ResponsivenessDisableTime : 1; /* bit position: 41 */
        /* 0x0000 */ unsigned __int64 ResponsivenessEnableTime : 1; /* bit position: 42 */
        /* 0x0000 */ unsigned __int64 ResponsivenessEppCeiling : 1; /* bit position: 43 */
        /* 0x0000 */ unsigned __int64 ResponsivenessPerfFloor : 1; /* bit position: 44 */
        /* 0x0000 */ unsigned __int64 SoftParkLatency : 1; /* bit position: 45 */
        /* 0x0000 */ unsigned __int64 ModuleUnparkPolicy : 1; /* bit position: 46 */
        /* 0x0000 */ unsigned __int64 ComplexUnparkPolicy : 1; /* bit position: 47 */
        /* 0x0000 */ unsigned __int64 SmtUnparkPolicy : 1; /* bit position: 48 */
        /* 0x0000 */ unsigned __int64 RestrictionCount : 1; /* bit position: 49 */
        /* 0x0000 */ unsigned __int64 ResourcePriority : 1; /* bit position: 50 */
        /* 0x0000 */ unsigned __int64 HeteroDecreaseTime : 1; /* bit position: 51 */
        /* 0x0000 */ unsigned __int64 HeteroIncreaseTime : 1; /* bit position: 52 */
        /* 0x0000 */ unsigned __int64 HeteroDecreaseThreshold : 1; /* bit position: 53 */
        /* 0x0000 */ unsigned __int64 HeteroIncreaseThreshold : 1; /* bit position: 54 */
        /* 0x0000 */ unsigned __int64 Class0FloorPerformance : 1; /* bit position: 55 */
        /* 0x0000 */ unsigned __int64 Class1InitialPerformance : 1; /* bit position: 56 */
        /* 0x0000 */ unsigned __int64 SchedulingPolicy : 1; /* bit position: 57 */
        /* 0x0000 */ unsigned __int64 ShortSchedulingPolicy : 1; /* bit position: 58 */
        /* 0x0000 */ unsigned __int64 ShortThreadRuntimeThreshold : 1; /* bit position: 59 */
        /* 0x0000 */ unsigned __int64 ShortThreadArchClassUpperThreshold : 1; /* bit position: 60 */
        /* 0x0000 */ unsigned __int64 ShortThreadArchClassLowerThreshold : 1; /* bit position: 61 */
        /* 0x0000 */ unsigned __int64 LongThreadArchClassUpperThreshold : 1; /* bit position: 62 */
        /* 0x0000 */ unsigned __int64 LongThreadArchClassLowerThreshold : 1; /* bit position: 63 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeteroPolicy : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 HeteroContainmentIncreaseTime : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 HeteroContainmentDecreaseTime : 1; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 HeteroEfficiencyContainmentThreshold : 1; /* bit position: 3 */
        /* 0x0008 */ unsigned __int64 HeteroHybridContainmentThreshold : 1; /* bit position: 4 */
        /* 0x0008 */ unsigned __int64 HeteroContainmentPolicy : 1; /* bit position: 5 */
      }; /* bitfield */
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} PPM_POLICY_SETTINGS_MASK, *PPPM_POLICY_SETTINGS_MASK; /* size: 0x0010 */

