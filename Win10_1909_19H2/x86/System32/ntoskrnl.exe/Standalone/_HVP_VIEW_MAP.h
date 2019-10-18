typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _HVP_VIEW_MAP
{
  /* 0x0000 */ void* SectionReference;
  /* 0x0008 */ __int64 StorageEndFileOffset;
  /* 0x0010 */ __int64 SectionEndFileOffset;
  /* 0x0018 */ struct _CMSI_PROCESS_TUPLE* ProcessTuple;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ struct _RTL_RB_TREE ViewTree;
} HVP_VIEW_MAP, *PHVP_VIEW_MAP; /* size: 0x0028 */

