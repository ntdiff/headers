typedef struct _MM_SESSION_SPACE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Initialized : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long DeletePending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long PoolInitialized : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long DynamicVaInitialized : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long WsInitialized : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long PoolDestroyed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long ObjectInitialized : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long SessionHeapInitialized : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long SessionHeapDestroyed : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long LeakedPoolDeliberately : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Filler : 22; /* bit position: 10 */
  }; /* bitfield */
} MM_SESSION_SPACE_FLAGS, *PMM_SESSION_SPACE_FLAGS; /* size: 0x0004 */

