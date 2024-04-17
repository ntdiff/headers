typedef struct _MESSAGE_RESOURCE_BLOCK
{
  /* 0x0000 */ unsigned long LowId;
  /* 0x0004 */ unsigned long HighId;
  /* 0x0008 */ unsigned long OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK, *PMESSAGE_RESOURCE_BLOCK; /* size: 0x000c */

typedef struct _MESSAGE_RESOURCE_DATA
{
  /* 0x0000 */ unsigned long NumberOfBlocks;
  /* 0x0004 */ struct _MESSAGE_RESOURCE_BLOCK Blocks[1];
} MESSAGE_RESOURCE_DATA, *PMESSAGE_RESOURCE_DATA; /* size: 0x0010 */

