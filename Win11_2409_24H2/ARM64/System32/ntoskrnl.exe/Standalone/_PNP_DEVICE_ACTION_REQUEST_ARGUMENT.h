typedef union _PNP_REBALANCE_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RebalanceDueToDynamicPartitioning : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long ResetDeviceWhileStopped : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0004 */ u;
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} PNP_REBALANCE_FLAGS, *PPNP_REBALANCE_FLAGS; /* size: 0x0004 */

typedef enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
  IommuDomainPolicyAllowAll = 0,
  IommuDomainPolicyBlockPassthrough = 1,
  IommuDomainPolicyMax = 2,
} PNP_DEVICE_IOMMU_DOMAIN_POLICY, *PPNP_DEVICE_IOMMU_DOMAIN_POLICY;

typedef struct _PNP_DEVICE_ACTION_REQUEST_ARGUMENT
{
  /* 0x0000 */ void* PdcActivatorHandle;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned long ProblemCodeToClear;
      } /* size: 0x0004 */ ClearProblem;
      /* 0x0008 */ union _PNP_REBALANCE_FLAGS Rebalance;
      struct
      {
        /* 0x0008 */ unsigned char ClearWaitingForFdo;
      } /* size: 0x0001 */ ReenumerateDeviceOnly;
      struct
      {
        /* 0x0008 */ unsigned char StopRequired;
      } /* size: 0x0001 */ ResourceRequirementsChanged;
      struct
      {
        /* 0x0008 */ unsigned long Flags;
      } /* size: 0x0004 */ RequestDeviceReset;
      struct
      {
        /* 0x0008 */ struct _PLUGPLAY_CONTROL_STATUS_DATA* ControlStatusData;
      } /* size: 0x0008 */ SetDeviceProblem;
      struct
      {
        /* 0x0008 */ enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;
      } /* size: 0x0004 */ UpdateConsoleLockState;
      /* 0x0008 */ unsigned __int64 AsUlong64;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} PNP_DEVICE_ACTION_REQUEST_ARGUMENT, *PPNP_DEVICE_ACTION_REQUEST_ARGUMENT; /* size: 0x0010 */

