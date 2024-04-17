typedef struct _SYSTEM_NUMA_PROXIMITY_MAP
{
  /* 0x0000 */ unsigned long NodeProximityId;
  /* 0x0004 */ unsigned char NodeNumber;
  /* 0x0005 */ char __PADDING__[3];
} SYSTEM_NUMA_PROXIMITY_MAP, *PSYSTEM_NUMA_PROXIMITY_MAP; /* size: 0x0008 */

