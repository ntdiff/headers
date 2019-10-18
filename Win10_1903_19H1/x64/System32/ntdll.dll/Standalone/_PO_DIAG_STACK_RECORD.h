typedef struct _PO_DIAG_STACK_RECORD
{
  /* 0x0000 */ unsigned long StackDepth;
  /* 0x0008 */ void* Stack[1];
} PO_DIAG_STACK_RECORD, *PPO_DIAG_STACK_RECORD; /* size: 0x0010 */

