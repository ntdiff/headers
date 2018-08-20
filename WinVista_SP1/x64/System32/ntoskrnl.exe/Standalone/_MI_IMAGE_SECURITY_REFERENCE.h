typedef struct _IMAGE_SECURITY_CONTEXT
{
  union
  {
    /* 0x0000 */ void* PageHashes;
    /* 0x0000 */ unsigned __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 SecurityBeingCreated : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 SecurityMandatory : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 PageHashPointer : 61; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} IMAGE_SECURITY_CONTEXT, *PIMAGE_SECURITY_CONTEXT; /* size: 0x0008 */

typedef struct _MI_IMAGE_SECURITY_REFERENCE
{
  /* 0x0000 */ struct _IMAGE_SECURITY_CONTEXT SecurityContext;
  /* 0x0008 */ void* DynamicRelocations;
  /* 0x0010 */ volatile long ReferenceCount;
  /* 0x0014 */ long __PADDING__[1];
} MI_IMAGE_SECURITY_REFERENCE, *PMI_IMAGE_SECURITY_REFERENCE; /* size: 0x0018 */

