typedef struct _VF_AVL_TREE
{
  /* 0x0000 */ unsigned __int64 NodeRangeSize;
  /* 0x0008 */ volatile unsigned __int64 NodeCount;
  /* 0x0010 */ struct _VF_AVL_TABLE* Tables;
  /* 0x0018 */ unsigned long TablesNo;
  /* 0x001c */ unsigned char UseSessionId;
  union
  {
    union
    {
      /* 0x0020 */ unsigned long NodeSize;
      /* 0x0020 */ unsigned long UseLookaside;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0024 */ long __PADDING__[1];
} VF_AVL_TREE, *PVF_AVL_TREE; /* size: 0x0028 */

