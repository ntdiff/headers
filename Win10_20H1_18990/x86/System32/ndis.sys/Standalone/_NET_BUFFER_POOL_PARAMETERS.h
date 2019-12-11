typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NET_BUFFER_POOL_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long PoolTag;
  /* 0x0008 */ unsigned long DataSize;
} NET_BUFFER_POOL_PARAMETERS, *PNET_BUFFER_POOL_PARAMETERS; /* size: 0x000c */

