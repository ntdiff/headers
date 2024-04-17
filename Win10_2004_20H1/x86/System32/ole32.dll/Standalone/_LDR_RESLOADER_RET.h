typedef struct _LDR_RESLOADER_RET
{
  /* 0x0000 */ void* Module;
  /* 0x0004 */ void* DataEntry;
  /* 0x0008 */ void* TargetModule;
} LDR_RESLOADER_RET, *PLDR_RESLOADER_RET; /* size: 0x000c */

