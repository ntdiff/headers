typedef struct _RPC_BINDING_VECTOR
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0008 */ void* BindingH[1];
} RPC_BINDING_VECTOR, *PRPC_BINDING_VECTOR; /* size: 0x0010 */

