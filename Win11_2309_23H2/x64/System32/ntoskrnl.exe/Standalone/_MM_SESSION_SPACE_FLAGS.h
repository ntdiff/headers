typedef struct _MM_SESSION_SPACE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Initialized : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long DeletePending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long WsInitialized : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long ObjectInitialized : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Filler : 28; /* bit position: 4 */
  }; /* bitfield */
} MM_SESSION_SPACE_FLAGS, *PMM_SESSION_SPACE_FLAGS; /* size: 0x0004 */

