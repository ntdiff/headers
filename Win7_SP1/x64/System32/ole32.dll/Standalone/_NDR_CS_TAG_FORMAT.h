typedef struct _NDR_CS_TAG_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char STag : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char DRTag : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char RTag : 1; /* bit position: 2 */
  }; /* bitfield */
} NDR_CS_TAG_FLAGS, *PNDR_CS_TAG_FLAGS; /* size: 0x0001 */

typedef struct _NDR_CS_TAG_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ struct _NDR_CS_TAG_FLAGS Flags;
  /* 0x0002 */ unsigned short TagRoutineIndex;
} NDR_CS_TAG_FORMAT, *PNDR_CS_TAG_FORMAT; /* size: 0x0004 */

