enum RTL_DISK_WRITE_CONSTRAINT_POLICY
{
  RtlDiskWriteConstraintPolicyLimited = 50,
  RtlDiskWriteConstraintPolicyNormal = 100,
};

typedef struct _RTL_DISK_WRITE_CONSTRAINT_INFO
{
  /* 0x0000 */ enum RTL_DISK_WRITE_CONSTRAINT_POLICY Policy;
} RTL_DISK_WRITE_CONSTRAINT_INFO, *PRTL_DISK_WRITE_CONSTRAINT_INFO; /* size: 0x0004 */

