typedef struct _CC_ASYNC_READ_CONTEXT
{
  /* 0x0000 */ void* CompletionRoutine /* function */;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ struct _MDL* Mdl;
  /* 0x0018 */ char RequestorMode;
  /* 0x001c */ unsigned long NestingLevel;
} CC_ASYNC_READ_CONTEXT, *PCC_ASYNC_READ_CONTEXT; /* size: 0x0020 */

