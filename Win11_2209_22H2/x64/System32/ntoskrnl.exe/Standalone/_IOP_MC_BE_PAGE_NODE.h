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

typedef struct _IOP_MC_BE_PAGE_NODE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  /* 0x0018 */ unsigned int PageIndex;
  /* 0x001c */ long __PADDING__[1];
} IOP_MC_BE_PAGE_NODE, *PIOP_MC_BE_PAGE_NODE; /* size: 0x0020 */

