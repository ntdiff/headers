typedef enum _ARBITER_REQUEST_SOURCE
{
  ArbiterRequestUndefined = -1,
  ArbiterRequestLegacyReported = 0,
  ArbiterRequestHalReported = 1,
  ArbiterRequestLegacyAssigned = 2,
  ArbiterRequestPnpDetected = 3,
  ArbiterRequestPnpEnumerated = 4,
} ARBITER_REQUEST_SOURCE, *PARBITER_REQUEST_SOURCE;

typedef struct _PNP_RESOURCE_REQUEST
{
  /* 0x0000 */ struct _DEVICE_OBJECT* PhysicalDevice;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _ARBITER_REQUEST_SOURCE AllocationType;
  /* 0x000c */ unsigned long Priority;
  /* 0x0010 */ unsigned long Position;
  /* 0x0014 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
  /* 0x0018 */ void* ReqList;
  /* 0x001c */ struct _CM_RESOURCE_LIST* ResourceAssignment;
  /* 0x0020 */ struct _CM_RESOURCE_LIST* TranslatedResourceAssignment;
  /* 0x0024 */ long Status;
} PNP_RESOURCE_REQUEST, *PPNP_RESOURCE_REQUEST; /* size: 0x0028 */

