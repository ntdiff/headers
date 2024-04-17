typedef struct _PERF_INSTANCE_DEFINITION
{
  /* 0x0000 */ unsigned long ByteLength;
  /* 0x0004 */ unsigned long ParentObjectTitleIndex;
  /* 0x0008 */ unsigned long ParentObjectInstance;
  /* 0x000c */ long UniqueID;
  /* 0x0010 */ unsigned long NameOffset;
  /* 0x0014 */ unsigned long NameLength;
} PERF_INSTANCE_DEFINITION, *PPERF_INSTANCE_DEFINITION; /* size: 0x0018 */

