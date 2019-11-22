typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS
{
  /* 0x0000 */ struct _LIST_ENTRY* ArbitrationList;
  /* 0x0008 */ unsigned long AllocateFromCount;
  /* 0x0010 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;
} ARBITER_TEST_ALLOCATION_PARAMETERS, *PARBITER_TEST_ALLOCATION_PARAMETERS; /* size: 0x0018 */

