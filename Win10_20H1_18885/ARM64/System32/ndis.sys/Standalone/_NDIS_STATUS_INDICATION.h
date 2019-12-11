typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NDIS_STATUS_INDICATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* SourceHandle;
  /* 0x0010 */ unsigned long PortNumber;
  /* 0x0014 */ int StatusCode;
  /* 0x0018 */ unsigned long Flags;
  /* 0x0020 */ void* DestinationHandle;
  /* 0x0028 */ void* RequestId;
  /* 0x0030 */ void* StatusBuffer;
  /* 0x0038 */ unsigned long StatusBufferSize;
  /* 0x003c */ struct _GUID Guid;
  /* 0x0050 */ void* NdisReserved[4];
} NDIS_STATUS_INDICATION, *PNDIS_STATUS_INDICATION; /* size: 0x0070 */

