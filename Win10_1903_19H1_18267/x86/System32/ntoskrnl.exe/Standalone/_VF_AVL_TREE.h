typedef struct _VF_AVL_TREE
{
  /* 0x0000 */ unsigned long NodeRangeSize;
  /* 0x0004 */ volatile unsigned long NodeCount;
  /* 0x0008 */ struct _VF_AVL_TABLE* Tables;
  /* 0x000c */ unsigned long TablesNo;
  /* 0x0010 */ unsigned char UseSessionId;
  union
  {
    union
    {
      /* 0x0014 */ unsigned long NodeSize;
      /* 0x0014 */ unsigned long UseLookaside;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} VF_AVL_TREE, *PVF_AVL_TREE; /* size: 0x0018 */

