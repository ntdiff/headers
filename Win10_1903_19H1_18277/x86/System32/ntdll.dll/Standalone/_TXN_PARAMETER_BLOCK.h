typedef struct _TXN_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short TxFsContext;
  /* 0x0004 */ void* TransactionObject;
} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK; /* size: 0x0008 */

