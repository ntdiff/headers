typedef struct _PNP_REPLACE_PROCESSOR_LIST
{
  /* 0x0000 */ unsigned __int64* Affinity;
  /* 0x0008 */ unsigned long GroupCount;
  /* 0x000c */ unsigned long AllocatedCount;
  /* 0x0010 */ unsigned long Count;
  /* 0x0014 */ unsigned long ApicIds[1];
} PNP_REPLACE_PROCESSOR_LIST, *PPNP_REPLACE_PROCESSOR_LIST; /* size: 0x0018 */

