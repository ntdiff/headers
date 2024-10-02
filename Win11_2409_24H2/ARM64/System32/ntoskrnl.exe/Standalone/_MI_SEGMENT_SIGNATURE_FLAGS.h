typedef struct _MI_SEGMENT_SIGNATURE_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ImageSigningLevel : 4; /* bit position: 0 */
      /* 0x0000 */ unsigned char ImageSigningType : 3; /* bit position: 4 */
      /* 0x0000 */ unsigned char Spare : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char EntireField;
  }; /* size: 0x0001 */
} MI_SEGMENT_SIGNATURE_FLAGS, *PMI_SEGMENT_SIGNATURE_FLAGS; /* size: 0x0001 */

