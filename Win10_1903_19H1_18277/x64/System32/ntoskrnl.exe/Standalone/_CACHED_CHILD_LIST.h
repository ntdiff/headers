typedef struct _CACHED_CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  union
  {
    /* 0x0008 */ unsigned __int64 ValueList;
    /* 0x0008 */ struct _CM_KEY_CONTROL_BLOCK* RealKcb;
  }; /* size: 0x0008 */
} CACHED_CHILD_LIST, *PCACHED_CHILD_LIST; /* size: 0x0010 */

