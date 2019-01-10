typedef struct _VF_AVL_TREE
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0008 */ void* NodeToFree;
  /* 0x0010 */ unsigned __int64 NodeRangeSize;
  /* 0x0018 */ unsigned __int64 NodeCount;
  /* 0x0020 */ struct _VF_AVL_TABLE* Tables;
  /* 0x0028 */ unsigned long TablesNo;
  union
  {
    union
    {
      /* 0x002c */ unsigned long NodeSize;
      /* 0x002c */ unsigned long UseLookaside;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0030 */ long __PADDING__[4];
} VF_AVL_TREE, *PVF_AVL_TREE; /* size: 0x0040 */

