typedef struct _MESSAGE_RESOURCE_BLOCK
{
  /* 0x0000 */ unsigned long LowId;
  /* 0x0004 */ unsigned long HighId;
  /* 0x0008 */ unsigned long OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK, *PMESSAGE_RESOURCE_BLOCK; /* size: 0x000c */

