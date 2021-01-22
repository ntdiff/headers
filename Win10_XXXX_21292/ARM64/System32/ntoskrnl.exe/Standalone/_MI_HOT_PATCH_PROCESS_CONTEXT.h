typedef struct _MI_HOT_PATCH_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EPROCESS* Process;
  /* 0x0008 */ void* ProcessHandle;
  /* 0x0010 */ unsigned long TbFlushStamp;
  /* 0x0014 */ long __PADDING__[1];
} MI_HOT_PATCH_PROCESS_CONTEXT, *PMI_HOT_PATCH_PROCESS_CONTEXT; /* size: 0x0018 */

