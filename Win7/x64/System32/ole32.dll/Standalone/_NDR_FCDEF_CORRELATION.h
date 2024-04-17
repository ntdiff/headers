typedef struct _NDR_CORRELATION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Early : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Split : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char IsIidIs : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char DontCheck : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Ranged : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char Unused : 3; /* bit position: 5 */
  }; /* bitfield */
} NDR_CORRELATION_FLAGS, *PNDR_CORRELATION_FLAGS; /* size: 0x0001 */

typedef struct _NDR_FCDEF_CORRELATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short Type : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned short Kind : 4; /* bit position: 4 */
    /* 0x0000 */ unsigned short Operation : 8; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0002 */ short Offset;
  /* 0x0004 */ struct _NDR_CORRELATION_FLAGS CorrFlags;
  /* 0x0006 */ unsigned short Reserved : 8; /* bit position: 0 */
} NDR_FCDEF_CORRELATION, *PNDR_FCDEF_CORRELATION; /* size: 0x0008 */

