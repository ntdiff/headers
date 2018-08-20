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

typedef struct _MI_PER_SESSION_PROTOS
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE SessionProtoNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeList;
    /* 0x0000 */ void* DriverAddress;
  }; /* size: 0x0018 */
  union
  {
    /* 0x0018 */ unsigned long SessionId;
    /* 0x0018 */ struct _SUBSECTION* Subsection;
  }; /* size: 0x0008 */
  /* 0x0020 */ struct _MMPTE* SubsectionBase;
  union // _TAG_UNNAMED_91
  {
    union
    {
      /* 0x0028 */ unsigned long ReferenceCount;
      /* 0x0028 */ unsigned long NumberOfPtesToFree;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x002c */ long __PADDING__[1];
} MI_PER_SESSION_PROTOS, *PMI_PER_SESSION_PROTOS; /* size: 0x0030 */

