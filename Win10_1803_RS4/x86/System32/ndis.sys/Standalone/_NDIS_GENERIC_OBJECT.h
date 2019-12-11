typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GENERIC_OBJECT
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* Caller;
  /* 0x0008 */ void* CallersCaller;
  /* 0x000c */ struct _DRIVER_OBJECT* DriverObject;
} NDIS_GENERIC_OBJECT, *PNDIS_GENERIC_OBJECT; /* size: 0x0010 */

