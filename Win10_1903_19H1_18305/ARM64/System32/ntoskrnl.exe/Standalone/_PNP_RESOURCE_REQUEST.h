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
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ enum _ARBITER_REQUEST_SOURCE AllocationType;
  /* 0x0010 */ unsigned long Priority;
  /* 0x0014 */ unsigned long Position;
  /* 0x0018 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
  /* 0x0020 */ void* ReqList;
  /* 0x0028 */ struct _CM_RESOURCE_LIST* ResourceAssignment;
  /* 0x0030 */ struct _CM_RESOURCE_LIST* TranslatedResourceAssignment;
  /* 0x0038 */ long Status;
  /* 0x003c */ long __PADDING__[1];
} PNP_RESOURCE_REQUEST, *PPNP_RESOURCE_REQUEST; /* size: 0x0040 */

