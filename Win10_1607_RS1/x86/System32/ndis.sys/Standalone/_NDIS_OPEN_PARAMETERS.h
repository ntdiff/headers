typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_OPEN_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _UNICODE_STRING* AdapterName;
  /* 0x0008 */ enum _NDIS_MEDIUM* MediumArray;
  /* 0x000c */ unsigned int MediumArraySize;
  /* 0x0010 */ unsigned int* SelectedMediumIndex;
  /* 0x0014 */ unsigned short* FrameTypeArray;
  /* 0x0018 */ unsigned int FrameTypeArraySize;
} NDIS_OPEN_PARAMETERS, *PNDIS_OPEN_PARAMETERS; /* size: 0x001c */

