typedef struct _CFG_CALL_TARGET_LIST_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfEntries;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long* NumberOfEntriesProcessed;
  /* 0x000c */ struct _CFG_CALL_TARGET_INFO* CallTargetInfo;
} CFG_CALL_TARGET_LIST_INFORMATION, *PCFG_CALL_TARGET_LIST_INFORMATION; /* size: 0x0010 */

