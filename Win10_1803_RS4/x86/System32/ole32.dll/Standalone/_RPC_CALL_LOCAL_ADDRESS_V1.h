enum tagRpcLocalAddressFormat
{
  rlafInvalid = 0,
  rlafIPv4 = 1,
  rlafIPv6 = 2,
};

typedef struct _RPC_CALL_LOCAL_ADDRESS_V1
{
  /* 0x0000 */ unsigned int Version;
  /* 0x0004 */ void* Buffer;
  /* 0x0008 */ unsigned long BufferSize;
  /* 0x000c */ enum tagRpcLocalAddressFormat AddressFormat;
} RPC_CALL_LOCAL_ADDRESS_V1, *PRPC_CALL_LOCAL_ADDRESS_V1; /* size: 0x0010 */

