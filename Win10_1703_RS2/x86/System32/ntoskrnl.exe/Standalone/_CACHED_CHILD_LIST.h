typedef struct _CACHED_CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  union
  {
    /* 0x0004 */ unsigned long ValueList;
    /* 0x0004 */ struct _CM_KEY_CONTROL_BLOCK* RealKcb;
  }; /* size: 0x0004 */
} CACHED_CHILD_LIST, *PCACHED_CHILD_LIST; /* size: 0x0008 */

