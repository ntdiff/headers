typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS
{
  /* 0x0000 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR* ConflictingResource;
  /* 0x0010 */ unsigned long* ConflictCount;
  /* 0x0018 */ struct _ARBITER_CONFLICT_INFO** Conflicts;
} ARBITER_QUERY_CONFLICT_PARAMETERS, *PARBITER_QUERY_CONFLICT_PARAMETERS; /* size: 0x0020 */

