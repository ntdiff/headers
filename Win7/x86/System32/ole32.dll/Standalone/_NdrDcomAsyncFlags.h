typedef struct _NdrDcomAsyncFlags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long AsyncMsgSet : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long BeginStarted : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long BeginDone : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long FinishStarted : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long FinishDone : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long BeginError : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long FinishError : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long InvokeForwarded : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Unused : 24; /* bit position: 8 */
  }; /* bitfield */
} NdrDcomAsyncFlags, *PNdrDcomAsyncFlags; /* size: 0x0004 */

