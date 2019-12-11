typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_OFFLOAD_ENCAPSULATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  struct
  {
    /* 0x0004 */ unsigned long Enabled;
    /* 0x0008 */ unsigned long EncapsulationType;
    /* 0x000c */ unsigned long HeaderSize;
  } /* size: 0x000c */ IPv4;
  struct
  {
    /* 0x0010 */ unsigned long Enabled;
    /* 0x0014 */ unsigned long EncapsulationType;
    /* 0x0018 */ unsigned long HeaderSize;
  } /* size: 0x000c */ IPv6;
} NDIS_OFFLOAD_ENCAPSULATION, *PNDIS_OFFLOAD_ENCAPSULATION; /* size: 0x001c */

typedef struct _NDIS_OPEN_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OFFLOAD_ENCAPSULATION SetEncapsulation;
  /* 0x001c */ unsigned char AlreadySetEncapsulation;
  /* 0x0020 */ struct _NDIS_OFFLOAD_ENCAPSULATION XlateEncap;
  struct
  {
    /* 0x003c */ unsigned long Oid;
    /* 0x0040 */ void* Buffer;
    /* 0x0044 */ unsigned long BufferLength;
  } /* size: 0x000c */ Encapsulation;
  struct
  {
    /* 0x0048 */ unsigned long Oid;
    /* 0x004c */ void* Buffer;
    /* 0x0050 */ unsigned long BufferLength;
  } /* size: 0x000c */ Task;
} NDIS_OPEN_OFFLOAD, *PNDIS_OPEN_OFFLOAD; /* size: 0x0054 */

