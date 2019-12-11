typedef struct _NDIS_SS_STOP_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long QueryRemove : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long DeviceRemove : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long SurpriseRemove : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long QueryStop : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long DeviceStop : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long SystemPower : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long NicQuiet : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long PnPOp : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long NotStarted : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long MiniportFatalError : 1; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_SS_STOP_FLAGS, *PNDIS_SS_STOP_FLAGS; /* size: 0x0004 */

