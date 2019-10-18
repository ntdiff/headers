typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _MMINPAGE_SUPPORT_FLOW_THROUGH
{
  /* 0x0000 */ unsigned __int64 Page[1];
  /* 0x0008 */ struct _MMINPAGE_SUPPORT* InitialInPageSupport;
  /* 0x0010 */ struct _MMPAGING_FILE* PagingFile;
  /* 0x0018 */ unsigned __int64 PageFileOffset;
  /* 0x0020 */ struct _RTL_BALANCED_NODE Node;
} MMINPAGE_SUPPORT_FLOW_THROUGH, *PMMINPAGE_SUPPORT_FLOW_THROUGH; /* size: 0x0038 */

