typedef struct _Flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short ValidCallPending : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short ErrorPending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned short BadStubData : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned short RuntimeCleanedUp : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short ClientHandleCreated : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned short HandlelessObjCall : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned short HasBigByValueArg : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned short ClientDcomPipeCall : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned short Unused : 8; /* bit position: 8 */
  }; /* bitfield */
} Flags, *PFlags; /* size: 0x0002 */

