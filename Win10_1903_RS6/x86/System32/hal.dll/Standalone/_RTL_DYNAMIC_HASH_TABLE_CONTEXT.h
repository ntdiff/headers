typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY* ChainHead;
  /* 0x0004 */ struct _LIST_ENTRY* PrevLinkage;
  /* 0x0008 */ unsigned long Signature;
} RTL_DYNAMIC_HASH_TABLE_CONTEXT, *PRTL_DYNAMIC_HASH_TABLE_CONTEXT; /* size: 0x000c */

