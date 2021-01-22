typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_OPEN_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _UNICODE_STRING* AdapterName;
  /* 0x0010 */ enum _NDIS_MEDIUM* MediumArray;
  /* 0x0018 */ unsigned int MediumArraySize;
  /* 0x0020 */ unsigned int* SelectedMediumIndex;
  /* 0x0028 */ unsigned short* FrameTypeArray;
  /* 0x0030 */ unsigned int FrameTypeArraySize;
  /* 0x0034 */ long __PADDING__[1];
} NDIS_OPEN_PARAMETERS, *PNDIS_OPEN_PARAMETERS; /* size: 0x0038 */

