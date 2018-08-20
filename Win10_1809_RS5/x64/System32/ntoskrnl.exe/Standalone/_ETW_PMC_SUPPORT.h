typedef enum _KPROFILE_SOURCE
{
  ProfileTime = 0,
  ProfileAlignmentFixup = 1,
  ProfileTotalIssues = 2,
  ProfilePipelineDry = 3,
  ProfileLoadInstructions = 4,
  ProfilePipelineFrozen = 5,
  ProfileBranchInstructions = 6,
  ProfileTotalNonissues = 7,
  ProfileDcacheMisses = 8,
  ProfileIcacheMisses = 9,
  ProfileCacheMisses = 10,
  ProfileBranchMispredictions = 11,
  ProfileStoreInstructions = 12,
  ProfileFpInstructions = 13,
  ProfileIntegerInstructions = 14,
  Profile2Issue = 15,
  Profile3Issue = 16,
  Profile4Issue = 17,
  ProfileSpecialInstructions = 18,
  ProfileTotalCycles = 19,
  ProfileIcacheIssues = 20,
  ProfileDcacheAccesses = 21,
  ProfileMemoryBarrierCycles = 22,
  ProfileLoadLinkedIssues = 23,
  ProfileMaximum = 24,
} KPROFILE_SOURCE, *PKPROFILE_SOURCE;

typedef struct _ETW_PMC_SUPPORT
{
  /* 0x0000 */ enum _KPROFILE_SOURCE Source[8];
  /* 0x0020 */ volatile unsigned long HookIdCount;
  /* 0x0024 */ unsigned short HookId[4];
  /* 0x002c */ volatile unsigned long CountersCount;
  /* 0x0030 */ struct _HAL_PMC_COUNTERS* ProcessorCtrs[1];
} ETW_PMC_SUPPORT, *PETW_PMC_SUPPORT; /* size: 0x0038 */

