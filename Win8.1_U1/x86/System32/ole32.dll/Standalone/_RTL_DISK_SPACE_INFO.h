enum RTL_DISK_SPACE_POLICY
{
  RtlDiskSpacePolicyLow = 10,
  RtlDiskSpacePolicyNormal = 20,
};

typedef struct _RTL_DISK_SPACE_INFO
{
  /* 0x0000 */ enum RTL_DISK_SPACE_POLICY Policy;
} RTL_DISK_SPACE_INFO, *PRTL_DISK_SPACE_INFO; /* size: 0x0004 */

