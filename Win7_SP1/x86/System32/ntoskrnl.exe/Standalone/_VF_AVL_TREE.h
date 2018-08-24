typedef struct _VF_AVL_TREE
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0004 */ void* NodeToFree;
  /* 0x0008 */ unsigned long NodeRangeSize;
  /* 0x000c */ unsigned long NodeCount;
  /* 0x0010 */ struct _VF_AVL_TABLE* Tables;
  /* 0x0014 */ unsigned long TablesNo;
  union // _TAG_UNNAMED_80
  {
    union
    {
      /* 0x0018 */ unsigned long NodeSize;
      /* 0x0018 */ unsigned long UseLookaside;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x001c */ long __PADDING__[9];
} VF_AVL_TREE, *PVF_AVL_TREE; /* size: 0x0040 */

