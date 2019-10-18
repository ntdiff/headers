typedef struct _CC_ASYNC_READ_CONTEXT
{
  /* 0x0000 */ void* CompletionRoutine /* function */;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ struct _MDL* Mdl;
  /* 0x000c */ char RequestorMode;
  /* 0x0010 */ unsigned long NestingLevel;
} CC_ASYNC_READ_CONTEXT, *PCC_ASYNC_READ_CONTEXT; /* size: 0x0014 */

