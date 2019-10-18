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
          /* 0x000c */ unsigned long AllocationType : 3; /* bit position: 0 */
          /* 0x000c */ unsigned long Inserted : 1; /* bit position: 3 */
        }; /* bitfield */
      } /* size: 0x0004 */ e1;
      struct
      {
        /* 0x000c */ unsigned long PrototypePtesFlags;
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_PROTOTYPE_PTES_NODE, *PMI_PROTOTYPE_PTES_NODE; /* size: 0x0010 */

typedef struct _IMAGE_SECURITY_CONTEXT
{
  union
  {
    /* 0x0000 */ void* PageHashes;
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SecurityBeingCreated : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long SecurityMandatory : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long PageHashPointer : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_SECURITY_CONTEXT, *PIMAGE_SECURITY_CONTEXT; /* size: 0x0004 */

typedef struct _MI_IMAGE_SECURITY_REFERENCE
{
  /* 0x0000 */ struct _MI_PROTOTYPE_PTES_NODE ProtosNode;
  /* 0x0010 */ void* DynamicRelocations;
  /* 0x0014 */ struct _IMAGE_SECURITY_CONTEXT SecurityContext;
  /* 0x0018 */ unsigned long StrongImageReference;
} MI_IMAGE_SECURITY_REFERENCE, *PMI_IMAGE_SECURITY_REFERENCE; /* size: 0x001c */

