typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_DRIVER_WRAPPER_HANDLE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* NdisWrapperHandle;
} NDIS_DRIVER_WRAPPER_HANDLE, *PNDIS_DRIVER_WRAPPER_HANDLE; /* size: 0x0008 */

