typedef struct _PIPEDESC_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short AuxOutBufferAllocated : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short NoBufferCallPending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned short Reserved : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned short NoMoreBuffersToRead : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short LastPipeSend : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned short InPipePush : 1; /* bit position: 5 */
  }; /* bitfield */
} PIPEDESC_FLAGS, *PPIPEDESC_FLAGS; /* size: 0x0002 */

