typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

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
  /* 0x001c */ unsigned long ProcessorMasksOffset;
  /* 0x0020 */ unsigned long NumberOfProcessorMasks;
  /* 0x0024 */ unsigned long ProcessorMasksEntrySize;
  /* 0x0028 */ struct _PROCESSOR_NUMBER DefaultProcessorNumber;
} NDIS_RECEIVE_SCALE_PARAMETERS, *PNDIS_RECEIVE_SCALE_PARAMETERS; /* size: 0x002c */

