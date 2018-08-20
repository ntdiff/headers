typedef struct _HV_HYPERVISOR_VERSION_INFO
{
  /* 0x0000 */ unsigned int BuildNumber;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned int MinorVersion : 16; /* bit position: 0 */
    /* 0x0004 */ unsigned int MajorVersion : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0008 */ unsigned int ServicePack;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned int ServiceNumber : 24; /* bit position: 0 */
    /* 0x000c */ unsigned int ServiceBranch : 8; /* bit position: 24 */
  }; /* bitfield */
} HV_HYPERVISOR_VERSION_INFO, *PHV_HYPERVISOR_VERSION_INFO; /* size: 0x0010 */

