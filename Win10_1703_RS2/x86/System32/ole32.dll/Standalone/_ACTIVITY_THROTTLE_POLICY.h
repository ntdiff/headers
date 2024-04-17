typedef enum _ACTIVITY_THROTTLE_POLICY_OP
{
  ActivityThrottlePolicyDisable = 0,
  ActivityThrottlePolicyEnable = 1,
  ActivityThrottlePolicyDefault = 2,
  MaxActivityThrottlePolicy = 3,
} ACTIVITY_THROTTLE_POLICY_OP, *PACTIVITY_THROTTLE_POLICY_OP;

typedef struct _ACTIVITY_THROTTLE_POLICY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _ACTIVITY_THROTTLE_POLICY_OP Operation;
  /* 0x0008 */ unsigned long PolicyFlags;
} ACTIVITY_THROTTLE_POLICY, *PACTIVITY_THROTTLE_POLICY; /* size: 0x000c */

