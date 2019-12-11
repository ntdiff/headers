typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _NDIS_RSS_SET_INDIRECTION_ENTRY
{
  /* 0x0000 */ unsigned long SwitchId;
  /* 0x0004 */ unsigned long VPortId;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned short IndirectionTableIndex;
  /* 0x000e */ struct _PROCESSOR_NUMBER TargetProcessorNumber;
  /* 0x0014 */ int EntryStatus;
} NDIS_RSS_SET_INDIRECTION_ENTRY, *PNDIS_RSS_SET_INDIRECTION_ENTRY; /* size: 0x0018 */

