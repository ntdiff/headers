typedef struct _CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long List;
} CHILD_LIST, *PCHILD_LIST; /* size: 0x0008 */

typedef struct _CM_UOW_SET_VALUE_LIST_DATA
{
  /* 0x0000 */ unsigned long RefCount;
  /* 0x0004 */ struct _CHILD_LIST ValueList;
} CM_UOW_SET_VALUE_LIST_DATA, *PCM_UOW_SET_VALUE_LIST_DATA; /* size: 0x000c */

