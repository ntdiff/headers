typedef struct _MI_RESTRICTED_MODWRITES
{
  /* 0x0000 */ unsigned char MaximumClusterPages;
  /* 0x0001 */ unsigned char ReducedClusterWrites;
  /* 0x0002 */ unsigned char ImposeDelay;
} MI_RESTRICTED_MODWRITES, *PMI_RESTRICTED_MODWRITES; /* size: 0x0003 */

