typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_FLOW_ENTRY_ID_ARRAY
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long TableId;
  /* 0x000c */ unsigned long VPortId;
  union
  {
    union
    {
      struct
      {
        /* 0x0010 */ unsigned long ProviderFlowEntryIdArrayOffset;
        /* 0x0014 */ unsigned long ProviderFlowEntryIdArrayNumElements;
        /* 0x0018 */ unsigned long ProviderFlowEntryIdArrayElementSize;
      } /* size: 0x000c */ FlowEntryIdArray;
      struct
      {
        /* 0x0010 */ unsigned long ProviderFlowEntryIdAndCounterArrayOffset;
        /* 0x0014 */ unsigned long ProviderFlowEntryIdAndCounterArrayNumElements;
        /* 0x0018 */ unsigned long ProviderFlowEntryIdAndCounterArrayElementSize;
      } /* size: 0x000c */ FlowEntryIdAndCounterArray;
    }; /* size: 0x000c */
  } /* size: 0x000c */ IdArray;
} NDIS_GFT_FLOW_ENTRY_ID_ARRAY, *PNDIS_GFT_FLOW_ENTRY_ID_ARRAY; /* size: 0x001c */

