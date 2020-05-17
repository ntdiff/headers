typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_OFFLOAD_CLIENT_HANDLERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
} NDIS_OFFLOAD_CLIENT_HANDLERS, *PNDIS_OFFLOAD_CLIENT_HANDLERS; /* size: 0x0004 */

