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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef struct _MI_PER_SESSION_PROTOS
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE SessionProtoNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeList;
    /* 0x0000 */ void* DriverAddress;
  }; /* size: 0x0018 */
  /* 0x0018 */ struct _MI_PROTOTYPE_PTES_NODE ProtosNode;
  /* 0x0038 */ unsigned __int64 NumberOfPtes;
  union
  {
    /* 0x0040 */ unsigned long SessionId;
    /* 0x0040 */ struct _SUBSECTION* Subsection;
  }; /* size: 0x0008 */
  /* 0x0048 */ struct _MMPTE* SubsectionBase;
  union
  {
    union
    {
      /* 0x0050 */ unsigned long ReferenceCount;
      /* 0x0050 */ unsigned long NumberOfPtesToFree;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x0054 */ long __PADDING__[1];
} MI_PER_SESSION_PROTOS, *PMI_PER_SESSION_PROTOS; /* size: 0x0058 */

