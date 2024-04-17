typedef struct _NDR64_RPC_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short Idempotent : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short Broadcast : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned short Maybe : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned short Reserved0 : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short HasGuarantee : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned short Reserved1 : 3; /* bit position: 5 */
    /* 0x0000 */ unsigned short Message : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned short Reserved2 : 4; /* bit position: 9 */
    /* 0x0000 */ unsigned short InputSynchronous : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned short Asynchronous : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned short Reserved3 : 1; /* bit position: 15 */
  }; /* bitfield */
} NDR64_RPC_FLAGS, *PNDR64_RPC_FLAGS; /* size: 0x0002 */

