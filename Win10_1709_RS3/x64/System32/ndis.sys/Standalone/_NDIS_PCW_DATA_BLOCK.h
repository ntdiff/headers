typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _NDIS_PCW_DATA_BLOCK
{
  /* 0x0000 */ unsigned long DatapathEventReferences[26];
  /* 0x0068 */ unsigned long DatapathCycleReferences[13];
  /* 0x00a0 */ struct _NDIS_PCW_DATA_BLOCK* Next;
  /* 0x00a8 */ unsigned long ReferenceCount;
  /* 0x00b0 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x00b8 */ unsigned long TotalInstanceId;
  /* 0x00c0 */ struct _UNICODE_STRING TotalInstanceName;
  /* 0x00d0 */ long __PADDING__[12];
} NDIS_PCW_DATA_BLOCK, *PNDIS_PCW_DATA_BLOCK; /* size: 0x0100 */

