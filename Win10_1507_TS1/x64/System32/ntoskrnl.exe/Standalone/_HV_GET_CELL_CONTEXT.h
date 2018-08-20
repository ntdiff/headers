typedef struct _HV_GET_CELL_CONTEXT
{
  union
  {
    /* 0x0000 */ unsigned long Cell;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long IsInTempBin : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} HV_GET_CELL_CONTEXT, *PHV_GET_CELL_CONTEXT; /* size: 0x0004 */

