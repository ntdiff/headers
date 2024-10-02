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

typedef enum _KHETERO_CPU_POLICY
{
  KHeteroCpuPolicyAll = 0,
  KHeteroCpuPolicyLarge = 1,
  KHeteroCpuPolicyLargeOrIdle = 2,
  KHeteroCpuPolicySmall = 3,
  KHeteroCpuPolicySmallOrIdle = 4,
  KHeteroCpuPolicyDynamic = 5,
  KHeteroCpuPolicyStaticMax = 5,
  KHeteroCpuPolicyBiasedSmall = 6,
  KHeteroCpuPolicyBiasedLarge = 7,
  KHeteroCpuPolicyDefault = 8,
  KHeteroCpuPolicyMax = 9,
} KHETERO_CPU_POLICY, *PKHETERO_CPU_POLICY;

typedef enum _PPM_HETERO_POLICY
{
  PpmHeteroPolicyNone = 0,
  PpmHeteroPolicyManual = 1,
  PpmHeteroPolicySmallOnly = 2,
  PpmHeteroPolicyLargeOnly = 3,
  PpmHeteroPolicyDynamic = 4,
  PpmHeteroPolicyMaximum = 5,
} PPM_HETERO_POLICY, *PPPM_HETERO_POLICY;

typedef struct _PPM_ENGINE_SETTINGS
{
  /* 0x0000 */ union _PPM_POLICY_SETTINGS_MASK ExplicitSetting[2];
  /* 0x0020 */ unsigned char ThrottlingPolicy;
  /* 0x0024 */ unsigned long PerfTimeCheck;
  /* 0x0028 */ unsigned char PerfHistoryCount[2];
  /* 0x002a */ unsigned char PerfMinPolicy[2];
  /* 0x002c */ unsigned char PerfMaxPolicy[2];
  /* 0x002e */ unsigned char PerfDecreaseTime[2];
  /* 0x0030 */ unsigned char PerfIncreaseTime[2];
  /* 0x0032 */ unsigned char PerfDecreasePolicy[2];
  /* 0x0034 */ unsigned char PerfIncreasePolicy[2];
  /* 0x0036 */ unsigned char PerfDecreaseThreshold[2];
  /* 0x0038 */ unsigned char PerfIncreaseThreshold[2];
  /* 0x003c */ unsigned long PerfFrequencyCap[2];
  /* 0x0044 */ unsigned long PerfBoostPolicy;
  /* 0x0048 */ unsigned long PerfBoostMode;
  /* 0x004c */ unsigned long PerfReductionTolerance;
  /* 0x0050 */ unsigned long EnergyPerfPreference[2];
  /* 0x0058 */ unsigned long AutonomousActivityWindow;
  /* 0x005c */ unsigned char AutonomousPreference;
  /* 0x005d */ unsigned char LatencyHintPerf[2];
  /* 0x005f */ unsigned char LatencyHintEpp[2];
  /* 0x0061 */ unsigned char LatencyHintUnpark[2];
  /* 0x0064 */ unsigned long ResponsivenessDisableThreshold[2];
  /* 0x006c */ unsigned long ResponsivenessEnableThreshold[2];
  /* 0x0074 */ unsigned char ResponsivenessDisableTime[2];
  /* 0x0076 */ unsigned char ResponsivenessEnableTime[2];
  /* 0x0078 */ unsigned long ResponsivenessEppCeiling[2];
  /* 0x0080 */ unsigned long ResponsivenessPerfFloor[2];
  /* 0x0088 */ unsigned char DutyCycling;
  /* 0x0089 */ unsigned char ParkingPerfState[2];
  /* 0x008b */ unsigned char DistributeUtility;
  /* 0x008c */ unsigned char CoreParkingOverUtilizationThreshold;
  /* 0x008d */ unsigned char CoreParkingConcurrencyThreshold;
  /* 0x008e */ unsigned char CoreParkingHeadroomThreshold;
  /* 0x008f */ unsigned char CoreParkingDistributionThreshold;
  /* 0x0090 */ unsigned char CoreParkingDecreasePolicy;
  /* 0x0091 */ unsigned char CoreParkingIncreasePolicy;
  /* 0x0094 */ unsigned long CoreParkingDecreaseTime;
  /* 0x0098 */ unsigned long CoreParkingIncreaseTime;
  /* 0x009c */ unsigned char CoreParkingMinCores[2];
  /* 0x009e */ unsigned char CoreParkingMaxCores[2];
  /* 0x00a0 */ unsigned long SoftParkLatency;
  /* 0x00a4 */ unsigned char AllowScaling;
  /* 0x00a5 */ unsigned char IdleDisabled;
  /* 0x00a8 */ unsigned long IdleTimeCheck;
  /* 0x00ac */ unsigned char IdleDemotePercent;
  /* 0x00ad */ unsigned char IdlePromotePercent;
  /* 0x00ae */ unsigned char IdleStateMax;
  /* 0x00af */ unsigned char ResourcePriority[2];
  /* 0x00b1 */ unsigned char HeteroDecreaseTime;
  /* 0x00b2 */ unsigned char HeteroIncreaseTime;
  /* 0x00b3 */ unsigned char HeteroDecreaseThreshold[64][2];
  /* 0x0133 */ unsigned char HeteroIncreaseThreshold[64][2];
  /* 0x01b3 */ unsigned char Class0FloorPerformance;
  /* 0x01b4 */ unsigned char Class1InitialPerformance;
  /* 0x01b8 */ unsigned long ShortThreadRuntimeThreshold;
  /* 0x01bc */ enum _KHETERO_CPU_POLICY ThreadPolicies[2];
  /* 0x01c4 */ unsigned char ArchClassLowerThreshold[2];
  /* 0x01c6 */ unsigned char ArchClassUpperThreshold[2];
  /* 0x01c8 */ unsigned char ModuleUnparkPolicy;
  /* 0x01c9 */ unsigned char ComplexUnparkPolicy;
  /* 0x01ca */ unsigned char SmtUnparkPolicy;
  /* 0x01cc */ enum _PPM_HETERO_POLICY HeteroPolicy;
  /* 0x01d0 */ unsigned long HeteroContainmentDecreaseTime;
  /* 0x01d4 */ unsigned long HeteroContainmentIncreaseTime;
  /* 0x01d8 */ unsigned long HeteroEfficiencyContainmentThreshold;
  /* 0x01dc */ unsigned long HeteroHybridContainmentThreshold;
  /* 0x01e0 */ unsigned long HeteroContainmentPolicy;
  /* 0x01e4 */ unsigned char RestrictionCount;
  /* 0x01e5 */ char __PADDING__[3];
} PPM_ENGINE_SETTINGS, *PPPM_ENGINE_SETTINGS; /* size: 0x01e8 */

