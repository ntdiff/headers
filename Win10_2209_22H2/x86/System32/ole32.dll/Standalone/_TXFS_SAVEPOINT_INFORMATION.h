typedef struct _TXFS_SAVEPOINT_INFORMATION
{
  /* 0x0000 */ void* KtmTransaction;
  /* 0x0004 */ unsigned long ActionCode;
  /* 0x0008 */ unsigned long SavepointId;
} TXFS_SAVEPOINT_INFORMATION, *PTXFS_SAVEPOINT_INFORMATION; /* size: 0x000c */

