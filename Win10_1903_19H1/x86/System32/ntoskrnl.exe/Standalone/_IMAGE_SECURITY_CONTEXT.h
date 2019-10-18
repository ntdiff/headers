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

