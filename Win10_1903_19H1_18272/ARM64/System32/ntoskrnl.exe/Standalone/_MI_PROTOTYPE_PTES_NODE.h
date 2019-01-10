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

typedef struct _MI_PROTOTYPE_PTES_NODE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0018 */ unsigned __int64 AllocationType : 3; /* bit position: 0 */
          /* 0x0018 */ unsigned __int64 Inserted : 1; /* bit position: 3 */
        }; /* bitfield */
      } /* size: 0x0008 */ e1;
      struct
      {
        /* 0x0018 */ unsigned __int64 PrototypePtesFlags;
      } /* size: 0x0008 */ e2;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_PROTOTYPE_PTES_NODE, *PMI_PROTOTYPE_PTES_NODE; /* size: 0x0020 */

