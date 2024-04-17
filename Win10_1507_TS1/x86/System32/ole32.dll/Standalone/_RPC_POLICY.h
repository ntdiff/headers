typedef struct _RPC_POLICY
{
  /* 0x0000 */ unsigned int Length;
  /* 0x0004 */ unsigned long EndpointFlags;
  /* 0x0008 */ unsigned long NICFlags;
} RPC_POLICY, *PRPC_POLICY; /* size: 0x000c */

