typedef struct _ETW_LBR_SUPPORT
{
  /* 0x0000 */ unsigned long LbrHandle;
  /* 0x0004 */ unsigned long LbrOptions;
  /* 0x0008 */ volatile unsigned long HookIdCount;
  /* 0x000c */ unsigned short HookId[4];
} ETW_LBR_SUPPORT, *PETW_LBR_SUPPORT; /* size: 0x0014 */

