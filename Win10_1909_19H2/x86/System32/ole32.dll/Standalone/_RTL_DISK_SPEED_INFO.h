enum RTL_DISK_SPEED_POLICY
{
  RtlDiskSpeedPolicyNormal = 10,
  RtlDiskSpeedPolicyFast = 20,
};

typedef struct _RTL_DISK_SPEED_INFO
{
  /* 0x0000 */ enum RTL_DISK_SPEED_POLICY Policy;
} RTL_DISK_SPEED_INFO, *PRTL_DISK_SPEED_INFO; /* size: 0x0004 */

