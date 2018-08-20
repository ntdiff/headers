typedef struct _VF_AVL_TREE
{
  /* 0x0000 */ unsigned __int64 NodeRangeSize;
  /* 0x0008 */ volatile unsigned __int64 NodeCount;
  /* 0x0010 */ struct _VF_AVL_TABLE* Tables;
  /* 0x0018 */ unsigned long TablesNo;
  union // _TAG_UNNAMED_173
  {
    union
    {
      /* 0x001c */ unsigned long NodeSize;
      /* 0x001c */ unsigned long UseLookaside;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} VF_AVL_TREE, *PVF_AVL_TREE; /* size: 0x0020 */

