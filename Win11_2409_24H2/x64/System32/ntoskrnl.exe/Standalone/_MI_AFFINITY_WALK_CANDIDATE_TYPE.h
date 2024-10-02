typedef enum _MI_AFFINITY_WALK_CANDIDATE_TYPE
{
  MiAffinityCandidateIdle = 0,
  MiAffinityCandidateIdlePoweredDown = 1,
  MiAffinityCandidatePartiallyIdle = 2,
  MiAffinityCandidatePartiallyIdlePoweredDown = 3,
  MiAffinityCandidateBusy = 4,
  MiAffinityCandidateMaximum = 5,
} MI_AFFINITY_WALK_CANDIDATE_TYPE, *PMI_AFFINITY_WALK_CANDIDATE_TYPE;

