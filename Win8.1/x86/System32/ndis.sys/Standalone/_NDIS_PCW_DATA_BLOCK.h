typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_PCW_DATA_BLOCK
{
  /* 0x0000 */ unsigned long DatapathEventReferences[26];
  /* 0x0068 */ unsigned long DatapathCycleReferences[13];
  /* 0x009c */ struct _NDIS_PCW_DATA_BLOCK* Next;
  /* 0x00a0 */ unsigned long ReferenceCount;
  /* 0x00a4 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x00a8 */ unsigned long TotalInstanceId;
  /* 0x00ac */ struct _UNICODE_STRING TotalInstanceName;
  /* 0x00b4 */ unsigned long OffsetToPerCpuDataBlocks;
  /* 0x00b8 */ unsigned long PerCpuByteStride;
  /* 0x00bc */ long __PADDING__[1];
} NDIS_PCW_DATA_BLOCK, *PNDIS_PCW_DATA_BLOCK; /* size: 0x00c0 */

