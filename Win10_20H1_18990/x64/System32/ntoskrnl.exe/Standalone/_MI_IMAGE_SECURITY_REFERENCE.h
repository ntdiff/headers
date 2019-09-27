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

typedef struct _IMAGE_SECURITY_CONTEXT
{
  union
  {
    /* 0x0000 */ void* PageHashes;
    /* 0x0000 */ unsigned __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 SecurityBeingCreated : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 SecurityMandatory : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 PageHashPointer : 61; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} IMAGE_SECURITY_CONTEXT, *PIMAGE_SECURITY_CONTEXT; /* size: 0x0008 */

typedef struct _MI_IMAGE_SECURITY_REFERENCE
{
  /* 0x0000 */ struct _MI_PROTOTYPE_PTES_NODE ProtosNode;
  /* 0x0020 */ void* DynamicRelocations;
  /* 0x0028 */ struct _IMAGE_SECURITY_CONTEXT SecurityContext;
  union
  {
    union
    {
      /* 0x0030 */ void* ImageFileExtents;
      /* 0x0030 */ unsigned __int64 ImageFileExtentsUlongPtr;
      struct /* bitfield */
      {
        /* 0x0030 */ unsigned __int64 FilesystemWantsRva : 1; /* bit position: 0 */
        /* 0x0030 */ unsigned __int64 Spare : 3; /* bit position: 1 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0038 */ unsigned __int64 StrongImageReference;
} MI_IMAGE_SECURITY_REFERENCE, *PMI_IMAGE_SECURITY_REFERENCE; /* size: 0x0040 */

