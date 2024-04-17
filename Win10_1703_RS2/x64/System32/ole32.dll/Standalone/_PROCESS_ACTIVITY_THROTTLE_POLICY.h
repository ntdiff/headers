typedef enum _PROCESS_ACTIVITY_THROTTLE_POLICY_OP
{
  ProcessActivityThrottlePolicyDisable = 0,
  ProcessActivityThrottlePolicyEnable = 1,
  ProcessActivityThrottlePolicyDefault = 2,
  MaxProcessActivityThrottlePolicy = 3,
} PROCESS_ACTIVITY_THROTTLE_POLICY_OP, *PPROCESS_ACTIVITY_THROTTLE_POLICY_OP;

typedef struct _PROCESS_ACTIVITY_THROTTLE_POLICY
{
  /* 0x0000 */ enum _PROCESS_ACTIVITY_THROTTLE_POLICY_OP Operation;
  /* 0x0004 */ unsigned long PolicyFlags;
} PROCESS_ACTIVITY_THROTTLE_POLICY, *PPROCESS_ACTIVITY_THROTTLE_POLICY; /* size: 0x0008 */

