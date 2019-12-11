typedef union _REFERENCE_OBJECT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Deleting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReferenceCount : 30; /* bit position: 1 */
      /* 0x0000 */ unsigned long Overflow : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ long Value;
  }; /* size: 0x0004 */
} REFERENCE_OBJECT, *PREFERENCE_OBJECT; /* size: 0x0004 */

