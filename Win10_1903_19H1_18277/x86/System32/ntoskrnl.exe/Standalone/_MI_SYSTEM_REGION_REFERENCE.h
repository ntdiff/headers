typedef struct _MI_SYSTEM_REGION_ANCHOR
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long ReferenceCount : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 31 */
  }; /* bitfield */
} MI_SYSTEM_REGION_ANCHOR, *PMI_SYSTEM_REGION_ANCHOR; /* size: 0x0004 */

typedef struct _MI_SYSTEM_REGION_REFERENCE
{
  struct
  {
    union
    {
      /* 0x0000 */ struct _MI_SYSTEM_REGION_ANCHOR Anchor;
      /* 0x0000 */ unsigned long EntireReference;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_SYSTEM_REGION_REFERENCE, *PMI_SYSTEM_REGION_REFERENCE; /* size: 0x0004 */

