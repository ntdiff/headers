typedef struct _NDR64_CONTEXT_HANDLE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char CannotBeNull : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Serialize : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char NoSerialize : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char Strict : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char IsReturn : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char IsOut : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char IsIn : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char IsViaPointer : 1; /* bit position: 7 */
  }; /* bitfield */
} NDR64_CONTEXT_HANDLE_FLAGS, *PNDR64_CONTEXT_HANDLE_FLAGS; /* size: 0x0001 */

