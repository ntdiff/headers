typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MI_PER_SESSION_PROTOS
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE SessionProtoNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeList;
    /* 0x0000 */ void* DriverAddress;
  }; /* size: 0x000c */
  union
  {
    /* 0x000c */ unsigned long SessionId;
    /* 0x000c */ struct _SUBSECTION* Subsection;
  }; /* size: 0x0004 */
  /* 0x0010 */ struct _MMPTE* SubsectionBase;
  union
  {
    union
    {
      /* 0x0014 */ unsigned long ReferenceCount;
      /* 0x0014 */ unsigned long NumberOfPtesToFree;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
} MI_PER_SESSION_PROTOS, *PMI_PER_SESSION_PROTOS; /* size: 0x0018 */

