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

