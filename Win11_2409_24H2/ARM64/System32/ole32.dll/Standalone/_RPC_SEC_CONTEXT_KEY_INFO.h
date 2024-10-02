typedef struct _RPC_SEC_CONTEXT_KEY_INFO
{
  /* 0x0000 */ unsigned long EncryptAlgorithm;
  /* 0x0004 */ unsigned long KeySize;
  /* 0x0008 */ unsigned long SignatureAlgorithm;
} RPC_SEC_CONTEXT_KEY_INFO, *PRPC_SEC_CONTEXT_KEY_INFO; /* size: 0x000c */

