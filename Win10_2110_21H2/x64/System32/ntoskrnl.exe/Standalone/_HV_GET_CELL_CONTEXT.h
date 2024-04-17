typedef struct _HV_GET_BIN_CONTEXT
{
  /* 0x0000 */ unsigned short OutstandingReference : 1; /* bit position: 0 */
} HV_GET_BIN_CONTEXT, *PHV_GET_BIN_CONTEXT; /* size: 0x0002 */

typedef struct _HV_GET_CELL_CONTEXT
{
  /* 0x0000 */ unsigned long Cell;
  /* 0x0004 */ struct _HV_GET_BIN_CONTEXT BinContext;
  /* 0x0006 */ char __PADDING__[2];
} HV_GET_CELL_CONTEXT, *PHV_GET_CELL_CONTEXT; /* size: 0x0008 */

