typedef struct _IMAGE_SECURITY_CONTEXT
{
  union
  {
    /* 0x0000 */ void* PageHashes;
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SecurityBeingCreated : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long SecurityMandatory : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Unused : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long PageHashPointer : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_SECURITY_CONTEXT, *PIMAGE_SECURITY_CONTEXT; /* size: 0x0004 */

typedef struct _MI_IMAGE_SECURITY_REFERENCE
{
  /* 0x0000 */ struct _IMAGE_SECURITY_CONTEXT SecurityContext;
  /* 0x0004 */ void* DynamicRelocations;
  /* 0x0008 */ volatile long ReferenceCount;
} MI_IMAGE_SECURITY_REFERENCE, *PMI_IMAGE_SECURITY_REFERENCE; /* size: 0x000c */

