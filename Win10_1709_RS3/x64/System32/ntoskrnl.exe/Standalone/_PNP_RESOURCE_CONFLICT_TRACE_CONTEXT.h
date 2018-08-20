typedef struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT
{
  /* 0x0000 */ unsigned char ResourceType;
  /* 0x0004 */ unsigned long AlternativeCount;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR* ResourceRequests;
  /* 0x0010 */ void* ArbiterInstance;
} PNP_RESOURCE_CONFLICT_TRACE_CONTEXT, *PPNP_RESOURCE_CONFLICT_TRACE_CONTEXT; /* size: 0x0018 */

