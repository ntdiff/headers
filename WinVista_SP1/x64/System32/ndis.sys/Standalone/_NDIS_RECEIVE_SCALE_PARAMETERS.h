typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_RECEIVE_SCALE_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short BaseCpuNumber;
  /* 0x0008 */ unsigned long HashInformation;
  /* 0x000c */ unsigned short IndirectionTableSize;
  /* 0x0010 */ unsigned long IndirectionTableOffset;
  /* 0x0014 */ unsigned short HashSecretKeySize;
  /* 0x0018 */ unsigned long HashSecretKeyOffset;
} NDIS_RECEIVE_SCALE_PARAMETERS, *PNDIS_RECEIVE_SCALE_PARAMETERS; /* size: 0x001c */

